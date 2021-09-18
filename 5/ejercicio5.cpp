#include <cstdlib>
#include <iostream>
using namespace std;
int main( )
{
char pax[] = "Juan Sin Miedo";
cout << pax << "----> " <<&pax[4] << endl;
cout << pax << endl;
cout << &pax[9] << endl;
system("PAUSE");
return EXIT_SUCCESS;
}