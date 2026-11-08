#include<iostream>
using namespace std;

int main() {
    int br_denovi;

    cin>>br_denovi;

    int lateDays = 0;
    int cena = 0;

    if (br_denovi > 14) {
        lateDays = br_denovi - 14;
        cena = (cena + lateDays) * 20;
    }

    if (cena > 500) {
        cena = 500;
    }

    cout<<"Late days: "<<lateDays<<endl;
    cout<<"Fee: "<<cena<<endl;

    int maxCena = cena;

    if (br_denovi <= 14) {
        cout<<"Status: ON TIME"<<endl;
        return 0;
    }
    if (maxCena >= 500) {
        cout<<"Status: MAXIMUM FEE"<<endl;
        return 0;
    }
    else {
        cout<<"Status: LATE"<<endl;
    }
    return 0;
}
