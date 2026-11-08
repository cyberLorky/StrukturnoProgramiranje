#include <iostream>
using namespace std;

int main() {
    int a,b;

    cin>>a>>b;

    int brojac=0;
    int temp = 0;
    int temp2 = 0;
    for (int i=a; i<=b; i++) {
        temp = i%10;
        temp2 = (i/10)%10;
        if (temp == temp2) {
            cout<<i<<" ";
            brojac++;
        }
    }
    if (brojac == 0) {
        cout<<"No numbers"<<endl;
        return 0;
    }
    else {
        cout<<endl;
    }
    cout<<"Count: "<<brojac<<endl;
    
    return 0;
}
