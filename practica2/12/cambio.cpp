#include <cstdlib>
#include <iostream>
#include <array>
using namespace std;

array<int, 7> billetes = {500, 200, 100, 50, 20, 10, 5};
array<int, 7> monedas = {2, 1};

// Definición funciones
int ObtenerCantidad(string tipo, int monto, int billete)
{
    int cantidadBilletes = monto / billete;
    cout << "Cantidad " << tipo << " de " << billete << ": " << cantidadBilletes << "\n";
    return cantidadBilletes;
}

/****FUNCION MAIN****/
int main()
{
    int cantidad = 0;
    int billete = 0;
    cout << "Introduzca cantidad de Euros ";
    cin >> cantidad;

    // obtener billetes
    for (int i = 0; i < billetes.size(); i++)
    {
        if (cantidad >= billetes[i])
        {
            int cantidadBilletes = ObtenerCantidad("billetes", cantidad, billetes[i]);
            cantidad -= (cantidadBilletes * billetes[i]);
        }
    }

    // obtener monedas
    for (int i = 0; i < monedas.size(); i++)
    {
        if (cantidad >= monedas[i])
        {
            int cantidadMonedas = ObtenerCantidad("monedas", cantidad, monedas[i]);
            cantidad -= (cantidadMonedas * monedas[i]);
        }
    }

    return EXIT_SUCCESS;
}