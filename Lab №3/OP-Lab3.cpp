#include <iostream>
#include <cmath> 
#include <locale>
using namespace std;
int main()
{
    float a, xn, x_next;
    setlocale(LC_CTYPE, "ukr");
    cout << " Обчислити значення квадратного кореня iз числа a > 0 iз заданою точнiстю е на основi рекурентного спiввiдношення. \n"; // умова задачі
    cout << " Введiть значення a>0 \n";
    cin >> a;
    if (a <= 0)
    {
        exit(1);
    }
    xn = a / 2;
    x_next = 0.5 * (xn + a / xn);
    while (abs(x_next - xn) > pow(10, -5))
    {
        xn = x_next;
        x_next = 0.5 * (xn + a / xn);
    }
    cout << x_next;
}