Такси превоз 

Апликација за такси превоз ја пресметува цената на возењето. Од стандарден влез се читаат должината на патот во километри (реален број), времетраењето на возењето во секунди (цел број) и бројот на патници (цел број).

Цената се пресметува на следниот начин:

почетна цена: 50 ден.
40 ден. за секој километар
5 ден. за секоја цела минута возење (започната минута не се наплаќа)
Програмата треба да го испечати времетраењето во минути и секунди, вкупната цена и колку плаќа секој патник ако цената се дели подеднакво. Форматот на излезот мора да биде ист како во примерот.

Пример влез:

8.5 1385 3
Пример излез:

Duration: 23 min 5 s
Total price: 505 den
Per passenger: 168.333 den

#include<iostream>
#include <pstl/execution_defs.h>
using namespace std;

int main() {
    float dolzinaKM;
    int vremeSekundi;
    int br_patnici;

    cin>>dolzinaKM>>vremeSekundi>>br_patnici;

    int vremeMin = vremeSekundi / 60;
    int vremeSek = vremeSekundi % 60;

    int cena = 50 + (40*dolzinaKM) + (5*vremeMin);

    float perPassenger = (float)cena / br_patnici;


    cout<<"Duration: "<<vremeMin<<" min "<<vremeSek<<" s"<<endl;
    cout<<"Total price: "<<cena<<" den"<<endl;
    cout<<"Per passenger: "<<perPassenger<<" den"<<endl;

    return 0;
}
