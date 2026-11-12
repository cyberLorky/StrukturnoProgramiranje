#include <iostream>
using namespace std;

int main() {
    int puls;
    int valid = 0;
    int highest = 0;
    int lowest = 0;
    int above100 = 0;

    while (cin>>puls) {
        if (puls >= 30 && puls <= 220) {
            valid++;
            if (puls > highest) {
                highest = puls;
            }
            if (puls < lowest || lowest == 0) {
                lowest = puls;
            }
            if (puls > 100) {
                above100++;
            }
        }
    }
    cout<<"Valid readings: "<<valid<<endl;
    cout<<"Highest: "<<highest<<endl;
    cout<<"Lowest: "<<lowest<<endl;
    cout<<"Above 100: "<<above100<<endl;

    return 0;
}
