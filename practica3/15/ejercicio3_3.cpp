#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int primera_opcion = 1;
    switch (primera_opcion + 1)
    {
    case 1:
        cout << "Cordero asado\n";
        break;
    case 2:
        cout << "Chuleta lechal\n";
        break;
    case 3:
        cout << "Chuletón\n";
    case 4:
        cout << "Postre de pastel\n";
        break;
    default:
        cout << "Buen apetito\n";
    }
    return 0;
}
