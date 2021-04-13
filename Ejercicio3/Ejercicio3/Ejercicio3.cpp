// Ejercicio3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    
    int x = 0;
    int y = 1;
    int sum = 1;
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << "1 ";
    for (int i = 1; i < n; i++) {
        sum = x + y;
        cout << sum << " ";
        x = y;
        y = sum;
    }
}

