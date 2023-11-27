
#ifndef BASEDATOS_H_
#define BASEDATOS_H_

#include "Asegurados.h" //Clase que contiene los datos de los asegurados.
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;


class BaseDatos{
  protected:
    //Vector para guardar apuntadores
    vector<Asegurado*> asegurados;
    map<string, int> asegurado_nom;
    map<int,string> asegurado_fol;

    //Declaro las variables de instancia
    private:
    int iasegurados, num2;
    float nuevo_edad;  
    string nombre,str;
    int edad;
    int folio, n;

    
  public: 
    //Métodos
    BaseDatos();//Constructor
    ~BaseDatos(); //Destructor
    void importar_asegurados(string); //Importa y crea objetos de clase asegurados desde un archivo .txt
    void mostrar_asegurados(string); //Despliega todos los asegurados 
    void compara_alf(); //Ordena a los asegurados por orden alfábetico
    void compara_ed();  //Ordena a los asegurados por edad (menor a mayor)
    void compara_fol();  //Ordena a los asegurados por folio (menor a mayor)
    void agrega_asegurado(string, int, int); //Crea nuevo objeto tipo asegurado
    void editar_edad(string, int); //Modifica la edad de un asegurado
    void buscar_folio(int);
    void buscar_nombre(string);
};

/**
 * Constructor por default
 *
 * @param
 * @return Objeto BaseDatos
 */
BaseDatos::BaseDatos(){
}

BaseDatos::~BaseDatos() {
    // Liberar memoria dinámica asociada con objetos Asegurado
    for (Asegurado* ptr : asegurados) {
        delete ptr;
    }

    // Limpiar el vector asegurados
    asegurados.clear();
}

void BaseDatos::importar_asegurados(string name) {
    ifstream archivo(name);
    if (!archivo.is_open()) {
        cerr << "No se pudo abrir el archivo." << endl;
        return;
    }

    archivo >> n;
    iasegurados=0;
    while (iasegurados<n) {
        archivo >> nombre;
        archivo >> edad;
        archivo>> folio; 
        Asegurado* asegurado = new Asegurado(nombre, edad, folio);
        asegurados.push_back(asegurado);
        asegurado_nom[nombre] = folio;
        asegurado_fol[folio] = nombre;
        iasegurados++;
    }

    archivo.close();

}

void BaseDatos::mostrar_asegurados(string name){
  string nombre= name + ".txt";
  ofstream outputFile(nombre);
  outputFile << str;
  outputFile <<" Nombre del Asegurado      " << "   Edad  "<< "   Folio "<< "\n";
  outputFile <<"\n";
  for(int i = 0 ;i<= iasegurados-1; i++){
      outputFile << i+1 << ".-" << asegurados[i]->get_nombre() <<"    "<< asegurados[i]->get_edad() << "    " <<asegurados[i]->get_folio() <<"\n";
      outputFile <<"\n";
  }
  outputFile.close(); 
  for(int i = 0 ;i<= iasegurados-1; i++){
    cout << i+1 << ".-" << asegurados[i]->get_nombre() <<"    "<< asegurados[i]->get_edad() << "    " <<asegurados[i]->get_folio() <<"\n";
    cout <<"\n";
  } 
 }


void BaseDatos::editar_edad(string nombre_c, int nuevo_edad) {
    for (int i = 0; i < asegurados.size(); i++) {
        if (asegurados[i]->get_nombre() == nombre_c) {
            asegurados[i]->set_edad(nuevo_edad);
            break;  // Salir del bucle después de encontrar una coincidencia
        }
    }
}

void BaseDatos::agrega_asegurado(string nombre, int edad, int folio) {
    Asegurado* nuevoAsegurado = new Asegurado(nombre, edad, folio);
    asegurados.push_back(nuevoAsegurado);
    iasegurados += 1;
}


void BaseDatos::compara_alf(){
  // O(log n) 
  string archivo_n;
  cout << "nombre de tu archivo:  ";
  cin >> archivo_n;
  sort(asegurados.begin(), asegurados.end(), compararPorNombre);
  mostrar_asegurados(archivo_n);
}
void BaseDatos::compara_ed(){
  // O(log n) 
  string archivo_n;
  cout << "nombre de tu archivo:  ";
  cin >> archivo_n;
  sort(asegurados.begin(), asegurados.end(), compararPorEdad);
  mostrar_asegurados(archivo_n);
}
void BaseDatos::compara_fol(){
  // O(log n) 
  string archivo_n;
  cout << "nombre de tu archivo:  ";
  cin >> archivo_n;
  sort(asegurados.begin(), asegurados.end(), compararPorFolio);
  mostrar_asegurados(archivo_n);
}

//Busqueda de objetos a través del uso de mapas
void BaseDatos::buscar_folio(int f){
  string name = asegurado_fol[f];
  cout << "Nombre del asegurado:   " << name << "\n Numero de folio:  " << f;
}

void BaseDatos::buscar_nombre(string n){
  int foli = asegurado_nom[n];
  cout << "Nombre del asegurado:   " << n << "\n Numero de folio:   " << foli;
}
#endif // BASEDATOS_H_