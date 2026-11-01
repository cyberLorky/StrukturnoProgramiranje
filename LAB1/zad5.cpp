Изнајмување автомобил

Агенција за изнајмување автомобили ја пресметува цената на изнајмувањето. Од стандарден влез се читаат бројот на денови (цел број), поминатите километри (цел број) и возраста на возачот (цел број).

Правила:

Изнајмувањето чини 2000 ден. на ден.
Ако автомобилот е изнајмен 7 или повеќе дена, се добива попуст од 15% на цената за деновите.
Во цената се вклучени 200 km за секој ден изнајмување. Секој километар над тоа се доплаќа 15 ден.
Ако возачот е помлад од 25 години, се доплаќаат 500 ден. (еднократно).
Програмата треба да ги испечати: цената за деновите (без попуст), износот на попустот, бројот на дополнителни километри, доплатата за млад возач и вкупниот износ.

Форматот на излезот мора да биде ист како во примерите.

Пример влез 1:

3 800 30
Пример излез 1:

Rent: 6000 den
Discount: 0 den
Extra km: 200
Young driver fee: 0 den
Total: 9000 den
Пример влез 2:

7 1200 22
Пример излез 2:

Rent: 14000 den
Discount: 2100 den
Extra km: 0
Young driver fee: 500 den
Total: 12400 den


#include <iostream>
using namespace std;

int main() {
    int denovi;
    int pominatiKM;
    int vozrast;

    cin >> denovi >> pominatiKM >> vozrast;

    int rent = 2000 * denovi;

    int discount = 0;
    if (denovi >=7) {
        discount = rent * 0.15;
    }

    int dozvoleniKM = denovi * 200;
    int extrakm = 0;
    if (pominatiKM > dozvoleniKM) {
        extrakm = (pominatiKM - dozvoleniKM);
    }
    int extra = extrakm * 15;


    int young =0;
    if (vozrast < 25) {
        young = 500;
    }

    int total = rent - discount + extra + young;

    cout << "Rent: " << rent << " den" << endl;
    cout << "Discount: " << discount << " den" << endl;
    cout << "Extra km: " << extrakm << endl;
    cout << "Young driver fee: " << young << " den" << endl;
    cout << "Total: " << total << " den" << endl;
}
