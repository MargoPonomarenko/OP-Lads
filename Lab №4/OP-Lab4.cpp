#include <iostream>
#include <cmath> // для використання функцій pow() та round()
#include <locale>
using namespace std;
int main()
{
    float x, k, a=1, i, Sum=0;
    setlocale(LC_CTYPE, "ukr");
    cout << " Отримати суму k - членiв послiдовностi a1,a2,…,an, що утворена за законом:an = x ^ 2 * sin(x ^ n) / n ^ 2, n = 1, 2, ... При заданому дiйсному числi x та цiлому числi k. \n"; // умова задачі
    cout << " Введiть значення x \n";
    cin >> x;
    cout << " Введiть значення k \n";
    cin >> k;
    for (i = 1; i <= k; i++) 
    {
        a = pow(x, 2) * sin(pow(x, i)) / pow(i, 2); // розрахунок значення а за заданою формулою
        a = round(a * 100) / 100; //округлення до двух знаків після коми 
        Sum = Sum + a;
    }
    cout << " Сума " <<k<< " членiв послiдовностi:  \n" << Sum; // виведення суми k членів послідовності
}