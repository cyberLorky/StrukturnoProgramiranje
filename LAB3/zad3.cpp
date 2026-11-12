#include <iostream>
using namespace std;

int main() {

    int temperatura=0;
    int valid_reading=0;
    int highest=-100;
    int lowest=100;
    int above25=0;

while (cin>>temperatura) {
    if (temperatura >= -40 && temperatura <= 60) {
        valid_reading++;
    if (temperatura > highest) {
        highest = temperatura;
    }
    if (temperatura < lowest ) {
        lowest = temperatura;
    }
    if (temperatura > 25) {
        above25++;
    }
    }
}
    cout<<"Valid readings: "<<valid_reading<<endl;
    cout<<"Highest: "<<highest<<endl;
    cout<<"Lowest: "<<lowest<<endl;
    cout<<"Above 25: "<<above25<<endl;
    
    return 0;
}
