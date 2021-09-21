#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
int semanas, dias, horas, minutos, segundos, acu;
cout << "Introduzca segundos ";
cin >> acu;
segundos = acu % 60;
acu = acu / 60;
minutos = acu % 60;
acu = acu / 60;
horas = acu % 24;
acu = acu / 24;
dias = acu % 7;
semanas = acu / 7;
cout << "segundos en semanas dias horas minutos y segundos " << endl;
cout << " numero de semanas " << semanas << endl;
cout << " numero de dias " << dias << endl;
cout << " numero de horas " << horas << endl;
cout << " numero de minutos " << minutos << endl;
cout << " numero de segundos " << segundos << endl;
system("PAUSE");
return EXIT_SUCCESS;
}