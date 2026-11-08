#include <iostream>
using namespace std;

int main() {
    int a,b;

    cin>>a>>b;

    int zbirParni = 0;
    int brNeparni = 0;
    int proizvodNeparni = 1;

    for (int i=a; i<=b; i++) {
        if (i != 0) {
            if (i%2==0) {
                zbirParni+=i;
            }
            if (i%2!=0) {
                brNeparni++;
                proizvodNeparni*=i;
            }
        }
    }
    if (brNeparni == 0) {
        proizvodNeparni = 0;
    }
    cout<<"Sum of even numbers: "<<zbirParni<<endl;
    cout<<"Odd numbers: "<<brNeparni<<endl;
    cout<<"Product of odd numbers: "<<proizvodNeparni<<endl;

    return 0;
}
