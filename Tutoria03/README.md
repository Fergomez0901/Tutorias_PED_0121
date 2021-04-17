# Recursividad
Las funciones recursivas son aquellas que se invocan a si mismas en algun punto de su ejecucion. ***Divide y venceras***.

* Caso Base
* Caso recursivo

El ejemplo mas basico es el calculo de un numero factorial. En este caso debemos recordar que:

    n! = n * (n-1)!
    factorial(n) = n * factorial(n-1)

Como caso base tenemos tenemos que:

    0! = 1
    factorial(0) = 1

![Recursion](https://static.javatpoint.com/cpp/images/cpp-recursion1.png)

## Recursion Lineal
**En la recursion lineal cada llamada recursiva genera, como mucho, otra llamada recursiva**. Se pueden distinguir dos tipos de recursion lineal atendiendo a como se genera resultado.

* Recursion lineal no final. **El resultado de la llamada recursiva se combina con una expresion para dar lugar al resultado de la funcion que llama.**
Por ejemplo el caso del calculo del factorial de un numero. 

* Recursion lineal final. **El resultado devuelto es el resultado de ejecucion de la ultima llamada recurisva.** Por ejemplo:

```c++
long mcd (long a, long b)
{
    if(a == b)
        return a;
    else if(a < b)
        return mcd(a, b-a);
    else
        return mcd(a-b, b);
}
```
## Recursion Multiple
**Aquella en la que alguna llamada recursiva puede generar mas de una llamada a la funcion.** Por ejemplo el caso de la serie de Fibonacci.

## Recursion Mutua
**Implica mas de una funcion que se llaman mutuamente.**

# Estructura de datos
Una estructura de datos es, una coleccion de datos que se caracterizan por su organizacion y las operaciones que se definen en ellos.

## Estructuras estaticas de datos
Son aquellas en las que el tamaño ocupado en memoria **se define con anterioridad** a la ejecucion del programa que los usa, de forma que su dimension **no puede modificarse** durante la misma ejecucion.

## Estructura dinamica de datos
Una estructura dinamica de datos es aquella que **permite la asignacion de espacio en memoria durante la ejecucucion de un programa**, conforme lo requieran las variables de este.

Los datos en una estructura dinamica se encuentran relacionados con ***punteros***.

Las estructuras dinamicas de datos incluyen:

* Pilas ***(Ultimo que entra, primero en salir)***
![Stack](https://miro.medium.com/max/500/0*eXcHV8ezosdoGuk3.jpg)

![StackGif](https://miro.medium.com/max/1280/0*SESFJYWU5a-3XM9m.gif)

* Colas ***(Primero en entrar, primero en salir)***
![Queue](https://www.tutorialandexample.com/wp-content/uploads/2020/05/Queue-in-DS-1.jpg)

![QueueGif](https://i1.faceprep.in/Companies-1/queue-operations.gif)

* Listas enlazadas 
* Arboles

# Stack
Operaciones de una pila:

* Initialize (crear): Crea la pila vacia.

* Push (apilar): Añade un elemento a la pila.

* Pop (desapilar): Retira el elemento superior de la pila.

* Top / Peek (leer ultimo): Lee el elemento superior de la pila sin retirarlo.

* Empty (vacia): funcion booleana que devule ***true*** si la pila esta vacia, o ***false*** en caso de que contenga alguno. 