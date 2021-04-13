// Ejercicio2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
//EJERCICIO2
int main()
{
    int cont = 0;
    int n = 0;
    
    cout << "Ingrese un numero:";
    cin >> n;

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
  
    
}

