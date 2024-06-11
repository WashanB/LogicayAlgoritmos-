#include <iostream>
#include "variable.h"
#include <string.h>

using namespace std;

CIUDAD ciudades[MAX_REG];
int pos = 0;

// CRUD
int obtPos(int id);
void AGREGAR(CIUDAD *c);
void editar(CIUDAD *c, int id);
void eliminar(int id);
CIUDAD buscar(int id);
int menu();
void principal();
void pedirDatos();
void mostrardatos();
void buscarxid(); 
void editardatos();

// Funciones
void AGREGAR(CIUDAD *c) {
    ciudades[pos] = *c;
    pos++;
}

CIUDAD buscar(int id) {
    for (int i = 0; i < pos; i++) {
        if (id == ciudades[i].id) {
            return ciudades[i];
        }
    }
    CIUDAD c;
    return c;
}

int obtPos(int id) {
    for (int i = 0; i < pos; i++) {
        if (ciudades[i].id == id) {
            return i;
        }
    }
    return -1;
}

void editar(CIUDAD *c, int id) {
    int pos = obtPos(id);
    if (pos != -1) {
        strcpy(ciudades[pos].nombre, c->nombre);
        strcpy(ciudades[pos].descripcion, c->descripcion);
    } else {
        cout << "La ciudad con el ID proporcionado no existe." << endl;
    }
}

void eliminar(int id) {
    int posEliminar = obtPos(id);
    if (posEliminar != -1) {
        for (int i = posEliminar; i < pos - 1; i++) {
            ciudades[i] = ciudades[i + 1];
        }
        pos--;
    } else {
        cout << "La ciudad con el ID proporcionado no existe." << endl;
    }
}

int menu(){
    int op;
    cout << "Menu \n";
    cout << "1. Agregar \n";
    cout << "2. Editar \n";
    cout << "3. Eliminar \n";
    cout << "4. Buscar \n";
    cout << "5. Mostrar todo \n";
    cout << "6. Salir \n";
    cout << "Ingrese la opción: ";
    cin >> op;
    return op;
}

void principal() {
    int op;
    do {
        op = menu();
        switch (op) {
            case 1:
                pedirDatos();
                break;
                case 4: 
                buscarxid();
                break; 
                
                case 5: 
                mostrardatos();
                break;
            case 6:
                cout << "Adios, mi tierno\n";
                break;
            default:
                cout << "No seas novato, solo hay 6 opciones.\n";
                break;
        }
    } while (op != 6);
}

void pedirDatos() {
    CIUDAD ciudad;
    cout << "Datos de ciudad\n";
    cout << "ID: ";
    cin >> ciudad.id;
    cout << "Nombre: ";
    scanf (" %[^\n]" , ciudad.nombre);
    cout << "Descripcion: ";
    scanf (" %[^\n]", ciudad.descripcion);
    AGREGAR(&ciudad);
    cout << "Registro agregado.... \n";
}

void mostrardatos(){
    for (int i = 0; i < pos; i++){
    cout << "ID:" << ciudades[i].id << endl;
    cout << "Nombre: " << ciudades[i].nombre << endl;
    cout << "Descripcion: " << ciudades[i].descripcion << endl; 
    }
}

void buscarxid(){
    int id; 
    cout << "Dime el ID de la ciudad a buscar: " << endl;
    cin >> id; 
    CIUDAD c;
    c = buscar(id);
    cout << "==================" << endl; 
    cout << c.id << endl;
    cout << c.nombre << endl; 
    cout << c.descripcion << endl; 
    cout << "==================" << endl; 
}


void editardatos(){
    int id; 
}