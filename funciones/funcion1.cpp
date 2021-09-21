#include <iostream>

using namespace std;

string esPositivoONegativo(int n)
{
    return n > 0 ? "P" : "N";
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    cout << esPositivoONegativo(n);
    return 0;
}
