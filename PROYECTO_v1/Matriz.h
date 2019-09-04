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
    unsigned int filas = 0;
    unsigned int columnas = 0;
    unsigned int **matrix;
public:
    double contador=0;
    Matriz(unsigned int, unsigned int);
    void Malloc_memory(unsigned int, unsigned int);
    void Inicializar();
    void Imprimir_matrix();
    void Verificar_matrix();
    void ObtenerPorcentaje();
    void ObtenerMultiplicación();
    Matriz &operator+(const Matriz &);
    Matriz &operator=(const Matriz& );
    ~Matriz();

};


#endif //PROYECTO_V1_MATRIZ_H
