#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream ficheroEntrada;
    string nombre;
    string frase;

    cout << "Dime el Path del fichero: ";
    getline(cin, nombre);
    // escribir en archivo
    ficheroEntrada.open("");
    if (!ficheroEntrada.is_open())
        cout << "Fichero inexistente o falta de permisos para abrirlo " << nombre << '\n';
    else
        ficheroEntrada << "Agregar este contenido al archivo." << endl;

    ficheroEntrada.close();

    // leer archivo
    ficheroEntrada.open(nombre.c_str(), ios::in);
    if (ficheroEntrada.is_open())
    {
        while (!ficheroEntrada.eof())
        {
            getline(ficheroEntrada, frase);
            cout << "Leido: " << frase << endl;
        }
        ficheroEntrada.close();
    }
    else
    {
        cout << "Fichero inexistente o faltan permisos para abrirlo" << endl;
    }

    return 0;
}