#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    float pies, yardas, pulgadas, metros, centimetros;
    cout << "Introduzca cantidad de pies ";
    cin >> pies;
    yardas = pies / 3;
    pulgadas = pies * 12;
    centimetros = pulgadas * 2.54;
    metros = centimetros / 100;
    cout << "Conversion de medidas " << endl;
    cout << "yardas: " << yardas << endl;
    cout << "pulgadas: " << pulgadas << endl;
    cout << "centimetros: " << centimetros << endl;
    cout << "metros: " << metros << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}