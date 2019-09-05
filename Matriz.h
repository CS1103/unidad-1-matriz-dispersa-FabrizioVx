//
// Created by Fabrizio Vásquez on 8/29/19.
//

#ifndef PROYECTO_V1_MATRIZ_H
#define PROYECTO_V1_MATRIZ_H

#include "iostream"
#include "ctime"
using namespace std;

class Matriz {
private:
    unsigned int filas = 0,numero_multiplicar=3;
    unsigned int columnas = 0;
    unsigned int **matrix;

public:
    double contador=0;
    Matriz(unsigned int, unsigned int);
    Matriz(unsigned int);
    void Malloc_memory(unsigned int, unsigned int); //Almacena espacio de memmoria
    void Inicializar();                             //Inicializa la matriz con números random de 0 al 1
    void Imprimir_matrix();                         //Muestra la matriz en pantalla
    void Verificar_matrix();                        //Verifica la matriz
    void ObtenerPorcentaje();                       //Obtiene el porcentaje de la matriz con cantidad cero
    void ObtenerMultiplicacion_Escalar(const Matriz &, int);

    void ObtenerTransposicion(const Matriz &);


    Matriz &operator*(const Matriz&);
    Matriz &operator+(const Matriz&);
    Matriz &operator=(const Matriz& );
    ~Matriz();

};


#endif //PROYECTO_V1_MATRIZ_H
