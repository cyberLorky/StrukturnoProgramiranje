Нарачка од онлајн книжарница

Онлајн книжарница ја пресметува крајната цена на една нарачка. Од стандарден влез се читаат цената на една книга (реален број) и бројот на нарачани книги (цел број). Сите книги во нарачката имаат иста цена.

Правила:

Ако се нарачани 5 или повеќе книги, купувачот добива попуст од 10% на цената на книгите.
Книгите се пакуваат во кутии во кои собираат по 4 книги, а пакувањето на секоја кутија чини 30 ден. Делумно пополнета кутија исто така се брои.
Доставата чини 200 ден., но е бесплатна ако цената на книгите по попустот е 3000 ден. или повеќе.
Програмата треба да ги испечати: цената на книгите пред попустот, износот на попустот, бројот на кутии, цената за достава и вкупниот износ за плаќање. Форматот на излезот мора да биде ист како во примерите.

Пример влез 1:

450 7
Пример излез 1:

Books: 3150 den
Discount: 315 den
Boxes: 2
Delivery: 200 den
Total: 3095 den
Пример влез 2:

700 6
Пример излез 2:

Books: 4200 den
Discount: 420 den
Boxes: 2
Delivery: 0 den
Total: 3840 den


#include <iostream>
using namespace std;

int main() {
    float cenaKniga;
    int br_naracki;

    cin>>cenaKniga>>br_naracki;

    float popust = 0;
    float vkKnigi = cenaKniga * br_naracki;
    if (br_naracki>=5) {
        popust = vkKnigi * 0.1;
    }

    int boxes = 0;
    boxes = (br_naracki + 3 ) / 4;
    float cenaBoxes = boxes * 30;

    float dostava = 200;
    if (vkKnigi - popust >= 3000) {
        dostava = 0;
    }

    cout<<"Books: "<<vkKnigi<<" den"<<endl;
    cout<<"Discount: "<<popust<<" den"<<endl;
    cout<<"Boxes: "<<boxes<<endl;
    cout<<"Delivery: "<<dostava<<" den"<<endl;
    cout<<"Total: "<<vkKnigi - popust + cenaBoxes + dostava<<" den";

    return 0;
}
