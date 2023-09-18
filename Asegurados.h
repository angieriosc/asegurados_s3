/*
 * Clase Asegurados, maneja datos de los asegurados
 *
 */

#ifndef ASEGURADOS_H_ //para evitar fallas al incluir archivos
#define ASEGURADOS_H_

#include <sstream> //para el uso de strngstream y aux 
#include <string>
using namespace std;

class Asegurado{
//Declara las variables de instancia

public: 
  //Constuctor inicial
  Asegurado(){};
  Asegurado(const string& n, int e, int f) : nombre(n), edad(e), folio(f) {}
  // Metodos miembros de la clase
  int get_edad();
  string get_nombre();
  int get_folio();
  void set_folio(int);
  void set_edad(int);
  string to_str();
  int edad;
  string nombre;
  int folio;
};

//Getter de edad, folio y nombre
/**
 * getter edad
 *
 * @param
 * @return int: edad del asegurado
*/
int Asegurado:: get_edad(){
  return edad;
}
/**
 * getter nombre
 *
 * @param
 * @return string: nombre del alimento
*/
string Asegurado:: get_nombre(){
  return nombre;
}
/**
 * getter folio
 *
 * @param
 * @return int: edad del asegurado
*/
int Asegurado:: get_folio(){
  return folio;
}

//Setter de edad

/**
 * setter edad
 *    otorga valor de cantidad para que no se acceda directamente
 * @param int:ed
 * @return 
*/
void Asegurado:: set_edad(int ed){
  edad=ed;
}
/**
 * Funcion que almacena los valores de nombre y cantidad
 * en una cadena.
 *    
 * @param 
 * @return cadena convertida en string
*/
string Asegurado::to_str(){

    stringstream aux;
    aux << " Nombre del Asegurado " << nombre << " Edad:  "<< edad << " Folio:  "<< folio <<  "\n";
    return aux.str();
}


#endif // ASEGURADOS_H_
