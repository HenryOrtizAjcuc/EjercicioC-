#include <iostream>
using namespace std;

int const registros = 100;
struct cliente
{
    string nombre;
    string dpi;
    string email;
    string numeroTelefono;
} clientes[registros];

void registrarCliente()
{
    for (size_t i = 0; i < registros; i++)
    {
        cout << "Ingrese datos del cliente\n";
        cout << "Ingrese nombre: \n";
        cin >> clientes[i].nombre;
        cout << "Ingrese dpi: \n";
        cin >> clientes[i].dpi;
        cout << "Ingrese email: \n";
        cin >> clientes[i].email;
        cout << "Ingrese numero de telefono: \n";
        cin >> clientes[i].numeroTelefono;
    }

    cout << "\n\n----------------------------------------\nLos clientes son: \n";
    for (int i = 0; i < registros; i++)
    {
        cout << "Cliente no. " << i + 1 << " " << clientes[i].nombre;
    }
}

// Definicion funcion main
int main()
{
    registrarCliente();
    return 0;
}