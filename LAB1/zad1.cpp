// Организација на конференција

// Организатор подготвува сала за конференција. На секоја маса седат по 8 учесници. Од стандарден влез се читаат бројот на учесници (цел број), цената на кафе-паузата по учесник (реален број) и времетраењето на конференцијата во минути (цел број).

// Програмата треба да испечати: колку маси ќе бидат целосно пополнети, колку учесници ќе седат на последната (непополнета) маса, вкупната цена на кафе-паузата и времетраењето на конференцијата во часови и минути.

// Форматот на излезот мора да биде ист како во примерите.

// Пример влез:

// 45 120 150
// Пример излез:

// Full tables: 5
// Remaining guests: 5
// Coffee break: 5400 den
// Duration: 2 h 30 min

#include<iostream>
using namespace std;

int main() {
    int ucesnici;
    float cena;
    int vremetraenje;

    cin>>ucesnici>>cena>>vremetraenje;

    int vkupnoMasi=ucesnici/8;
    int ostanatiMasi=ucesnici%8;

    cena*=ucesnici;

    int vremeH=vremetraenje/60;
    int vremeMin=vremetraenje%60;

    cout<<"Full tables: "<<vkupnoMasi<<endl;
    cout<<"Remaining guests: "<<ostanatiMasi<<endl;
    cout<<"Coffee break: "<<cena<<" den"<<endl;
    cout<<"Duration: "<<vremeH<<" h "<<vremeMin<<" min"<<endl;

    return 0;
}
