#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int ocenki;
    int total = 0;
    int failing = 0;
    int withoutmarks = 0;

    for (int i=0; i<n; i++) {
        int bezOcenki = 0;
        while (cin>>ocenki && ocenki != 0) {
            total++;
            bezOcenki++;
            if (ocenki == 5) {
                failing++;
            }
        }
        if (bezOcenki == 0) {
            withoutmarks++;
        }
    }
    cout<<"Total marks: "<<total<<endl;
    cout<<"Failing marks: "<<failing<<endl;
    cout<<"Students without marks: "<<withoutmarks<<endl;

    return 0;
}
