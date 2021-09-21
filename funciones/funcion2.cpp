#include <iostream>
using namespace std;

bool esDivisible(int x, int y)
{
    return x % y == 0;
}

int main(int argc, char const *argv[])
{
    int x = 0;
    int y = 0;

    cout << "Ingrese el primer numero: ";
    cin >> x;
    cout << "Ingrese el segundo numero: ";
    cin >> y;

    if (y == 0)
    {
        cout << "No se puede dividir entre 0";
        return 0;
    }

    if (esDivisible(x, y))
        cout << "true";
    else
        cout << "false";

    return 0;
}
