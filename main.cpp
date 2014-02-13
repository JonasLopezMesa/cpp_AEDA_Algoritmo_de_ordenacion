//
//  main.cpp
//  Ordenacion_Algo
//
//  Created by jonas on 18/04/13.
//  Copyright (c) 2013 jonas. All rights reserved.
//


#include <iostream>
#include <ncurses.h>
#include "Organizador.h"
using namespace std;



int main()
{
    int opcion = 0, n_elementos, n_pruebas, A=0;
    //MENÚ:
    system("CLEAR");
    cout << "BÚSQUEDA Y ORDENACIÓN" << endl;
    while (A==0) {
        cout << "***************************" << endl;
        cout << "REALIZACIÓN DE PRUEBAS DE" << endl;
        cout << RED << "[1] Búsquedas" << RESET << endl;
        cout << "[2] Ordenaciones" << endl;
        cout << endl;
        cout << "[0] SALIR" << endl;
        cout << "***************************" << endl;
        cout << "OPCIÓN: ";
        cin >> opcion;
        if (opcion == 0) {
            return 0;
        }else if (opcion == 1){
        while (opcion != 0 || opcion != 1 || opcion != 2 || opcion != 3 || opcion != 4) {
            system("CLEAR");
            A=1;
            cout << "***************************" << endl;
            cout << "Selecciona el método de búsqueda" << endl;
            cout << endl;
            cout << RED << "[1] Búsqueda Primaria" << endl;
            cout << "[2] Búsqueda Secundaria" << endl;
            cout << "[3] Búsqueda Binaria" << endl;
            cout << "[4] Búsqueda Traspuesta" << RESET << endl;
            cout << endl;
            cout << "[0] ATRÁS" << endl;
            cout << "***************************" << endl;
            cout << "OPCIÓN: ";
            cin >> opcion;
        }
        if (opcion == 1) {
            int opc;
            cout << "***************************" << endl;
            cout << "número de elementos de la secuencia: ";
            cin >> n_elementos;
            cout << "***************************" << endl;
            cout << "número de pruebas máximo: ";
            cin >> n_pruebas;
            cout << "***************************" << endl;
            cout << "Selecciona el 'Modo' de ejecución" << endl;
            cout << "***************************" << endl;
            cout << "[1] Modo 'Demostración'" << endl;
            cout << "[2] Modo 'Estadísticas'" << endl;
            cout << "OPCIÓN: ";
            cin >> opc;
            if (opc == 1) {
                int pas_a_pas, stp_a_spt;
                cout << "¿Modo pasada a pasada?" << endl;
                cout << "[1] SI" << endl;
                cout << "[2] NO" << endl;
                cout << "OPCIÓN: ";
                cin >> pas_a_pas;
                if (pas_a_pas == 1) {
                    cout << "¿Modo paso a paso?" << endl;
                    cout << "[1] SI" << endl;
                    cout << "[2] NO" << endl;
                    cout << "OPCIÓN: ";
                    cin >> stp_a_spt;
                    if (stp_a_spt == 1) {
                        
                    }
                }
            }else if (opc == 2){
                
            }
        }
        if (opcion == 2) {
            int opc;
            cout << "***************************" << endl;
            cout << "número de elementos de la secuencia: ";
            cin >> n_elementos;
            cout << "***************************" << endl;
            cout << "número de pruebas máximo: ";
            cin >> n_pruebas;
            cout << "***************************" << endl;
            cout << "Selecciona el 'Modo' de ejecución" << endl;
            cout << "***************************" << endl;
            cout << "[1] Modo 'Demostración'" << endl;
            cout << "[2] Modo 'Estadísticas'" << endl;
            cout << "OPCIÓN: ";
            cin >> opc;
            if (opc == 1) {
                int pas_a_pas, stp_a_spt;
                cout << "¿Modo pasada a pasada?" << endl;
                cout << "[1] SI" << endl;
                cout << "[2] NO" << endl;
                cout << "OPCIÓN: ";
                cin >> pas_a_pas;
                if (pas_a_pas == 1) {
                    cout << "¿Modo paso a paso?" << endl;
                    cout << "[1] SI" << endl;
                    cout << "[2] NO" << endl;
                    cout << "OPCIÓN: ";
                    cin >> stp_a_spt;
                    if (stp_a_spt == 1) {
                        
                    }
                }
            }else if (opc == 2){
                
            }
        }
        if (opcion == 3) {
            int opc;
            cout << "***************************" << endl;
            cout << "número de elementos de la secuencia: ";
            cin >> n_elementos;
            cout << "***************************" << endl;
            cout << "número de pruebas máximo: ";
            cin >> n_pruebas;
            cout << "***************************" << endl;
            cout << "Selecciona el 'Modo' de ejecución" << endl;
            cout << "***************************" << endl;
            cout << "[1] Modo 'Demostración'" << endl;
            cout << "[2] Modo 'Estadísticas'" << endl;
            cout << "OPCIÓN: ";
            cin >> opc;
            if (opc == 1) {
                int pas_a_pas, stp_a_spt;
                cout << "¿Modo pasada a pasada?" << endl;
                cout << "[1] SI" << endl;
                cout << "[2] NO" << endl;
                cout << "OPCIÓN: ";
                cin >> pas_a_pas;
                if (pas_a_pas == 1) {
                    cout << "¿Modo paso a paso?" << endl;
                    cout << "[1] SI" << endl;
                    cout << "[2] NO" << endl;
                    cout << "OPCIÓN: ";
                    cin >> stp_a_spt;
                    if (stp_a_spt == 1) {
                        
                    }
                }
            }else if (opc == 2){
                
            }
        }
        if (opcion == 4) {
            int opc;
            cout << "***************************" << endl;
            cout << "número de elementos de la secuencia: ";
            cin >> n_elementos;
            cout << "***************************" << endl;
            cout << "número de pruebas máximo: ";
            cin >> n_pruebas;
            cout << "***************************" << endl;
            cout << "Selecciona el 'Modo' de ejecución" << endl;
            cout << "***************************" << endl;
            cout << "[1] Modo 'Demostración'" << endl;
            cout << "[2] Modo 'Estadísticas'" << endl;
            cout << "OPCIÓN: ";
            cin >> opc;
            if (opc == 1) {
                int pas_a_pas, stp_a_spt;
                cout << "¿Modo pasada a pasada?" << endl;
                cout << "[1] SI" << endl;
                cout << "[2] NO" << endl;
                cout << "OPCIÓN: ";
                cin >> pas_a_pas;
                if (pas_a_pas == 1) {
                    cout << "¿Modo paso a paso?" << endl;
                    cout << "[1] SI" << endl;
                    cout << "[2] NO" << endl;
                    cout << "OPCIÓN: ";
                    cin >> stp_a_spt;
                    if (stp_a_spt == 1) {
                        
                    }
                }
            }else if (opc == 2){
                
            }
        }
    }else if (opcion == 2){
            A = 1;
            system("CLEAR");
            cout << "***************************" << endl;
            cout << "[1] Por inserción Básico" << endl;
            cout << "[2] Por selección Básico" << endl;
            cout << "[3] modificación" << endl << endl;
            cout << RED << "[4] BinSort" << endl;
            cout << "[5] HeapSort" << endl;
            cout << "[6] ShakeSort" << RESET << endl;
            cout << "[7] ShellSort" << endl;
            cout << "[8] QuickSort" << endl;
            cout << "[9] MergeSort" << endl << endl;
            cout << "[0] ATRÁS" << endl;
            cout << "***************************" << endl;
            cout << "OPCIÓN: ";
            cin >> opcion;
            cout << "***************************" << endl;
            cout << "Número de elementos de la secuencia: ";
            cin >> n_elementos;
            cout << "Número de pruebas máximo: ";
            cin >> n_pruebas;
            ORGNZDR O(n_elementos, n_pruebas);
        int pas_a_pas=0, stp_a_spt=0;
        if (n_elementos < 25) {
            cout << "***************************" << endl;
            cout << "Selecciona el 'Modo' de ejecución" << endl;
            cout << "***************************" << endl;
            cout << "[1] Modo 'Demostración'" << endl;
            cout << "[2] Modo 'Estadísticas'" << endl;
            cout << "OPCIÓN: ";
            int opc;
            cin >> opc;
            //int pas_a_pas=2, stp_a_spt=2;
            if (opc == 1) {
                n_pruebas = 1;
                cout << "Se ha cambiado el número de pruebas a 1 sóla prueba..." << endl;
                cout << "¿Modo pasada a pasada?" << endl;
                cout << "[1] SI" << endl;
                cout << "[2] NO" << endl;
                cout << "OPCIÓN: ";
                cin >> pas_a_pas;
                if (pas_a_pas == 1) {
                    cout << "¿Modo paso a paso?" << endl;
                    cout << "[1] SI" << endl;
                    cout << "[2] NO" << endl;
                    cout << "OPCIÓN: ";
                    cin >> stp_a_spt;
                }
                cout << "PAP: " << pas_a_pas << " SAS: " << stp_a_spt << endl;
            }else if (opc == 2){
                cout << "OPC " << opc << endl;
                pas_a_pas = 0;
                stp_a_spt = 0;
            }
        }
        
        cout << "PAP: " << pas_a_pas << " SAS: " << stp_a_spt << endl;
        
        srand(time(NULL));
        if (opcion == 1) {
            system("clear");
            for (int i = 0; i < n_pruebas; i++) {
                cout << RED << "PRUEBA NÚMERO " << i << RESET << endl;
                O.rellenar();
                O.insercion(pas_a_pas, stp_a_spt);
                O.calcular_minimo();
                O.calcular_maximo();
                O.mostrar_final();
            }
            O.calcular_media();
            if (pas_a_pas == 0 && stp_a_spt == 0) {
                O.mostrar_estadisticas();
            }
        }
        if (opcion == 2) {
            system("clear");
            for (int i = 0; i < n_pruebas; i++) {
                cout << RED << "PRUEBA NÚMERO " << i << RESET << endl;
                O.rellenar();
                O.Seleccion(pas_a_pas, stp_a_spt);
                O.calcular_minimo();
                O.calcular_maximo();
                O.mostrar_final();
            }
            O.calcular_media();
            if (pas_a_pas == 0 && stp_a_spt == 0) {
                O.mostrar_estadisticas();
            }
        }
        if (opcion == 3) {
            system("clear");
            int c;
            cout << "introduce el número de orden: "; cin >> c;
            for (int i = 0; i < n_pruebas; i++) {
                cout << RED << "PRUEBA NÚMERO " << i << RESET << endl;
                O.rellenar();
                O.modificacion(pas_a_pas, stp_a_spt, c);
                O.calcular_minimo();
                O.calcular_maximo();
                //O.mostrar_final();
            }
            O.calcular_media();
            if (pas_a_pas == 0 && stp_a_spt == 0) {
                O.mostrar_estadisticas();
            }
        }
        if (opcion == 7) {
            system("clear");
            for (int i = 0; i < n_pruebas; i++) {
                cout << RED << "PRUEBA NÚMERO " << i << RESET << endl;
                O.rellenar();
                O.ShellSort(pas_a_pas, stp_a_spt,5);
                O.calcular_minimo();
                O.calcular_maximo();
                O.mostrar_final();
            }
            O.calcular_media();
            if (pas_a_pas == 0 && stp_a_spt == 0) {
                O.mostrar_estadisticas();
            }
        }
        if (opcion == 8) {
            system("clear");
            for (int i = 0; i < n_pruebas; i++) {
                cout << RED << "PRUEBA NÚMERO " << i << RESET << endl;
                O.rellenar();
                O.contador_a_cero();
                O.QuickSort(pas_a_pas, stp_a_spt,0,n_elementos-1,0);
                O.e_estadisticas();
                O.calcular_minimo();
                O.calcular_maximo();
                O.mostrar_final();
            }
            O.calcular_media();
            if (pas_a_pas == 0 && stp_a_spt == 0) {
                O.mostrar_estadisticas();
            }
            
            
        }
        if (opcion == 9) {
            system("clear");
            for (int i = 0; i < n_pruebas; i++) {
                cout << RED << "PRUEBA NÚMERO " << i << RESET << endl;
                O.rellenar();
                O.contador_a_cero();
                O.MergeSort(pas_a_pas, stp_a_spt,0, n_elementos-1,0);
                O.e_estadisticas();
                O.calcular_minimo();
                O.calcular_maximo();
                O.mostrar_final();
            }
            O.calcular_media();
            if (pas_a_pas == 0 && stp_a_spt == 0) {
                O.mostrar_estadisticas();
            }
            
            
        }
        if (opcion == 4 || opcion == 5 || opcion == 6) {
            cout << "estos tipos de ordenación no pertenecen a esta práctica" << endl;
        }
        }
    }
    //FIN MENÚ
    
    return 0;
}

