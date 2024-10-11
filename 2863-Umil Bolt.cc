#include <bits/stdc++.h>
using namespace std;

int main() {
    while (true) {
        int t;
        if (!(cin >> t)) break; // End of file check
        vector<double> times(t);
        double min_time = numeric_limits<double>::max();
        for (int i = 0; i < t; i++) {
            cin >> times[i];
            min_time = min(min_time, times[i]);
        }
        cout << min_time << endl;
    }
    return 0;
}
