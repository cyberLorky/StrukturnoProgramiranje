#include <iostream>
using namespace std;

int main() {
    int trenutnaTemp, posakuvanaTemp;

    cin>>trenutnaTemp>>posakuvanaTemp;

    int difference = 0;
    int degreesToChange = 0;

    difference = trenutnaTemp - posakuvanaTemp;

    degreesToChange = abs(difference);

    if (difference == 1 || difference == -1) {
        degreesToChange = 0;
    }

    cout<<"Difference: "<<difference<<endl;
    cout<<"Degrees to change: "<<degreesToChange<<endl;
    cout<<"Mode: ";

    if (degreesToChange == 0){
        cout<<"OK"<<endl;
        return 0;
    }
    if (posakuvanaTemp > trenutnaTemp) {
        cout<<"Heating ON"<<endl;
    }
    else if (posakuvanaTemp < trenutnaTemp) {
        cout<<"Cooling ON"<<endl;
    }

    return 0;
}
