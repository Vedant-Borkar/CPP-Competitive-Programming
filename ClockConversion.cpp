#include <iostream>
#include <string>

using namespace std;

// Function to convert time from 24-hour format to 12-hour format
string convertTo12HourFormat(string time) {
    int hh = stoi(time.substr(0, 2));
    int mm = stoi(time.substr(3, 2));
    
    string period = (hh >= 12) ? "PM" : "AM";
    
    if (hh == 0)
        hh = 12;
    else if (hh > 12)
        hh -= 12;
    
    string hour = (hh < 10) ? "0" + to_string(hh) : to_string(hh);
    string minute = (mm < 10) ? "0" + to_string(mm) : to_string(mm);
    
    return hour + ":" + minute + " " + period;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string time;
        cin >> time;
        cout << convertTo12HourFormat(time) << endl;
    }
    
    return 0;
}
