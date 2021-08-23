#ifndef ejer03  //ARCHIVO DE CABECERA
#define ejer03

#include <stdbool.h>    //BIBLIOTECA DE BOOLEANOS

typedef int INFO;   //ALIAS DE LA INFORMACIÓN DEL NODO
typedef struct _nodo nodo;  //ALIAS DE LA ESTRUCTURA DEL NODO

struct _nodo{   //ESTRUCTURA DEL NODO
    INFO info;  //INFORMACIÓN DEL NODO
    nodo *sig;  //APUNTADOR/ENLACE AL NODO SIGUIENTE
    int prioridad;  //PRIORIDAD DEL NODO
};

typedef struct _cola cola;  //ALIAS DE LA ESTRUCTURA DE LA COLA
struct _cola{   //ESTRUCTURA DE LA COLA
    nodo* head; //APUNTADOR/ENLACE A LA CABEZA DE LA COLA
    nodo* tail; //APUNTADOR/ENLACE A LA COLA DE LA COLA
    int num;    //CONTADOR DE NODOS EN AL COLA
};

nodo* crear_nodoC(INFO info, int priori);   //PROTOTIPO DE LA FUNCIÓN PARA CREAR UN NODO; RETORNA UN APUNTADOR TIPO nodo
void liberar_nodoC(nodo *n);    //PROTOTIPO DE LA FUNCIÓN PARA LIBERAR MEMORIA PARA UN NODO
cola* crear_cola(); //PROTOTIPO DE LA FUNCIÓN PARA CREAR LA COLA; RETORNA UN APUNTADOR TIPO cola
void liberar_cola(cola *l); //PROTOTIPO DE LA FUNCIÓN PARA LIBERAR MEMORIA DE LA COLA

bool insertar_inicio(cola *l, INFO info, int priori);   //PROTOTIPO DE LA FUNCIÓN PARA INSERTAR UN NODO AL INICIO DE LA COLA; RETORNA true O false
bool insertar_final(cola *l, INFO info,int priori); //PROTOTIPO DE LA FUNCIÓN PARA INSERTAR UN NODO AL FINAL DE LA COLA; RETORNA true O false
void prioridad(cola *l, INFO valor, int prio);  //PROTOTIPO DE LA FUNCIÓN PARA DETERMIANR LA PRIORIDAD DE NODO

void dequeue(cola *l);  //PROTOTIPO DE LA FUNCIÓN PARA DESENCOLAR UN NODO
INFO* colaC(cola *l);   //PROTOTIPO DE LA FUNCIÓN PARA RETORNAR EL ÚLTIMO NODO DE LA COLA; RETORNA UN APUNTADOR TIPO INFO

bool es_vaciaC(cola *l);    //PROTOTIPO DE LA FUNCIÓN PARA DETERMINAR SI LA COLA ESTÁ VACÍA; RETORNA true O false
bool vaciarC(cola *l);  //PROTOTIPO DE LA FUNCIÓN PARA VACIAR LA COLA; RETORNA true O false

void imprimir_cola(cola *l);    //PROTOTIPO DE LA FUNCIÓN PARA IMPRIMIR LA PILA

#endif // ejer03
