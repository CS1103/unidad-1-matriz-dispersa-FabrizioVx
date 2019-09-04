#include <iostream>
#include "Matriz.h"
using namespace std;

int main() {

    unsigned int filas = 15000;
    unsigned int columnas = 15000;
    auto matriz1 = new Matriz(filas,columnas);
    matriz1->Malloc_memory(filas,columnas);
    matriz1->Inicializar();
    matriz1->Verificar_matrix();
    matriz1->Imprimir_matrix();
    cout<<endl;

    auto matriz2 = new Matriz(filas,columnas);
    matriz2->Malloc_memory(filas,columnas);
    matriz2->Inicializar();
    matriz2->Verificar_matrix();
    matriz2->Imprimir_matrix();

    //auto * matriz3 = new Matriz(filas,columnas);
    return 0;
}


//TIPO ABSTRACTO DE DATOS
//PRACTICA PAR EL PROXIMO VIERENES
//PERO VA COORDINAR Y SI ENCASO ES EL PROXIMO JUEVES DE ESTE AL PROXIMO