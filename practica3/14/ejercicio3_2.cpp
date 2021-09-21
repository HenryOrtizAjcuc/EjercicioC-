#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    double velocidad = 120;
    double consumo  = 0;

    if (velocidad > 80)
        consumo = 10.00;
    else if (velocidad > 100)
        consumo = 12.00;
    else if (velocidad > 120)
        consumo = 15.00;

        cout<< consumo;
    return 0;
}
