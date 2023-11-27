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
  Asegurado();
  Asegurado(string n, int e, int f);
  // Metodos miembros de la clase
  int get_edad();
  string get_nombre();
  int get_folio();
  void set_folio(int);
  void set_edad(int);
  bool compararPorNombre(const Asegurado& a, const Asegurado& b);
  bool compararPorEdad(const Asegurado& a, const Asegurado& b);
  bool compararPorFolio(const Asegurado& a, const Asegurado& b);
  int edad;
  string nombre;
  int folio;
};

Asegurado::Asegurado(){
    nombre="";
    edad=0;
    folio=00000;
}


Asegurado::Asegurado(string n, int e, int f){

    nombre=n;
    edad=e;
    folio=f;
}


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
bool compararPorEdad(Asegurado* a, Asegurado* b) {
    return a->get_edad() < b->get_edad();
}

bool compararPorFolio(Asegurado* a, Asegurado* b) {
    return a->get_folio() < b->get_folio();
}

bool compararPorNombre(Asegurado* a, Asegurado* b) {
    return a->get_nombre() < b->get_nombre();
}


#endif // ASEGURADOS_H_