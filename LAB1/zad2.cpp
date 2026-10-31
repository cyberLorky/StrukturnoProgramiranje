Патување со автомобил

Група пријатели одат на патување со автомобил и се враќаат по истиот пат. Од стандарден влез се читаат растојанието до дестинацијата во километри (цел број, во еден правец), потрошувачката на автомобилот во литри на 100 km (реален број), цената на горивото по литар (реален број) и бројот на патници (цел број).

Програмата треба да испечати: вкупната должина на патот (до дестинацијата и назад), потребното гориво во литри, вкупната цена на горивото и колку плаќа секој патник ако цената се дели подеднакво.

Форматот на излезот мора да биде ист како во примерите.

Пример влез:

120 6.5 92.5 3
Пример излез:

Round trip: 240 km
Fuel: 15.6 L
Cost: 1443 den
Per person: 481 den


#include<iostream>
using namespace std;

int main() {
    int rastojanie;
    float potrosuvacka;
    float cena;
    int br_patnici;

    cin>>rastojanie>>potrosuvacka>>cena>>br_patnici;

    rastojanie= rastojanie * 2;
    float fuel = (rastojanie * potrosuvacka) / 100;
    int vk_cena = cena * br_patnici;
    float cost = fuel * cena;
    float perPerson = cost / br_patnici;

    cout<<"Round trip: "<<rastojanie<<" km"<<endl;
    cout<<"Fuel: "<<fuel<<" L"<<endl;
    cout<<"Cost: "<<cost<<" den"<<endl;
    cout<<"Per person: "<<perPerson<<" den"<<endl;

    return 0;
}
