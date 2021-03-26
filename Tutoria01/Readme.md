# Punteros
Un puntero es una variable que almacena una direccion de memoria.

### Que es una direccion de Memoria?
La memoria de una computadora se encuentra dividida en muchos segmentos, que estan enumerados de manera secuencial y se utilizan para almacenar valores. Cada celda tiene una direccion asignada.

***Para obtener la direccion de memoria de una variable se le antepone a el operador & (ampersand)***

```cpp
int a = 0;
cout << "Direccion de a: " << &a << endl;
```

### Usos del operador * (asterisco)

* Se utiliza en una multiplicacion

```cpp
int numero = 7 * 4;
```

* Se utiliza para declarar un puntero: ***(indireccion)***.

Indica que dicha variable se utilizara como un puntero (y no como una variable normal), es decir, su uso sera unicamente el almacenamiento de direcciones en memoria de otra variable.

```csharp
int *puntero;
```
* Se utiliza junto a un puntero ya declarado: ***(desreferencia)***.

Devuelve el valor contenido (o asigna uno nuevo) en la direccion apuntada por dicho puntero

```cpp
//Ejemplo 1
cout << (*puntero) << endl;  //Lee / Consulta

//Ejemplo 2
*puntero = 8;  //Escribe / Asigna
```

![Alt Text](https://media.geeksforgeeks.org/wp-content/cdn-uploads/How-Pointer-Works-In-C.png)


***

# Arreglos Unidimensionales

Los arreglos de una dimensino se utilizan cuando es necesario almacenar un considerable numero de valores en memoria y se desea tener acceso a ellos de una manera ordenada y uniforme.

**Es _necesario_ conocer la cantidad de elementos que se desea almacenar en el arreglo**

### Arreglos como parametros de funciones

Una funcion puede recibir un arreglo como un parametro.

```cpp
float promedio(int numeros[], int tamano)
{
    float suma = 0;
    for(int i = 0; i < tamano; i++)
    {
        suma += numeros[i];
    }
    return suma / tamano;
}
```

#### **Los arreglos nunca se pasan por valor porque: *Los arreglos son punteros y siempre se envian por referencia* **

![Alt Text](https://blog.penjee.com/wp-content/uploads/2015/02/pass-by-reference-vs-pass-by-value-animation.gif)

Mientras que una variable normal puede ser enviada por valor, los arreglos **no son copiados** cuando se envian como parametros a una funcion. Sino que se envia la direccion de memoria del primer elemento

```cpp
float promedio(int *numeros, int tamano)
{
    float suma = 0;
    for(int i = 0; i < tamano; i++)
    {
        suma += *(numeros + i);
    }
    return suma / tamano;
}
```
***

# Arreglos Bidimensionales

## Punteros Dobles

Un puntero doble A es una variable que contiene la direccion de memoria de un puntero B, y dicho puntero B a su vez contiene la direccion de memoria de una variable normal C.

A -> B -> C

![Alt Text](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Double-Pointer-in-C.png)

## Desreferenciando un puntero doble

No se obtendra el valor original, sino ***un puntero al valor original***. Dicho puntero debera ser desreferenciado una vez mas para poder obtener el valor original.

```cpp
int *puntero_nuevo = *doble;
int valor_original = *puntero_nuevo;
cout << valor_original << endl;
```

## Matrices

* Es un "arreglo de arreglos"

```cpp
int a[n][m];
```
Se define un arreglo que contiene **'n'** elementos. Cada uno de esos elementos es un arreglo que contiene **'m'** enteros.

El ***primer indice*** le corresponde a las ***filas*** (o celdas del arreglo principal/grande) y el ***segundo indice*** indica las ***columnas*** (o celdas dentro de cada arreglo pequeno).

Las matrices se almacenan en la memoria de la computadora y dicha memoria suele ser **lineal**. Con esto nos referimos a que la memoria de la computadora es escencialmente, un ***arreglo de una dimension***.

![Alt Text](http://math.hws.edu/javanotes/c7/two-dimensional-array.png)

![Alt Text](https://i.stack.imgur.com/M75kn.png)

# Structs

Una estructura o registro es un tipo de dato conglomerado que esta compuesto por dos o mas elementos relacionados. A diferencia de los arreglos, ***cada elemento de un registro puede tener su propio tipo, que puede diferir de los tipos de otros elementos.***

La palabra reservada ***struct*** le indica al compilador que se esta definiendo un registro. A los elementos de los registros se les conoce normalmente como **campos o miembors**.

```cpp
//Declaracion de una estructura

struct miEstructura
{
    char a;
    int b;
    float c;
};

//Creacion de un elemento de tipo miEstructura
struct miEstructura elemento1;
elemento1.b = 70;
```

## Operador -> (Miembro Puntero)

Para poder usar parametros que sean registros, se recomienda enviar su direccion a la funcion mediante un puntero (Paso por referencia).

* Las notaciones p -> x y (*p).x son equivalentes.