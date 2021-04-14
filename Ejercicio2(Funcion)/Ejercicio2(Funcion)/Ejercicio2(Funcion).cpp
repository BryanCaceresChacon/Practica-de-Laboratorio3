// Ejercicio2(Funcion).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int numero_perfecto(int n) {
    int cont = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            for (int j = (i / 2); j >= 1; j--) {
                if (i % j == 0) {
                    cont = cont + j;
                }
            }
            if (cont == i)
                cout << cont << " ";
        }
        cont = 0;
    }
    return 0;
}
int main()
{
    int n;
    cout << "Ingrese un numero:";
    cin >> n;
    cout << "Los numeros perfectos hasta " << n << " son: " << endl;
    numero_perfecto(n);
}

