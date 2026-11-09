#include<iostream>
using namespace std;

int main() {
    int n, br_oceni;

    cin>>n;

    int valid = 0;
    int ignored = 0;
    double prosecna = 0.0;
    int br_ocenki5 = 0;

    for (int i=0; i<n; i++) {
        cin>>br_oceni;

        if (br_oceni == 1 || br_oceni == 2 ||br_oceni == 3 ||br_oceni == 4 ||br_oceni == 5) {
            valid++;
            prosecna = prosecna + br_oceni;
        }
        else {
            ignored++;
        }
        if (br_oceni == 5) {
            br_ocenki5++;
        }
    }
    prosecna = prosecna / valid;
    
    if (valid == 0) {
        cout<<"No valid ratings"<<endl;
        return 0;
    }

    cout<<"Valid ratings: "<<valid<<endl;
    cout<<"Ignored: "<<ignored<<endl;
    cout<<"Five-star ratings: "<<br_ocenki5<<endl;
    cout<<"Average: "<<prosecna<<endl;

    return 0;
}
