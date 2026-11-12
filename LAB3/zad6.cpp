#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int total = 0;
    int parcels = 0;
    int courierswithout = 0;

    for (int i=0; i<n; i++) {
        int tezina;
        int nituEdnaPratka = 0;
        while (cin>>tezina && tezina != 0) {
            total++;
            nituEdnaPratka++;
            if (tezina > 20) {
                parcels++;
            }
        }
        if (nituEdnaPratka == 0) {
            courierswithout++;
        }
    }
    cout<<"Total parcels: "<<total<<endl;
    cout<<"Parcels over 20 kg: "<<parcels<<endl;
    cout<<"Couriers without parcels: "<<courierswithout<<endl;
    
    return 0;
}
