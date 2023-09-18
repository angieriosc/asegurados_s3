#ifndef BASEDATOS_H_
#define BASEDATOS_H_

#include "Asegurados.h" //Clase que contiene los datos de los asegurados.
#include <iostream>
#include <fstream>
#include <string>
#include <locale>
#include <codecvt>
#include <vector>
#include "asegurados.csv"
using namespace std;

//Constante para la creación de arreglos con espacio de sobra.
const int MAX = 100;
//Creación de clase Inventario
class BaseDatos{
  protected:
    //Variable de instancia (lista para guardar objetos)
    Asegurado asegurados[MAX];

    //Declaro las variables de instancia
    private:
    int iasegurados, num2;
    float nuevo_edad;  

    
  public: 
    //Métodos
    BaseDatos();//Constructor

    void importar_asegurados();
    void mostrar_asegurados();
    void agrega_asegurado(string, int, int);
    void editar_edad(string, int);

};
/**
 * Constructor por default
 *
 * @param
 * @return Objeto BaseDatos
 */
BaseDatos::BaseDatos(){
}

void BaseDatos::importar_asegurados() {
    vector<Asegurado> asegurados;

    ifstream archivo("asegurados1.csv");
    if (!archivo.is_open()) {
        cerr << "No se pudo abrir el archivo." << endl;
        return;
    }

    string nombre;
    int edad;
    int folio;

    while (archivo >> nombre >> edad >> folio) {
        asegurados.push_back(Asegurado(nombre, edad, folio));
    }

    archivo.close();

    // Ahora, los datos están almacenados en el vector 'asegurados'
    // Puedes acceder a ellos como desees, por ejemplo, imprimirlos:
    for (const Asegurado& asegurado : asegurados) {
        cout << "Nombre: " << asegurado.nombre << ", Edad: " << asegurado.edad << ", Folio: " << asegurado.folio << endl;
    }
}

/**
 * Utliza los arreglos de tipo Comida, Postre y bebida.
 * Muestra el menu con los costos por medio de getters y un ciclo
 * for que va recorriendo cada elemento de los arreglos y lo imprime
 *
 * @param
 * @return
*/
void BaseDatos::mostrar_asegurados(){
    cout<<"\n";
    cout<<"Nombre              Edad     Folio \n";
    cout<<"\n";
    for(int i = 0 ;i<= iasegurados-1; i++){
      cout  << asegurados[i].get_nombre()<<asegurados[i].get_edad()<<asegurados[i].get_folio()<<"\n";
    }
 }
/*

/**
 * Utliza los arreglos de tipo Comida, Postre y bebida.
 * Por medio de un ciclo for se llama a la función get_nombre()
  set_costo();
 * @param string:nombre_c, float nuevo_costo
 * @return
*/
void BaseDatos::editar_edad(string nombre_c, int nuevo_edad){
   for(int i = 0 ;i< iasegurados-1; i++){
     if (asegurados[i].get_nombre()==nombre_c){
      asegurados[i].set_edad(nuevo_edad);
    }

}
}
/**
 * Utiliza arreglo de Comidas y su ultimo indice.
 * Recibe el nombre, la cantidad, y el costo.
 * El metodo crea el objeto Comida y lo agrega al arreglo
 *
 * @param string:nombre, int:cantidad, float;costo
 * @return
 */
void BaseDatos::agrega_asegurado(string nombre,int edad, int folio){
    asegurados[iasegurados] = Asegurado (nombre, edad, folio);
    iasegurados += 1;
}


#endif // BASEDATOS_H_
