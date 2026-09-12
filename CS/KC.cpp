#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << "\033[31m";
    for (double y = 1.3; y >= -1.3; y -= 0.12) {
        for (double x = -1.4; x <= 1.4; x += 0.06) {
            double xx = x * 1.6;
            double a = xx * xx + y * y - 1;
            if (a * a * a - xx * xx * y * y * y <= 0)
                cout << "**";
            else
                cout << "  ";
        }
        cout << '\n';
    }

    cout << "\033[0m";
    cout << "\n      <3\n";
}