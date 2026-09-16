// Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри. Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356). 
// Од тастатура се внесува природен број n ( n > 9). Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“. Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).

#include <iostream>
using namespace std;

int obratenBroj(int broj)
{
    int num = 0;
    while(broj != 0)
    {
        num = num * 10 + broj % 10;
        broj /= 10;
    }
    return num;
}

int brojCifri(int broj)
{
    int c = 0;
    while(broj != 0)
    {
        broj /= 10;
        c++;
    }
    return c;
}

int main() {
    int n;
    cin >> n;

    if (n <= 9) {
        cout << "Brojot ne e validen";
        return 0;
    }

    for (int i = n - 1; i > 0; i--) {
        int rev = obratenBroj(i);

        if (brojCifri(i) != brojCifri(rev))
            continue;

        if (rev % brojCifri(i) == 0) {
            cout << i;
            return 0;
        }
    }

    cout << "Brojot ne e validen";
    return 0;
}
