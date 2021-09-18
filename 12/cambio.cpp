#include <cstdlib>
#include <iostream>
using namespace std;

/****VARIABLES****/
int arrayBilletesMonedasEnCentimos[7] = {50000, 20000, 10000, 5000, 2000, 1000, 500};

int arrayContadorBilletes[2] = {500, 200};


/****FUNCION MAIN****/
int main()
{
    int pesetas = 0;
    int centimosDeEuro = 0;

    pesetas = ObtenerPesetasDelUsuario();
    centimosDeEuro = CambioPesetasCentimosDeEuros(pesetas);
    float euros = centimosDeEuro / 100;

    cout << endl
         << pesetas << " pesetas son " << euros << "euros." << endl;

    ObtenerCambio(centimosDeEuro);

    .....
}

/***DEFINICION FUNCIONES***/
unsigned int ObtenerPesetasDelUsuario()
{
    cout << "pon pesetas" << endl;
    cin >> pesetas;
    return pesetas;
}

unsigned int CambioPesetasCentimosDeEuros(pesetas)
{
    centimosEuro = pesetas * 0.60;
    return centimosEuro;
}

void ObtenerCambio(centimosEuro)
{
    for (int i = 0; centimosEuro != 0; ++i)
    {
        if (arrayBMEC[i] >= centimosEuro)
        {

            centimosEuro -= arrayBMEC[i];
            arrayCB[i] += 1;
        }
    }
}