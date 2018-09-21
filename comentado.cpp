#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;



struct nodo{
int dato;
nodo *siguiente;
};
void insertar(nodo *&,int);
void borrarpila(nodo *&);
void mostrarelemento(nodo *&);




int main(int argc, char const *argv[]){

nodo *pila=NULL;
int dato;
printf("digite un numero\n");
scanf("%d",&dato);
insertar(pila,dato);
printf("digite otro numero\n");
scanf("%d",&dato);
insertar(pila,dato);
printf("sacar elementos de la pila");
borrarpila(pila);
mostrarelemento(pila);
    return 0;
}

void insertar(nodo *&pila,int n){ //funcio en la cual ingresa la pila
nodo *nuevo_nodo=new nodo();
nuevo_nodo->dato=n; //igualamos nuevo nodo a el dato ](n)
nuevo_nodo->siguiente=pila;
pila=nuevo_nodo;
printf("el dato %d se agrego correctamente a la pila\n",n);
}

void borrarpila(nodo *&pila){//funcion en la que se borra la pila
while(pila!=NULL){
    nodo *aux=pila; //igualamos la la direccion de aux en pila
    pila=aux->siguiente;
    printf("\nborrando el dato %d",aux->dato);
    delete aux;
}
}

void mostrarelemento(nodo *&pila){
nodo *nueva_pila=pila;
if(pila==NULL){// si la pila es igual a null quiere decir que no hay nada
    printf("la pila esta vacia!\n");
}else if(nueva_pila!=NULL){//de lo contrario si nueva_pila es difente de null imprime nueva_pila a puntado a dato
    while(nueva_pila!=NULL){
        printf("%d.",nueva_pila->dato);
    }
}else{
printf("%d.",nueva_pila->dato);
}printf("\n");



}
