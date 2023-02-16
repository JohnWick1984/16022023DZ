// 1.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
void Chislo(int n)
{
    if (n != 0)
        Chislo(n / 2);
    else return;

    printf("%d", n % 2);
    return;

}


int main()
{
    setlocale(0, "");
    char n;
    cout << "*****Перевод числа из двоичной системы в десятичную****** " << "\n";
    cout << "Введите число в двоичной системе счисления:\n";
    cin >> n;
    cout << "Число в десятичной системе " << "\n";
    Chislo(n);
}

