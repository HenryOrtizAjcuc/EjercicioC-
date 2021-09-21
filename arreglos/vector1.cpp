#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int sumav[10];
    int n;
    int suma;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> n;
        sumav[i] = n;
    }

    for (int i = 0; i < 10; i++)
    {
        suma += sumav[i];
    }

    cout << "La suma es: " << suma;

    return 0;
}
