#include <cstdlib>
#include <iostream>
#define Constante "de declaracion de constante."
using namespace std;
int main( )
{
char Salida[21]="Esto es un ejemplo";
cout << Salida << endl;
cout << Constante << endl;
cout << "Salta dos lineas\n \n";
cout << "y tambien un\n";
cout << &Salida[11];
cout << " cadenas\n";
system("PAUSE");
return EXIT_SUCCESS;
}