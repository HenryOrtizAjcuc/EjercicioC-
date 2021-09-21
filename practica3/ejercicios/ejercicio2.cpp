#include <iostream>
using namespace std;

int main()
{
    /* code */
    int n1 = 0;
    int n2 = 0;

    cout << "Ingrese el primer numero:";
    cin >> n1;
    cout << "Ingrese el segundo numero:";
    cin >> n2;

    if (n1 <= n2)
        cout << "El numero menor es: " << n1;
    else
        cout << "El numero menor es " << n2;

    return 0;
}
