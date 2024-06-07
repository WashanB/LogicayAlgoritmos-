#include <iostream> 
#include "variable.h"
#include <string.h> 


using namespace std; 


CIUDAD ciudades[MAX_REG];
int pos = 0; 

//crud
int obtPos(int id);
void agregar (CIUDAD *c); 
void editar (CIUDAD *c, int id);
void eliminar (int id); 
CIUDAD buscar (CIUDAD *c);
int menu ();
void principal ();
void pedirDatos();

//Funciones 
void agregar (CIUDAD *c){
    ciudades[pos] = *c; 
    pos++;
}; 


CIUDAD buscar (int id){
    for (int i = 0; i<pos; i++){
        if (id == ciudades [i].id){
            return ciudades[i];
        }
    }
    CIUDAD c; 
    return c; 
};

int obtPos(int id){

 int pos = 0; 
    for (int i = 0; i < pos; i++){
        if (ciudades[i].id == id){
          return 1; 
        }
    }
    return -1; 
}
void editar(CIUDAD *c, int id){
    CIUDAD ciudad = buscar(id);
    strcpy (CIUDAD[pos].nombre = c-> nombre);  
    strcpy (CIUDAD[pos].descripcion = c-> descripcion);
};

void eliminar (int id){
    int posi = 0; 
    for (int i = 0; i < pos; i++){
        if (ciudades[i].id == id){
            posi = i; 
            break; 
        }
    }
    for (int i = posi; i<pos; i++){
        ciudades[i] = ciudades [i+1];
    }
    pos--; 
};

int menu (){
    int op; 
    cout << "Menu \n";
    cout << "1. Agregar \n";
    cout << "2. Editar \n";
    cout << "3. Eliminar \n";
    cout << "4. Buscar \n";
    cout << "5. Mostrar todo \n";
    cout << "6. Salir \n";
    cout << "ingrese la opcion: ";
    cin >> op; 
    return op; 
}

void principal (){
int op; 
    do{ 
    op = menu();
    switch (op){
     case 1:

      agregar ();
      break;

      case 6;
      cout << " Adios, mi tierno\n";
      break;

      default:
      cout << "No seas noefito si solo hay 6\n";
      break; 
    }


    }
    while(op !=6);
    };

void pedirDatos(){
    CIUDAD ciudad; 
    cout << "Datos de ciudad\n";
    cout << "ID: ";
    cin >> ciudad.id;
    cout << "Nombre:";
    cin >> ciudad.nombre; 
    cout << "Descripcion";
    cin >> ciudad.descripcion;
    agregar(&ciudad);
    cout << " Registro agregado.... \n";

    };