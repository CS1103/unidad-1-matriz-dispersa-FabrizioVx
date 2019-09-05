#include <iostream>
#include "Matriz.h"
using namespace std;

int main() {

    unsigned int filas;cin>>filas;
    unsigned int columnas;cin>>columnas;

    Matriz *matriz1 = new Matriz(filas,columnas);
    Matriz *matriz2 = new Matriz(filas,columnas);
    auto *matriz3 = new Matriz(filas,columnas);
    auto *matriz4 = new Matriz(filas,columnas);
    auto * matriz5 = new Matriz(filas,columnas);


    //Operaciones matriz 1
    matriz1->Malloc_memory(filas,columnas);
    matriz1->Inicializar();
    matriz1->Verificar_matrix();
    matriz1->Imprimir_matrix();
    cout<<endl;


    //Operaciones matriz 1
    matriz2->Malloc_memory(filas,columnas);
    matriz2->Inicializar();
    matriz2->Verificar_matrix();
    matriz2->Imprimir_matrix();

    matriz3->Malloc_memory(filas,columnas);
    cout<<endl;
    *matriz3 = *matriz2 + *matriz1;
    matriz3->Imprimir_matrix();
    matriz3->Verificar_matrix();

    matriz4->Malloc_memory(filas,columnas);
    cout<<endl;
    *matriz4 = (*matriz1)*(*matriz2);
    matriz4->Imprimir_matrix();
    matriz4->Verificar_matrix();


    cout<<endl<<endl<<endl;
    matriz5->Malloc_memory(filas,columnas);
    matriz5->Inicializar();
    matriz5->Verificar_matrix();

    matriz5->Imprimir_matrix();
    cout<<endl<<endl<<endl;
    matriz5->Imprimir_matrix();
    matriz5->ObtenerTransposicion(*matriz5);
    cout<<endl;
    matriz5->Imprimir_matrix();



    delete matriz1;
    delete matriz2;
    delete matriz3;
    delete matriz4;


    cout<<endl;



    /*unsigned int filas, columnas;
    cout<<"Ingresar filas: ";
    cin>>filas;
    cout<<"Ingrese columnas: ";
    cin>>columnas;

    Matriz M1(filas,columnas);
    Matriz M2(filas,columnas);
    Matriz M3(filas,columnas);
    Matriz M4(filas,columnas);
    Matriz M5(filas,columnas);

    M1.Malloc_memory(filas,columnas);
    M1.Inicializar();
    M1.Imprimir_matrix();
    M1.Verificar_matrix();

    M2.Malloc_memory(filas,columnas);
    M2.Inicializar();
    M2.Imprimir_matrix();
    M2.Verificar_matrix();

    M3 = M1+M2;
    M3.Malloc_memory(filas,columnas);
    M3.Imprimir_matrix();

    */
    return 0;
}


//TIPO ABSTRACTO DE DATOS
//PRACTICA PAR EL PROXIMO VIERENES
//PERO VA COORDINAR Y SI ENCASO ES EL PROXIMO JUEVES DE ESTE AL PROXIMO