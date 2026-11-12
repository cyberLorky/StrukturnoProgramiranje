#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int largest = 0;
    int sum = 0;

    for (int i=0; i<n; i++) {
        int prirodni;
        cin>>prirodni;

        int new_num = 0;
        int pozicija = 1;

        while (prirodni>0) {
            int d = prirodni % 10;
            int komplement = 9 - d;

            new_num = new_num + komplement * pozicija;

            pozicija*=10;
            prirodni/=10;
        }
        cout<<new_num<<endl;

        sum = sum + new_num;
        if (new_num > largest) {
            largest = new_num;
        }
    }
    cout<<"Sum: "<<sum<<endl;
    cout<<"Largest: "<<largest<<endl;
    
    return 0;
}
