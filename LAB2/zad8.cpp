#include <iostream>
using namespace std;

int main() {
    int a,b,d;

    cin>>a>>b>>d;

    int temp = 0;
    int zbir = 0;
    int brojac = 0;
    int largest = -1;
    for (int i=a; i<=b; i++) {
        temp = i % 10;
        if (d == temp) {
            brojac++;
            zbir+=i;
            if (i > largest) {
                largest = i;
            }
        }
    }
    if (brojac == 0) {
        cout<<"No numbers";
    }
    else {
        cout<<"Count: "<<brojac<<endl;
        cout<<"Sum: "<<zbir<<endl;
        cout<<"Largest: "<<largest<<endl;
    }

    return 0;
}
