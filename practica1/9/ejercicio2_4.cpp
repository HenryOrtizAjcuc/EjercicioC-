#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
char p[] = "Esto es una prueba";
cout << p << " " << &p[2] << endl;
cout << p << "\n";
cout << &p[2] << endl;
system("PAUSE");
return EXIT_SUCCESS;
}