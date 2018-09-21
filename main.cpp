#include <iostream>
#include<cstdlib>
#include <stdio.h>
using namespace std;

int con[50];
struct nodo{
int nro;
struct nodo *sgte;
};

typedef struct nodo *puntero;

puntero cima;
    void Pila();
    void Apilar(int);
    int Desapilar();
    void Cima();
    bool Pilavacia();
    void Mostrarpila();
    void Destruirpila();
    void imprimirinverso(int);




void Pila(){
    cima=NULL;
}

bool Pilavacia(){
    if(cima==NULL){
    	return true;
	}
    else{
    	return false;
	}
}

void Apilar(int x){
puntero p_aux;
p_aux=new(struct nodo);
p_aux->nro=x;
p_aux->sgte=cima;
cima=p_aux;
}

void Cima(){
int x;
if(cima==NULL){
    printf("\n\n\tpila vacia...!");

}else{
    x=cima->nro;
    printf("\n\tla cima es: %d\n",x);

    }
}

int Desapilar(){
int x;
puntero p_aux;
if(cima==NULL){
    printf("\n\n\tpila vacia...!!");
}else{
    p_aux=cima;
    x=p_aux->nro;
    cima=cima->sgte;
    delete(p_aux);
    }
return x;
}

void Mostrarpila(){
puntero p_aux;
p_aux=cima;
while(p_aux!=NULL){
    printf("\t%d\n",p_aux->nro);
    p_aux=p_aux->sgte;
    }

}

void Destruirpila(){
puntero p_aux;

while(cima!=NULL){
    p_aux=cima;
    cima=cima->sgte;
    delete(p_aux);

    }

}
void menu(){
printf("\t|------------------------------------------|\n");
printf("\t|        IMPLEMENTACION DE UNA PILA        |\n");
printf("\t|------------------------------------------|\n");
printf("\t|                                          |\n");
printf("\t|  1. APILAR                               |\n");
printf("\t|  2. DESAPILAR                            |\n");
printf("\t|  3. MOSTRAR PILA                         |\n");
printf("\t|  4. DESTRUIR PILA                        |\n");
printf("\t|  5. MOSTRAR CIMA                         |\n");
printf("\t|  6. IMPRIMIR INVERSO                     |\n");
printf("\t|  7. SALIR                                |\n");
printf("\t|------------------------------------------|\n");
printf("\t ingrese una opcion: ");

}




int main(){

system("color 0a");
Pila();
int x;
int op;

do{

    menu();
    scanf("%d",&op);
    switch(op){
     case 1:
	 printf("\n\t INGRESE NUMERO A APILAR: ");
     scanf("%d",&x);
     Apilar(x);
     printf("\n\n\t\tNumero %d apilado...\n\n",x);
        break;
     case 2:
        if(Pilavacia()==true){
            printf("\n\n\tpila vacia...");
        }else{

        x=Desapilar();
        printf("\n\n\tnumero %d desapilado\n",x);

        }
            break;
     case 3:
        printf("\n\n\t MOSTRANDO PILA\n\n");
        if(Pilavacia()!=true){
            Mostrarpila();
        }else{
            printf("\n\n\t pila vacia..!\n");
        }   break;

     case 4:
        Destruirpila();
        printf("\n\n\tpila eliminada...\n\n");
        break;
     case 5:
        Cima();
        break;
     case 6:
        imprimirinverso(x);
    }

    printf("\n\n");
    system("pause"); system("cls");
}while(op!=7);

    return 0;
}



 void imprimirinverso(int x){

 /*
 esta forma es como yo lo haria para que se viera 5,4,3,2,1 pero como es una pila y el numero de la cima es el mayor debia aparecer 1,2,3,4,5 por eso use la de abajo y no esta
 int c=x;
for(int i=0;i<x;i++){

con[i]=c--;

}

 */



int c=1;
for(int i=0;i<x;i++){//a esta me refiero con la de abajo

con[i]=c++;

}

for(int j=0;j<x;j++){

    printf("\t%d\n",con[j]);
}


 }
