#include <iostream>
using namespace std;

int main()
{
    int mesesanioNormal[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mesesanioBisiesto[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int anio;
    int mes;

    cout << "Ingrese el mes: ";
    cin >> mes;

    cout << "Introduce a" << (char)164 << "o: "; //164 ascii de ñ
    cin >> anio;

    if (anio % 4 == 0 and anio % 100 != 0 or anio % 400 == 0) //Condición de bisiesto
        cout << "El mes tiene " << mesesanioBisiesto[mes - 1] << " d" << (char)161 << "as \n";
    else
        cout << "El mes tiene " << mesesanioNormal[mes - 1] << " d" << (char)161 << "as \n";

    system("pause");
    return 0;
}