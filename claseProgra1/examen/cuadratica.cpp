#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "ingrese el valor de a:\n";
    cin >> a;
    cout << "ingrese el valor de b:\n";
    cin >> b;
    cout << "ingrese el valor de c:\n";
    cin >> c;

    if (a == 0)
    {
        cout << "No se puede realizar la operacion\n";
        return 0;
    }

    float valor1 = (sqrt((b * b) - (4 * a * c)));
    if (valor1 >= 0)
    {
        valor1 = (-1.0 * b) + valor1;
        valor1 = valor1 / (2 * a);
        cout << "X1: " << valor1 << endl;
    }
    else
    {
        cout << "No se puede encontrar valor para x1\n";
    }

    float valor2 = (sqrt((b * b) - (4 * a * c)));
    if (valor2 >= 0)
    {
        valor2 = (-1.0 * b) - valor2;
        valor2 = valor2 / (2 * a);
        cout << "X2: " << valor2;
    }
    else
    {
        cout << "No se puede encontrar valor para x2";
    }
}