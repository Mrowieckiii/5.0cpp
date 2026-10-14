#include <iostream>
using namespace std;

int main() {
    int secret = 6;
    int roll;
    int guess = 0;
    while (guess != secret) {
        cout << "Try to find secret number!: " << endl;
        cin >> guess;
        if (guess != secret) {
            cout << "Try another number!: " << endl;
        }
        }
    cout << "You're right " << secret << " is secret number !!!";
    return 0;
}