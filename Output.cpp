#include <iostream>
#include <vector>
#include <queue>

using namespace std;
bool isSafeState(const vector<vector<int>>& allocation,
                 const vector<vector<int>>& max,
                 const vector<int>& available,
                 const vector<bool>& finish,
                 vector<int>& safeSeq) {
    int numProcesses = allocation.size();
    int numResources = available.size();

    vector<int> work = available;
    vector<bool> finishCopy = finish;

    int count = 0;
    while (count < numProcesses) {
        bool found = false;
        for (int i = 0; i < numProcesses; ++i) {
            if (!finishCopy[i]) {
                bool canAllocate = true;
                for (int j = 0; j < numResources; ++j) {
                    if (max[i][j] - allocation[i][j] > work[j]) {
                        canAllocate = false;
                        break;
                    }
                }
                if (canAllocate) {
                    for (int j = 0; j < numResources; ++j) {
                        work[j] += allocation[i][j];
                    }
                    finishCopy[i] = true;
                    safeSeq.push_back(i);
                    found = true;
                    ++count;
                }
            }
        }
        if (!found) {
            return false;
        }
    }
    return true;
}

int main() {
    int numProcesses, numResources;
    cout << "Enter the number of processes: ";
    cin >> numProcesses;
    cout << "Enter the number of resources: ";
    cin >> numResources;
    vector<vector<int>> allocation(numProcesses, vector<int>(numResources));
    cout << "Enter the Allocation Matrix:" << endl;
    for (int i = 0; i < numProcesses; ++i) {
        cout << "Process " << i << ": ";
        for (int j = 0; j < numResources; ++j) {
            cin >> allocation[i][j];
        }
    }

    vector<vector<int>> max(numProcesses, vector<int>(numResources));
    cout << "Enter the Max Matrix:" << endl;
    for (int i = 0; i < numProcesses; ++i) {
        cout << "Process " << i << ": ";
        for (int j = 0; j < numResources; ++j) {
            cin >> max[i][j];
        }
    }

    // Input available resources
    vector<int> available(numResources);
    cout << "Enter the Available Matrix:" << endl;
    for (int i = 0; i < numResources; ++i) {
        cin >> available[i];
    }

    vector<bool> finish(numProcesses, false);
    vector<int> safeSeq;

    // Check if system is in a safe state
    bool safe = isSafeState(allocation, max, available, finish, safeSeq);

    // Output the result
    if (safe) {
        cout << "System is in a safe state." << endl;
        cout << "Safe Sequence: ";
        for (int i = 0; i < safeSeq.size(); ++i) {
            cout << "P" << safeSeq[i];
            if (i != safeSeq.size() - 1) {
                cout << " -> ";
            }
        }
        cout<< "\nNeed Matrix :\n";
        for (int i = 0; i < numProcesses; ++i) {
        cout << "Process " << i << ": ";
        for (int j = 0; j < numResources; ++j) {
            cout<< (max[i][j]-allocation[i][j])<<"\t";
        }
        cout<<"\n";
    }
        cout << endl;
    } else {
        cout << "System is not in a safe state." << endl;
    }

    return 0;
}