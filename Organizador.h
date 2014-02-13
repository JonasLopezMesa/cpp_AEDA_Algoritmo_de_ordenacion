//
//  Organizador.h
//  Ordenacion_Algo
//
//  Created by jonas on 18/04/13.
//  Copyright (c) 2013 jonas. All rights reserved.
//

#ifndef __Ordenacion_Algo__Organizador__
#define __Ordenacion_Algo__Organizador__

#include <iostream>
#include "Vector.h"
#include <stdlib.h>
using namespace std;

#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define GREEN "\033[32m"
#define RED "\033[31m"
#define RESET "\033[0m"

class ORGNZDR {
    Vector_t vector;
    int n_pruebas_;
    
    int buscar_menor(int p, int & n);
    int buscar_menor2(int p, int & n);
    int buscar_mayor(int p, int & n);
    int partir(int i, int d);
    int mezcla(int ini, int cen, int fin);
    
    int minimo_;
    int media_;
    int maximo_;
    
    int contador_;
    
public:
    ORGNZDR(int sz, int n_pruebas);
    void contador_a_cero(){
        contador_ = 0;
    }
    void rellenar();
    
    
    void mostrar_insercion(int x, int y);
    void mostrar_insercion2(int x, int y);
    void mostrar_seleccion(int x, int y);
    void mostrar_seleccion2(int x, int y);
    void mostrar_shellsort(int x, int y);
    void mostrar_shellsort2(int x, int y);
    void mostrar_quicksort(int x, int y, int piv);
    void mostrar_quicksort2(int x, int y);
    void mostrar_mergesort(int x, int y);
    void mostrar_mergesort2(int x, int y);
    
    int get_sz();
    
    void insercion(int p_a_p, int s_a_s);
    void Seleccion(int p_a_p, int s_a_s);
    void modificacion(int p_a_p, int s_a_s, int n_ord);
    void ShellSort(int p_a_p, int s_a_s, int dec);
    void QuickSort(int p_a_p, int s_a_s, int ini, int fin, int n);
    void MergeSort(int p_a_p, int s_a_s, int ini, int fin, int n);
    
void calcular_minimo();
void calcular_media();
void calcular_maximo();
    
    void mostrar_final();
    void mostrar_final_modificacion(int n);
    void mostrar_estadisticas();
void e_estadisticas(){
    if (contador_ < vector.get_min()) {
        vector.set_min(contador_);
    }
    if (contador_ > vector.get_max()) {
        vector.set_max(contador_);
    }
    vector.set_max((float(vector.get_min())+vector.get_max())/2);
}
};


#endif /* defined(__Ordenacion_Algo__Organizador__) */
