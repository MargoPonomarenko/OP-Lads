#include<math.h>
#define _USE_MATH_DEFINES
#include<iostream>
using namespace std;
float a, b, U, V, W;

int main() {
    Init();
    Solution();
    Browse();
    system("pause");
}

void Init() {
    cout << "insert a and b value" << endl;
    cin >> a;
    cin >> b;
}

void Solution() {
    U = min(a, b);
    V = min(a * b, a + b);
    W = min(U + pow(V,2), M_PI);
}

void Browse() {
    cout << "U value = " << U << endl;
    cout << "V value = " << V << endl;
    cout << "W value = " << W << endl;
}
