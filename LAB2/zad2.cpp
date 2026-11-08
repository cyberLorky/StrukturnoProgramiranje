#include <iostream>
using namespace std;

int main() {
    int ogranicuvanje;
    int izmerena_brzina;

    cin >> ogranicuvanje >> izmerena_brzina;

    int overLimit = izmerena_brzina - ogranicuvanje;

    if (overLimit < 0) {
        overLimit = 0;
    }

    cout << "Over the limit: " << overLimit << endl;

    if (overLimit == 0) {
        cout << "No fine" << endl;
    } 
    else if (overLimit <= 10) {
        cout << "Warning" << endl;
    } 
    else if (overLimit >= 11 && overLimit <= 30) {
        cout << "Fine: 1500" << endl;
    } 
    else {
        cout << "Fine: 4500" << endl;
        cout << "License suspended" << endl;
    }

    return 0;
}
