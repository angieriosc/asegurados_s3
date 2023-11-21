# Programación de estructuras de datos y algoritmos fundamentales (Gpo 602) - Evidencia 1
Angélica Ríos Cuentas A01705651
Este proyecto está hecho para mostrar los conocimientos adqueridos en la clase de  Programación de estructuras de datos y algoritmos fundamentales. 

## Contexto

Los agentes de seguros necesitan tener gestión de los datos de sus asegurados. Es necesario poder acceder a ellos de una manera fácil y rápida 

## Funcionalidad
El programa permite importar los datos de los asegurados desde un archivo txt, ordena los datos por orden alfabético, o edad o número de folio.
Adicionalmente incluyo las funciones para registrar nuevos asegurados y permite buscar asegurados con su número de folio o con su nombre completo.

## Correciones 
Para este programa se relizaron las siguientes correcciones:

1.- Se implemento el uso de maps
2.- Se implementaron las funciones para buscar
3.- Se mejoró el Readme

## SICT0302B: Toma decisiones 

### Selecciona y usa una estructura lineal adecuada al problema

Uso un vector para guardar los apuntadores de los objetos de la clase asegurados con esto puedo realizar las funciones de agregar asegurados, de ordenarlos y de imprimirlos, esto me ayuda a modificar el vector dependiendo del tipo de ordenamiento. Esto se muestra en el código en las funciones mostrar_asegurados, agrega_asegurado, compara_alf, compara_ed y compara_fol, 
que se encuentran en el archivo BaseDatos.h en las líneas 91, 113, 120, 127 y 134 respectivamente.


### Selecciona un algoritmo de ordenamiento adecuado al problema

Para este problema utilice un algoritmo sort de c++, para poder organizar los asegurados por orden alfabético, por edad y por folio ascendente.
Use este sort porque es rápido en la mayoría de los casos y porque me permite editar las condiciones del ordenamiento resultando más fácil de aplicar este se encuentra en el archivo BaseDatos.h en las líneas 120, 127 y 134 respectivamente.


## SICT0301B: Evalúa los componentes

### Presenta Casos de Prueba correctos y completos para todas las funciones y procedimientos del programa,

Todavia no estan terminados mis casos de prueba pero este se encontrara en el archivo test.cpp donde se prueban las funciones de: 
- ordenamiento sobre el vector de asegurados
- busqueda con el uso de maps
respectivamente.

### Hace un análisis de complejidad correcto y completo para todo el programa y sus compenetes,

#### vector asegurados

función de acceso por valor: O(n) por que para llegar a el aseguradop tengo que recorrer el vector y comparar cada valor.
funcion de inserción: O(1) siempre uso push back.

#### mapa asegurados

función de acceso por valor: O(1) para llegar a el solo necesito el key value
funcion de inserción: O(n) uso un ciclo for.

#### ordenamiento de medicinas

ordenamiento con sort: ...

## SICT0303B: Implementa acciones científicas 

### Implementa mecanismos para consultar información de las estructuras correctos y útiles dentro de un programa.

El programa tiene la opción de buscar asegurados por su número de folio direcamente en el mapa (opción 7 en el menú)
El programa tiene la opción de buscar asegurados por nombre direcamente en el mapa (opción 8 en el menú)
El programa genera archivos ordenados por nombre, edad o folio (opción 4, 5 y 6 en el menú)


### Implementa mecanismos de lectura de archivos correctos y útiles dentro de un programa. Usar de manera

Los asegurados están registrados en el archivo asegurados.txt de donde se leen al iniciar el programa.

### Implementa mecanismos de escritura de archivos correctos y útiles dentro de un programa. 

Las asegurados se  guardan al en el archivo lista_asegurados.txt, con las funciones de sorts.
