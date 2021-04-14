// Ejercicio1(Funcion).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int primos(int n) {
    for (int k = 2; k <= n; k++) {
        int l = 0;
        for (int p = 2; p <= k / 2; p++) {
            if (k % p == 0) {
                l = l + 1;
                break;

            }
        }
        if (l < 1) {
            cout << k << endl;
        }
    }
    return 0;
}

int main()
{
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;
    cout << "Los primos hasta " << n << " son : " << endl;
    primos(n);
}
