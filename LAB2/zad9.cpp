#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "Empty cart" << endl;
        return 0;
    }

    int discountedItems = 0;
    double maxCena = 0;
    double totalProductsPrice = 0;
    double cena;

    for (int i = 0; i < n; i++) {
        cin >> cena;

        if (cena > maxCena) {
            maxCena = cena;
        }
        
        if (cena >= 1000) {
            discountedItems++;
            cena = cena - (cena * 0.1); 
        }

        totalProductsPrice += cena;
    }

    double delivery = 150;
    if (totalProductsPrice > 5000) {
        delivery = 0;
    }

    double total = totalProductsPrice + delivery;

    cout<<"Discounted items: "<<discountedItems<<endl;
    cout<<"Most expensive item: "<<maxCena<<endl;
    cout<<"Delivery: "<<delivery <<endl;
    cout<<"Total: "<<total<<endl;

    return 0;
}
