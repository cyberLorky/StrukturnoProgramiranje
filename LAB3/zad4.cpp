#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int total = 0;
    int over = 0;
    int empty = 0;

    for (int i=0; i<n; i++) {
        int cena;
        int br_artikli = 0;
        while (cin>>cena && cena != 0) {
            total++;
            br_artikli++;
            if (cena > 500) {
                over++;
            }
        }
        if (br_artikli == 0) {
            empty++;
        }
    }
    cout << "Total items: " << total << endl;
    cout << "Items over 500: " << over << endl;
    cout << "Empty baskets: " << empty << endl;

    return 0;
}
