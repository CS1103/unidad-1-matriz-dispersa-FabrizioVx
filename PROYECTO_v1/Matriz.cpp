//
// Created by Fabrizio Vásquez on 8/29/19.
//

#include "Matriz.h"

Matriz::Matriz(unsigned int filas, unsigned int columnas) {
    this->columnas=columnas;
    this->filas = filas;
    matrix = nullptr;
}

void Matriz::Malloc_memory(unsigned int filas, unsigned int columnas) {
    matrix = new unsigned int *[filas];
    for(unsigned int i = 0;i<filas;i++)
        matrix[i] = new unsigned int [columnas];
}

void Matriz::Inicializar(){
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matrix[i][j] = rand() % 2;

        }
    }
}

void Matriz::Imprimir_matrix() {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout<<matrix[i][j]<<" ";
            /*
            if(((*(*(matrix+i)+j))) == 0 || ((*(*(matrix+i)+j)) == 2)) {
                 std::cout<<" ";
                 contador++;
             }
             else{
                 std::cout<<(*(*(matrix+i)+j));
             }
             */
        }
        std::cout<<"\n";
    }
    ObtenerPorcentaje();

}

void Matriz::Verificar_matrix() {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            if(i == j || ((j > i) && (matrix[i][j] < matrix[3][3] )) || ((i > j) && (matrix[i][j] < matrix[3][3] )) ){
                if(matrix[i][j] == 0){
                    contador++;
                }
            }
                else if(matrix[i][j] == 0){
                    contador++;
                }
            }

            /*
            if(((*(*(matrix+i)+j))) == 0 || ((*(*(matrix+i)+j)) == 2)) {
                 std::cout<<" ";
                 contador++;
             }
             else{
                 std::cout<<(*(*(matrix+i)+j));
             }
             */
        }
        std::cout<<"\n";
    }


Matriz::~Matriz() {
    for (int i = 0; i < filas ; ++i) {
        delete [] matrix[i];
    }
    delete matrix;
}


void Matriz::ObtenerPorcentaje() {
    double porcentaje = 0;
    porcentaje = contador*100 / (filas*columnas);
    cout<<"Porcentaje: "<<porcentaje<<"%";
}

Matriz &Matriz::operator+(Matriz &one) {
    Matriz *aux = nullptr;
    for(int i = 0;i<filas;i++){
        for(int j = 0;j<columnas;j++) {
            aux->matrix[i][j] = matrix[i][j] + one.matrix[i][j];
        }
    }
    return *this;
}

Matriz &Matriz::operator=(const Matriz & n) {
    std::cout<<"Constructor por asignacion\n";
    for(int i = 0; i <filas;i++){
        for (int j = 0; j < columnas; ++j) {
            matrix[i][j] = n.matrix[i][j];
        }
    }
    return *this; //puntero de si mismo
}
