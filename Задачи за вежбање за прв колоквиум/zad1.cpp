// Svi test caseovi kje bidev uploadani na imgur               https://imgur.com/a/DwwcWJu
// Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8). Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура), да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE.
// Input
// 99 500
// Result
// 200

#include <iostream>
using namespace std;

bool eParen(int broj)
{
    while(broj>0)
    {
        int cifra=broj%10; // se zema posledna cifra
        if(cifra%2!=0){
            return false;
        }
        broj=broj/10; 
    }
    
    if(broj == 0){
        return true;
    }
    if(broj<0){
        return false;
    }
    return true;
}
int main(){
    int m,n, broj;
    cin>>m>>n;
    for(int i=m; i<=n; i++)
    {
        if (eParen(i))
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"NE"<<endl;
    return 0;
}
