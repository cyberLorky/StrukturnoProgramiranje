#include <iostream>
using namespace std;

int main() {
    int brzina;

    int valid = 0;
    int highest = 0;
    int lowest = 0;
    int above = 0;

    while (cin>>brzina) {
        if (brzina >= 10 && brzina <= 250) {
            valid++;
            if (brzina > highest) {
                highest = brzina;
            }
            if (brzina < lowest || lowest == 0) {
                lowest = brzina;
            }
            if (brzina > 60) {
                above++;
            }
        }
    }

    cout<<"Valid readings: "<<valid<<endl;
    cout<<"Highest: "<<highest<<endl;
    cout<<"Lowest: "<<lowest<<endl;
    cout<<"Above 60: "<<above<<endl;

    return 0;
}
