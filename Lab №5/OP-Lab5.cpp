#include <iostream>

using namespace std;
int main()
{
    int a, factor, n1, n2, n3, n4, n5, n6;
    factor = 100000;
    for (a = 101010; a <= 999999; a++)
    {
        n1 = (a / factor) % 10;
        n2 = (a / (factor / 10)) % 10;
        n3 = (a / (factor / 100)) % 10;
        n4 = (a / (factor / 1000)) % 10;
        n5 = (a / (factor / 10000)) % 10;
        n6 = (a / (factor / 100000)) % 10;
        if (n1 == n3 && n3 == n5 && n2 == n4 && n4 == n6) {
            cout << a << endl;
        }
        else if (n1 == n3 && n3 == n4 && n4 == n6 && n2 == n5) {
            cout << a << endl;
        }
        else if (n1 == n4 && n2 == n5 && n3 == n6) {
            cout << a << endl;
        }
        else if (n1 == n2 && n2 == n3 && n3 == n4 && n4 == n5 && n5 == n6) {
            cout << a << endl;
        }  
    }
}
