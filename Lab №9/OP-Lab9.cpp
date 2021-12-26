#include <cstdlib>
#include <iostream>
#include <math.h>

int countDigitsInInteger(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    return count;
}

using namespace std;

int main(int argc, char* argv[])
{
    int intLength = 0;
    int number;
    int digit;
    int sum = 0;
    string s;
    cout << "Please enter an integer ";
    cin >> number;
    cout << "Orginal Number = " << number << endl;
    intLength = countDigitsInInteger(number);  //розділяємо суцільне число на окремі цифри 
    int  character = 0;
    while (number > 0)
    {
        digit = number % 10;
        number = number / 10;
        cout << digit << " ";
        sum = sum + digit;
        character = character + 1;
    }
    cout << endl << "You inputed " << character << " characters" << endl;
    cout << endl << "Sum of the digits is: " << sum << endl;
}