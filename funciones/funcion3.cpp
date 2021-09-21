#include <iostream>
using namespace std;

void fare()
{
    float c = 0;
    cout << "Ingrese los grados celcius a convertir:";
    cin >> c;
    cout << "Los grados farenheit son: " << ((9 * c) / 5 + 32);
}

int main(int argc, char const *argv[])
{
    fare();
    return 0;
}