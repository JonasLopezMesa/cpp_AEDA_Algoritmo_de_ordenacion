//
//  Vector.cpp
//  Ordenacion_Algo
//
//  Created by jonas on 18/04/13.
//  Copyright (c) 2013 jonas. All rights reserved.
//

#include "Vector.h"


Vector_t::Vector_t(int sz) : sz_(sz){
    V_ = new int(sz);
    med_ = 0;
    min_ = 35000;
    max_ = 0;
    
}
int Vector_t::get_V(int i){
    return V_[i];
}
int Vector_t::get_sz(){
    return sz_;
}
void Vector_t::set_V(int valor, int i){
    V_[i] = valor;
}
void Vector_t::set_sz(int sz){
    sz_ = sz;
}
void Vector_t::resize_V(int sz){
    V_ = new int(sz);
}
void Vector_t::intercambiar(int x, int y){
    int tmp = V_[x];
    V_[x] = V_[y];
    V_[y] = tmp;
}


int Vector_t::get_min(){
    return min_;
}
float Vector_t::get_med(){
    return med_;
}
int Vector_t::get_max(){
    return max_;
}
void Vector_t::set_min(int min){
    min_ = min;
}
void Vector_t::set_med(float med){
    med_ = med;
}
void Vector_t::set_max(int max){
    max_ = max;
}