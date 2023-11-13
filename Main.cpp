 /*
 * Proyecto Base de datos asegurados
 * Angélica Ríos Cuentas
 * A01705651
 * 09/09/2023
 */

/**
 * Descripcion: este es un proyecto para la clase de 
 * . Es un programa que captura los datos de los asegurados
 *  de un agente de seguros, y permite ordenarlos por nombre, 
 * folio, o edad del asegurado
*/

//Bibliotecas
#include <iostream>   //para imprimir.
#include "Asegurados.h"//Clase que contiene los datos de los asegurados.
#include "BaseDatos.h" //Clase que maneja las funciones.
#include <string> 
using namespace std;

//Procedimiento menu
void menu(){

    //Imprime las opciones que va a tener el sistema
    cout << "\n";
    cout << "Elija una opción:\n";
    cout << "1. Mostrar Asegurados \n";
    cout << "2. Agregar asegurado al registro  \n";
    cout << "3. Editar edad de algun asegurado \n";
    cout << "4. Ordenar por orden alfábetico \n";
    cout << "5. Ordenar por edad \n";
    cout << "6. Ordenar por folio \n";
    cout << "7. Buscar asegurado por número de folio \n";
    cout << "8. Buscar folio por nombre de asegurado \n";
    cout << "9. Salir \n";
    cout << "\n";
}
/**
 * Función para validar la opcion ingresada por el usuario
 *
 * @param int opcion
 *        ciclo while que comprueba que la respuesta 
 *        sea un número entre el 1 y el 7
 * @return opcion
*/
int validar_opcion(int opcion){
  while (1>opcion||opcion>8){
    cout << "Ingresa respuesta valida: ";
    cin >> opcion;
  }
  return opcion; 
}

//Se crean objetos iniciales
int main(){
  BaseDatos basedatos;

//Declaración de variables
  int opcion,opcion_a;
  int num,num_m;
  int ban=1;
  int edad_f,folio_f;
  string nombre_f;

  
//Ciclo while que permite que el usuario continue en el programa hasta que elija la opción de salir
  while (ban==1){
    basedatos.importar_asegurados();
  //Impresion de menu
  	menu();
  //Permite al usuario ingresar una opción
  	cin >> opcion;
    opcion = validar_opcion(opcion);
  	//Caso 1 manda a llamar la funcion que se encuentra en inventario, para mostrar el menu
    if (opcion==1){
      basedatos.mostrar_asegurados();

    }  

  /**
  *	Caso 2 realiza preguntas para poder mandar a llamar la función agrega_asegurado.
  */ 
    else if (opcion==2){
  				cout<<"Nombre del asegurado: " ;
  				cin >>nombre_f;
  				cout<<"Edad del asegurado: " ;
  				cin >>edad_f;
  				cout<<"Folio del asegurado: " ;
  				cin >>folio_f;        
        basedatos.agrega_asegurado(nombre_f,edad_f,folio_f);
    } 
    //Caso 3 que realiza preguntas para poder mandar a llamar la función editar_edad
    else if (opcion==3){
      cout<< "Dime el nombre del asegurado cuya edad quieres editar: " ;
  	  cin >>nombre_f;
      cout<< "Dime la edad actualizada:  " ;
  	  cin >>edad_f;
      basedatos.editar_edad(nombre_f,edad_f);
    }  
    //Caso 4
    else if (opcion==4){
      basedatos.compara_alf();
    }
    //Caso 5
        else if (opcion==5){
      basedatos.compara_ed();
    }
    //Caso 6
        else if (opcion==6){
      basedatos.compara_fol();
    }
    //Caso 7
        else if (opcion==7){
      int f;
      cin>>f;
      basedatos.buscar_folio(f);
    }
    //Caso 8
        else if (opcion==8){
      string n;
      cin>>n;
      basedatos.buscar_nombre(n);
    }
    //Caso 9 que finaliza el progama cambiando el valor de la bandera (ban)  
    else if (opcion==9){
      cout<<"Gracias por usar este programa";
      ban=0;
    }
  }
}
