# Pilas desde 0

Funciones de una pila

## Estructura nodo
```cpp
struct Node
{
    T element;
    struct Node *next;
}
typedef struct Node *Stack;
```

## Initialize (inicializar pila)

```cpp
void initialize(Stack *s)
{
    *s == NULL;
}
```
## Empty
Esta funcion retorna verdadero si la pila se encuentra vacia.
```cpp
bool empty(Stack *s)
{
    return *s == NULL;
}
```

## Push

```cpp
void push(Stack *s, T e)
{
    struct Node *node;
    node = new Node;
    node->element = e;
    node->next = *s;    // puntero next apunta al elemento anterior en la pila

    *s = node;          //puntero de la pila ahora apunta al nuevo elemento
}
```

## Pop

```cpp
void pop(Stack *s)
{
    if(!empty(s))   // Si la pila no esta vacia...
    {
        struct Node *aux = *s;
        *s = (*s)->next;
        delete(aux);
    }
    else    // Underflow
    {
        return;
    }
}
```

## Mostrar Stack

```cpp
void showStack(Stack *s)
{
    struct Node *clone = *s;
    bool isEmpty = false;
    cout << "---------PILA---------" << endl;
    while(!isEmpty)
    {
        if(!empty(&clone))
        {
            // Se imprime los datos que contiene la pila
        }
        else
        {
            isEmpty = true;
        }
    }
    cout <<endl;
}
```

# Queues (Colas) desde 0

## Estructura nodo

```cpp
struct Node
{
    T element;
    struct Node *next;
}
```

## Estructutra cola

```cpp
struct Queue
{
    struct Node *front;
    struct Node *back;
}
```

## Initialize (Inicializar cola)

```cpp
void initialize(Queue *q)
{
    q->frente = NULL;
    q->final = NULL;
}
```

## Empty
Esta funcion retorna verdadero si la cola se encuentra vacia.

```cpp
bool empty(Queue *q)
{
    return (q->front == NULL) ? true : false;
}
```

## Front
Esta funcion retorna el elemento que se encuentra en el frente (la primera posicion) de la cola. Es necesario realizar siempre una verificacion de que la cola no se encuentre vacia.

```cpp
T front(Queue *q)
{
    if(empty(q))
    {
        cout << "Underflow" << endl;
        return ... ; // Retornamos un valor por defecto o nulo para el tipo de dato seleccionado
    }
    return (q->front)->element;
}
```

## Back
Esta funcino retorna el elemento que se encuentra en la ultima poiscion de la cola (final). Es necesario verificar que la cola no se encuentre vacia.

```cpp
T back(Queue *q)
{
    if(empty(q))
    {
        cout << "Underflow" << endl;
        return ...;// Retornamos un valor por defecto o nulo para el tipo de dato seleccionado
    }
    return (q->back)->element;
}
```

## Enqueue (agregar elementos a la cola)

```cpp
void enqueue(Queue *q, T newElement)
{
    Node *aNode = new Node;
    aNode->element = newElement;
    aNode->next = NULL;

    if(q->back == NULL)
        q->front = aNode;
    else
        (q->back)->next = aNode;

    q->back = aNode;
}

T dequeue(Queue *q)
{
    if(empty(q))
    {
        cout << "Underflow" << endl;
        return ... // Invalido;
    }
    Node *aNode = q->front;
    T frontElement = aNode->element;
    q->front = aNode->next;

    if(q->front == NULL)
        q->back = NULL;
    
    delete(aNode);
    return frontElement;
}
```

## Size
Esta funcion nos retorna la cantidad de elementos que hay en la cola.

```cpp
int size(Queue *q)
{
    Queue tempQueue;
    initialize(&tempQueue);

    int counter = 0;
    // Transfiriendo datos de Queue a Queue temporal
    while(!empty(q))
    {
        T element = dequeue(q);
        enqueue(&tempQueue, element);
        counter++;
    }
    // Transfiriendo datos de Queue temporal a Queue original
    while(!empty(&tempQueue))
    {
        T element = dequeue(&tempQueue);
        enqueue(q, element);
    }
    return counter;
}
```