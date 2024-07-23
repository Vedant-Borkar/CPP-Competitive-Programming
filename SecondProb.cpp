#include <iostream>
#include <vector>

using namespace std;

int readInt() {
    int value;
    cin >> value;
    return value;
}

void printLong(long value) {
    cout << value << " ";
}

void printNewLine() {
    cout << endl;
}

void process() {
    int numElements = readInt();
    int startIndex = readInt();
    int endIndex = readInt();
    vector<long> array(numElements + 1);
    
    for(int i = startIndex + 1; i <= numElements; i++) {
        if ((startIndex - i) % 2 != 0) array[i] = -1;
        else array[i] = 1;
    }
    
    for(int i = endIndex; i <= startIndex; i++) array[i] = 1;
    
    for(int i = endIndex - 1; i >= 1; i--) {
        if ((endIndex - i) % 2 != 0) array[i] = -1;
        else array[i] = 1;
    }
    
    for(int i = 1; i <= numElements; i++) printLong(array[i]);
    printNewLine();
}

void execute() {
    int testCases = readInt();
    while (testCases-- > 0) process();
    cout.flush();
}

int main() {
    execute();
    return 0;
}
