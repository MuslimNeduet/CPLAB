#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    if (number < 0) {
        number = -number;
    }
    int count = 0;
    if (number == 0) {
        count = 1;
    } else {
        while (number != 0) {
            number /= 10;
            count++;
        }
    }
    cout << "No. of digits = " << count << endl;
    return 0;
}
