//
//  Organizador.cpp
//  Ordenacion_Algo
//
//  Created by jonas on 18/04/13.
//  Copyright (c) 2013 jonas. All rights reserved.
//

#include "Organizador.h"
int ORGNZDR::buscar_menor(int p, int & n){
    int menor = 200;
    int iterador = -1;
    for (; p < vector.get_sz(); p++) {
        if (menor > vector.get_V(p)) {
            n=n+1;
            menor = vector.get_V(p);
            iterador = p;
        }
    }
    return iterador;
}
int ORGNZDR::buscar_menor2(int p, int & n){
    int menor = 200;
    int iterador = -1;
    for (int i = 0; i < p; i++) {
        if (menor > vector.get_V(i)) {
            n=n+1;
            menor = vector.get_V(i);
            iterador = i;
        }
    }
    return iterador;
}
int ORGNZDR::buscar_mayor(int p, int & n){
    int mayor = 0;
    int iterador = -1;
    for (; p < vector.get_sz(); p++) {
        if (mayor < vector.get_V(p)) {
            n = n+1;
            mayor = vector.get_V(p);
            iterador = p;
        }
    }
    return iterador;
}

ORGNZDR::ORGNZDR(int sz, int n_pruebas) : vector(sz){
    vector.set_sz(sz);
    n_pruebas_ = n_pruebas;
    minimo_ = 35000;
    maximo_ = 0;
    media_ = 0;
}

void ORGNZDR::insercion(int p_a_p, int s_a_s){
    int n=0;
    for (int i = 0; i < vector.get_sz()-1; i++) {
        if (vector.get_V(i+1) < vector.get_V(i)) {
            int a = 0;
            while (vector.get_V(a) < vector.get_V(i+1) && a < vector.get_sz()) {
                n=n+1;
                a=a+1;
            }
            if (p_a_p == 1) {
                mostrar_insercion(a, i+1); //if pap == 1
            }
            int tp = vector.get_V(a);
            vector.set_V(vector.get_V(i+1), a);
            for (int x = a; x < i+1; x++) {
                int tp1 = vector.get_V(x+1);
                vector.set_V(tp, x+1);
                tp = tp1;
                if (s_a_s == 1) {
                    mostrar_insercion2(x, x+1); //if sas == 1
                }
            }
        } else {
            n=n+1;
            if (p_a_p == 1) {
                mostrar_insercion(-1, i+1); //if pap == 1
            }
        }
        
    }
    if (n < vector.get_min()) {
        vector.set_min(n);
    }
    if (n > vector.get_max()) {
        vector.set_max(n);
    }
    vector.set_max((float(vector.get_min())+vector.get_max())/2);
}
void ORGNZDR::Seleccion(int p_a_p, int s_a_s){
    int menor; int n=0;
    for (int i = 0; i < vector.get_sz()-1; i++) {
        menor = buscar_menor(i,n);
        int tp = vector.get_V(i);
        if (p_a_p == 1) {
            mostrar_seleccion(menor, i);
        }
        vector.set_V(vector.get_V(menor), i);
        for (int x = i; x < menor; x++) {
            int tp1 = vector.get_V(x+1);
            vector.set_V(tp, x+1);
            tp = tp1;
            if (s_a_s == 1) {
                mostrar_seleccion2(x, x+1);
            }
        }
    }
    if (n < vector.get_min()) {
        vector.set_min(n);
    }
    if (n > vector.get_max()) {
        vector.set_max(n);
    }
    vector.set_max((float(vector.get_min())+vector.get_max())/2);
}
void ORGNZDR::modificacion(int p_a_p, int s_a_s, int n_ord){
    int mayor; int menor; int n= 0;
    for (int i = 0; i < n_ord; i++) {
        mayor = buscar_mayor(i, n);
        int tp = vector.get_V(i);
        vector.set_V(vector.get_V(mayor), i);
        for (int x = i; x < mayor; x++) {
            int tp1 = vector.get_V(x+1);
            vector.set_V(tp, x+1);
            tp = tp1;
        }
    }
    int k = vector.get_sz()-1;
    for (int i = 0; i < n_ord; i++) {
        cout << k << endl;
        menor = buscar_menor2(k, n);
        cout << "MENOR: " << vector.get_V(menor) << endl;
        int tp = vector.get_V(k);
        vector.set_V(vector.get_V(menor), k);
        for (int x = k; x > menor; x--) {
            int h = x-1;
            int tp1 = vector.get_V(h);
            vector.set_V(tp, h);
            tp = tp1;
        }
        k=k-1;
        
    }
    if (n < vector.get_min()) {
        vector.set_min(n);
    }
    if (n > vector.get_max()) {
        vector.set_max(n);
    }
    vector.set_max((float(vector.get_min())+vector.get_max())/2);
    mostrar_final_modificacion(n_ord);
}
void ORGNZDR::ShellSort(int p_a_p, int s_a_s, int dec){
    int n = 0; int k = 0;
    while (dec != 0) {
        if (p_a_p == 1) {
            cout << BLUE << "   - Gap= " << dec << RESET << endl;
        }
        for (int i = 0; i+dec < vector.get_sz(); i++) {
            k = 1;
            int x = i;
            while (vector.get_V(x+dec) < vector.get_V(x) && x >= 0) {
                n=n+1;
                if (p_a_p == 1) {
                    cout << "  - ";
                    mostrar_shellsort(x, x+dec);
                    k = 0;
                }
                vector.intercambiar(x+dec, x);
                x=x-dec;
            }
            if (p_a_p == 1 && k == 1) {
                mostrar_shellsort(-1, x+dec);
            }
        }
        dec = dec/2;
    }
    if (n < vector.get_min()) {
        vector.set_min(n);
    }
    if (n > vector.get_max()) {
        vector.set_max(n);
    }
    vector.set_max((float(vector.get_min())+vector.get_max())/2);
}
void ORGNZDR::QuickSort(int p_a_p, int s_a_s, int i, int d, int n){
    int pos_pivote;
    if (i < d) {
        if (p_a_p == 1) {
            for (int k = 0; k < n; k++) {
                cout << " | ";
            }
        }
        contador_ = contador_+1;
        pos_pivote = partir(i,d);
        if (p_a_p == 1) {
            mostrar_quicksort(i, d, pos_pivote);
            cout << endl;
        }
        QuickSort(p_a_p, s_a_s, i, pos_pivote-1,n+1);
        contador_ = contador_+1;
        QuickSort(p_a_p, s_a_s, pos_pivote+1, d,n+1);
    }
}
void ORGNZDR::MergeSort(int p_a_p, int s_a_s, int ini, int fin, int n){
    if (ini < fin) {
        contador_ = contador_+1;
        int cen = (ini + fin) / 2;
        MergeSort(p_a_p, s_a_s, ini, cen, n+1);
        contador_ = contador_+1;
        MergeSort(p_a_p, s_a_s, cen+1, fin, n+1);
        mezcla(ini, cen, fin);
    }
}
void ORGNZDR::rellenar(){
    cout << "Vector sin ordenar: " << endl;
    for (int i = 0; i < vector.get_sz(); i++) {
        int num = rand()%101;
        vector.set_V(num, i);
        cout << vector.get_V(i) << " ";
    }
    cout << endl;
}

void ORGNZDR::mostrar_insercion(int x, int y){
    for (int i = 0 ; i < vector.get_sz(); i++) {
        if (i == y) {
            cout << GREEN << vector.get_V(i) << " " << RESET;
        } else if (i < y){
            if (i == x) {
                cout << YELLOW << vector.get_V(i) << " " << RESET;
            } else {
                cout << BLUE << vector.get_V(i) << " " << RESET;
            }
        } else {
            cout << RED << vector.get_V(i) << " " << RESET;
        }
        
    }
    if (x != -1) {
        cout << "  - Cambia " << vector.get_V(x) << " por " << vector.get_V(y) << endl;
    } else {
        cout << "No se realizan cambios" << endl;
    }
    
    cout << endl;
}
void ORGNZDR::mostrar_insercion2(int x, int y){
    cout << "   - ";
    for (int i = 0; i < vector.get_sz(); i++) {
        if (x == i) {
            cout << BLUE << vector.get_V(i) << " " << RESET;
        } else if (y == i) {
            cout << GREEN << vector.get_V(i) << " " << RESET;
        } else {
            cout << vector.get_V(i) << " ";
        }
        
    }
    cout << endl;
}
void ORGNZDR::mostrar_seleccion(int x, int y){
    for (int i = 0 ; i < vector.get_sz(); i++) {
        if (i == y) {
            cout << GREEN << vector.get_V(i) << " " << RESET;
        } else if (i < y){
            cout << BLUE << vector.get_V(i) << " " << RESET;
        } else {
            if (i == x) {
                cout << YELLOW << vector.get_V(i) << " " << RESET;
            } else {
                cout << RED << vector.get_V(i) << " " << RESET;
            }
        }
        
    }
    if (x != -1) {
        cout << "  - Cambia " << vector.get_V(x) << " por " << vector.get_V(y) << endl;
    } else {
        cout << "No se realizan cambios" << endl;
    }
    
    cout << endl;
}
void ORGNZDR::mostrar_seleccion2(int x, int y){
    cout << "   - ";
    for (int i = 0; i < vector.get_sz(); i++) {
        if (x == i) {
            cout << BLUE << vector.get_V(i) << " " << RESET;
        } else if (y == i) {
            cout << GREEN << vector.get_V(i) << " " << RESET;
        } else {
            cout << vector.get_V(i) << " ";
        }
        
    }
    cout << endl;
}
void ORGNZDR::mostrar_shellsort(int x, int y){
    for (int i = 0 ; i < vector.get_sz(); i++) {
        if (i == y) {
            cout << GREEN << vector.get_V(i) << " " << RESET;
        } else {
            if (i == x) {
                cout << RED << vector.get_V(i) << " " << RESET;
            } else {
                cout << YELLOW << vector.get_V(i) << " " << RESET;
            }
        }
        
    }
    if (x != -1) {
        cout << "  - Cambia " << vector.get_V(x) << " por " << vector.get_V(y) << endl;
    } else {
        cout << "No se realizan cambios" << endl;
    }
    
    cout << endl;
}
void ORGNZDR::mostrar_quicksort(int x, int y, int piv){
    for (int i = 0 ; i < vector.get_sz(); i++) {
        if (i == y) {
            cout << GREEN << vector.get_V(i) << " " << RESET;
        } else {
            if (i == x) {
                cout << RED << vector.get_V(i) << " " << RESET;
            } else {
                cout << YELLOW << vector.get_V(i) << " " << RESET;
            }
        }
        
    }
    if (x != -1) {
        cout << "  - Cambia " << vector.get_V(x) << " por " << vector.get_V(y) << BLUE << "  [PIVOTE]: " << vector.get_V(piv) << RESET << endl;
    } else {
        cout << "No se realizan cambios" << BLUE << "  [PIVOTE]: " << vector.get_V(piv) << RESET << endl;
    }
    
    cout << endl;
}
void ORGNZDR::mostrar_mergesort(int x, int y){
    for (int i = 0 ; i < vector.get_sz(); i++) {
        if (i == y) {
            cout << GREEN << vector.get_V(i) << " " << RESET;
        } else {
            if (i == x) {
                cout << RED << vector.get_V(i) << " " << RESET;
            } else {
                cout << YELLOW << vector.get_V(i) << " " << RESET;
            }
        }
        
    }
    if (x != -1) {
        cout << "  - Cambia " << vector.get_V(x) << " por " << vector.get_V(y) << endl;
    } else {
        cout << "No se realizan cambios" << endl;
    }
    
    cout << endl;
}


int ORGNZDR::get_sz(){
    return vector.get_sz();
}
int ORGNZDR::partir(int primero, int ultimo){
    int i,d;
    int val_pivote;
    val_pivote=vector.get_V(primero);
    i=primero+1;
    d=ultimo;
    do {
        while ((i <= d)&&(vector.get_V(i) <= val_pivote)) {
            i=i+1;
        }
        while ((i <= d)&&(vector.get_V(d) > val_pivote)) {
            d=d-1;
        }
        if (i < d) {
            vector.intercambiar(i, d);
            i=i+1;
            d=d-1;
        }
    } while (i <= d);
    vector.intercambiar(primero, d);
    return d;
}
int ORGNZDR::mezcla(int ini, int cen, int fin){
    int aux[vector.get_sz()];
    int i = ini; int j = cen+1; int k = ini;
    while ((i <= cen)&&(j <= fin)) {
        if (vector.get_V(i) < vector.get_V(j)) {
            aux[k] = vector.get_V(i);
            i=i+1;
        } else {
            aux[k] = vector.get_V(j);
            j=j+1;
        }
        k=k+1;
    }
    if (i > cen) {
        while (j <= fin) {
            aux[k] = vector.get_V(j);
            j=j+1;
            k=k+1;
        } 
    }else {
        while (i <= cen) {
            aux[k] = vector.get_V(i);
            i=i+1;
            k=k+1;
        }
    }
    for (int l = ini; l <= fin; l++) {
        vector.set_V(aux[l], l);
    }
}


void ORGNZDR::calcular_minimo(){
    if (vector.get_min() < minimo_) {
        minimo_ = vector.get_min();
    }
}
void ORGNZDR::calcular_media(){
    media_ = (float(minimo_)+maximo_)/2;
}
void ORGNZDR::calcular_maximo(){
    if (vector.get_max() > maximo_) {
        maximo_ = vector.get_max();
    }
}


void ORGNZDR::mostrar_estadisticas(){
    cout << "Número de comparaciones" << endl;
    cout << "Mínimo: " << minimo_ << endl;
    cout << "Media: " << media_ << endl;
    cout << "Máximo: " << maximo_ << endl;

}
void ORGNZDR::mostrar_final(){
    cout << endl;
    cout << BLUE << "VECTOR ORDENADO: " << RESET << endl;
    for (int i = 0; i < vector.get_sz(); i++) {
        cout << GREEN << vector.get_V(i) << " " << RESET;
    }
    cout << endl << endl;
}
void ORGNZDR::mostrar_final_modificacion(int n){
    cout << endl;
    cout << BLUE << "VECTOR ORDENADO: " << RESET << endl;
    for (int i = 0; i < vector.get_sz(); i++) {
        if (i < n) {
            cout << GREEN << vector.get_V(i) << " " << RESET;
        } else if (i+n >= vector.get_sz()){
            cout << GREEN << vector.get_V(i) << " " << RESET;
        } else {
            cout << RED << vector.get_V(i) << " " << RESET;
        }
        
    }
    cout << endl << endl;
}