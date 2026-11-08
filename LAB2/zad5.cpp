#include <iostream>
using namespace std;

int main() {
    int a,b;

    cin>>a>>b;

    int brojac4 = 0;
    int brojac6 = 0;
    int brojacBoth = 0;
    int sum = 0;

    for (int i=a; i<=b; i++) {
        if (i%4 == 0) {
            brojac4++;
        }
        if (i%6 == 0) {
            brojac6++;
        }
        if (i%4 == 0 && i%6 == 0) {
            brojacBoth++;
            sum+=i;
        }
        
    }
    cout<<"Divisible by 4: "<<brojac4<<endl;
    cout<<"Divisible by 6: "<<brojac6<<endl;
    cout<<"Divisible by both: "<<brojacBoth<<endl;
    cout<<"Sum of numbers divisible by both: "<<sum<<endl;
    
    return 0;
}
