// Ejercicio3(Funcion).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int fibonacci(int n, int x, int y, int sum) {
    for (int i = 1; i < n; i++) {
        sum = x + y;
        cout << sum << " ";
        x = y;
        y = sum;
    }
    return 0;
}
int main()
{
    int n;

    int x = 0;
    int y = 1;
    int sum = 1;
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << "Los " << n << " primeros numeros de la secuencia de Fibonacci son: " << endl;
    cout << "1 ";
    fibonacci(n, x, y, sum);

}

