#include <iostream>
using namespace std;

int main() {
    int vremetraenje;
    cin >> vremetraenje;

    int paidBlocks = 0;
    int lateFee = 0;
    int price = 0;

    if (vremetraenje > 30) {
        int extraTime = vremetraenje - 30;
        paidBlocks = (extraTime + 29) / 30;
        price = paidBlocks * 40;
    }

    if (vremetraenje > 300) {
        lateFee = 300;
        price += lateFee;
    }

    cout << "Paid blocks: " << paidBlocks << endl;
    cout << "Late fee: " << lateFee << endl;
    cout << "Price: " << price << endl;

    return 0;
}
