#include <cstdlib>
#include <iostream>
using namespace std;

int const registros = 3;
struct estudiante
{
    int nota;
    string nombre;
} estudiantes[registros];


// Definición de funciones
void registrarEstudiantes()
{
    // Registro de estudiantes
    for (size_t i = 0; i < registros; i++)
    {
        cout << "Ingrese datos del estudiante\n";
        cout << "Ingrese nombre: \n";
        cin >> estudiantes[i].nombre;
        cout << "Ingrese nota:\n";
        cin >> estudiantes[i].nota;
    }
}

void mostrarResultados()
{
    // Mostrar resultados
    for (size_t i = 0; i < registros; i++)
    {
        if (estudiantes[i].nota < 60)
        {
            cout << "Estudiante nombre: " << estudiantes[i].nombre << " reprobado\n";
        }
        else if (estudiantes[i].nota > 60 && estudiantes[i].nota < 90)
        {
            cout << "Estudiante nombre: " << estudiantes[i].nombre << " aprobado\n";
        }
        else
        {
            cout << "Estudiante nombre: " << estudiantes[i].nombre << " cumlauden\n";
        }
    }
}

// Definicion funcion main
int main()
{
    registrarEstudiantes();
    mostrarResultados();
    return 0;
}