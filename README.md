# Programación de estructuras de datos y algoritmos fundamentales (Gpo 602) - Evidencia 1
Angélica Ríos Cuentas A01705651
Este proyecto está hecho para mostrar los conocimientos adqueridos en la clase de  Programación de estructuras de datos y algoritmos fundamentales. 

## Contexto

Los agentes de seguros necesitan tener gestión de los datos de sus asegurados. Es necesario poder acceder a ellos de una manera fácil y rápida 

## Funcionalidad
El programa permite importar los datos de los asegurados desde un archivo txt, ordena los datos por orden alfabético, o edad o número de folio.
Adicionalmente incluyo las funciones para registrar nuevos asegurados y permite buscar asegurados con su número de folio o con su nombre completo.

## SICT0302B: Toma decisiones 

### Selecciona y usa una estructura lineal adecuada al problema

Uso un vector para guardar los apuntadores de los objetos de la clase asegurados con esto puedo realizar las funciones de agregar asegurados, de ordenarlos y de imprimirlos, esto me ayuda a modificar el vector dependiendo del tipo de ordenamiento. Esto se muestra en el código en las funciones mostrar_asegurados, agrega_asegurado, compara_alf, compara_ed y compara_fol, 
que se encuentran en el archivo BaseDatos.h en las líneas 91, 113, 120, 127 y 134 respectivamente. Implemente el uso de mapas para guardar valores de nombre y folio, esto para agilizar el metódo de busqueda estos se encuentran en el archivo BaseDatos.h en las líneas 20,21,81,82,150 y 155.


### Selecciona un algoritmo de ordenamiento adecuado al problema

Para este problema utilice un algoritmo sort de c++, para poder organizar los asegurados por orden alfabético, por edad y por folio ascendente.
Use este sort porque es rápido en la mayoría de los casos y porque me permite editar las condiciones del ordenamiento resultando más fácil de aplicar este se encuentra en el archivo BaseDatos.h en las líneas 120, 127 y 134 respectivamente.


## SICT0301B: Evalúa los componentes

### Análisis de complejidad correcto y completo para todo el programa y sus compenetes,
### Estructura de datos
##### vector asegurados

función de acceso por valor: O(n) por que para llegar a el aseguradop tengo que recorrer el vector y comparar cada valor.
funcion de inserción: O(1) siempre uso push back.

##### mapa asegurados_nom y asegurados_fol

función de acceso por valor: O(1) para llegar a el solo necesito el key value
funcion de inserción: O(n) uso un ciclo for.

#### Ordenamiento dentro del programa

ordenamiento con sort c++: El sort de C++ muestra una complejudad de O(N·log(N)) 

### Funciones Menú (main)
##### Importar_asegurados (Lectura desde Archivo):
Complejidad Temporal: O(n) (donde n es el número de asegurados en el archivo)
Justificación: Lee cada línea del archivo una vez y crea objetos Asegurado, agregándolos al vector y a los mapas.

##### Mostrar_asegurados:
Complejidad Temporal: O(n) (recorre el vector de asegurados una vez)
Justificación: Muestra los asegurados en el formato deseado.

##### Editar_edad:
Complejidad Temporal: O(n) (recorre el vector de asegurados una vez en el peor caso)
Justificación: Busca el asegurado por nombre y modifica su edad.

##### Agrega_asegurado:
Complejidad Temporal: O(1) (agrega un elemento al final del vector)
Justificación: Agrega un nuevo asegurado al vector.

##### Ordenamiento por Nombre (compara_alf):
Complejidad Temporal: O(n log n) (donde n es el número de asegurados)
Justificación: Utiliza el algoritmo de ordenamiento rápido (sort) de la STL de C++, cuya complejidad promedio es O(n log n).

##### Ordenamiento por Edad (compara_ed):
Complejidad Temporal: O(n log n)
Justificación: También utiliza el algoritmo de ordenamiento rápido (sort), cuya complejidad promedio es O(n log n).

##### Ordenamiento por Folio (compara_fol):
Complejidad Temporal: O(n log n)
Justificación: Igualmente, utiliza el algoritmo de ordenamiento rápido (sort), con complejidad promedio O(n log n).

##### Buscar_folio:
Complejidad Temporal: O(1) (acceso directo a través del mapa)
Justificación: Busca el nombre de un asegurado por su folio.

##### Buscar_nombre:
Complejidad Temporal: O(1)
Justificación: Busca el folio de un asegurado por su nombre.

## SICT0303B: Implementa acciones científicas 

### Implementa mecanismos para consultar información de las estructuras correctos y útiles dentro de un programa.

El programa tiene la opción de buscar asegurados por su número de folio direcamente en el mapa (opción 7 en el menú)
El programa tiene la opción de buscar asegurados por nombre direcamente en el mapa (opción 8 en el menú)
El programa genera archivos ordenados por nombre, edad o folio (opción 4, 5 y 6 en el menú)


### Implementa mecanismos de lectura de archivos correctos y útiles dentro de un programa. Usar de manera

Los asegurados están registrados en el archivo asegurados.txt de donde se leen al iniciar el programa.

### Implementa mecanismos de escritura de archivos correctos y útiles dentro de un programa. 

Las asegurados se guardan al en archivos .txt con el nombre que ingreso el usuario.

## Complejidad Final del Programa
La complejidad del programa está dominada principalmente por las operaciones de lectura y escritura en archivos y por la ordenación de los asegurados. En general, se puede decir que la complejidad total es O(n log n), donde n es el número total de asegurados. Las operaciones individuales como la edición de edad, búsqueda por folio o nombre tienen complejidades más bajas, contribuyendo menos al tiempo total de ejecución.
