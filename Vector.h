//
//  Vector.h
//  Ordenacion_Algo
//
//  Created by jonas on 18/04/13.
//  Copyright (c) 2013 jonas. All rights reserved.
//

#ifndef __Ordenacion_Algo__Vector__
#define __Ordenacion_Algo__Vector__

#include <iostream>
using namespace std;

class Vector_t {
    int * V_;
    int sz_;
    int min_;
    float med_;
    int max_;
    
public:
    Vector_t(int sz);
    int get_V(int i);
    int get_sz();
    void resize_V(int sz);
    void set_V(int valor, int i);
    void set_sz(int sz);
    void intercambiar(int x, int y);
    
    int get_min();
    float get_med();
    int get_max();
    void set_min(int min);
    void set_med(float med);
    void set_max(int max);
    
    
};



#endif /* defined(__Ordenacion_Algo__Vector__) */
