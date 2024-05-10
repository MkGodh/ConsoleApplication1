#include <algorithm>
#include <iostream>
#include <istream>
#include <string>

using namespace std;

int main() {
    float time[10];
    float max = 0;

    for (int i = 0; i < 10; ++i) {
        cin >> time[i];
        if (max < time[i]) {
            max = time[i];
        }
    }
    max += 1;
    float first = max, second = max, third = max;

    for (int i = 0; i < 10; ++i) {
        if (first > time[i]) {
            third = second;
            second = first;
            first = time[i];
        }
        else
            if (second > time[i]) {
                third = second;
                second = time[i];
            }
            else
                if (third > time[i]) {
                    third = time[i];
                }
    }
    cout << "Gold:" << first << endl;
    cout << "Silver:" << second << endl;
    cout << "Bronze:" << third << endl;

}

