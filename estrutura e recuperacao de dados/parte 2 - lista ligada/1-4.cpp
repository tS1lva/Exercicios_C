/*
Dada uma lista ligada contendo números inteiros. Construir uma função que verifica se a lista está ordenada ou não. Se ordenada retornar 1 senão retornar 0. Não usar estruturas auxiliares para a solução, tais como, vetor ou outra lista ligada. (ND 1)
*/
#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

typedef int elemento; //Estou dizendo que int agora irá se chamar elemento, dando um apelido, isso permite que daqui pra frente eu chame int de elemento!

typedef struct no{
    elemento info; //elemento é o tipo (nesse caso inteiro) e info o nome da variável.
    no * link;      //no é o tipo link será um ponteiro para um nó. ou seja armazena o endereço do próximo nó da lista ligada.  
}no;

//funcao para impremir os elementos dos nós
void imprime(no* pri){
    no* p;
    p = pri;

    while(p != NULL){
        cout<< p->info<<"  ";   //imprime o que está dentro de info
        p = p->link;            //pula para o próximo nó.
    }
};

//funcao para cria uma lista ligada vazia
no* init (){
    return NULL;
};

//funcao para criar um novo no
no* novo_no(){
    no* novo;
    novo = (no*) malloc(sizeof(no));
    if(novo == NULL){
        cout<<"Erro de alocação de memoriaA ";
        exit(1);
    }
    return novo;
}

//funcao para inserir elementos no final de uma lista
void inserir_final(no ** pri, elemento a){
    no* novo, *p;
    novo = novo_no(); //vamos criar ainda a funcao novo no!
    novo->info = a;
    novo->link = NULL;
    p = *pri;

    while (p != NULL && p->link != NULL)
    {
        p = p->link;
    }
    if(p == NULL){
        *pri = novo;
    }else{
        p->link = novo;
    }


}

//funcao para contagem dos nós
int conta_nos(no* pri){
    int contador=0 ;
    no* p;

    p = pri;

    while(p !=  NULL){
        p = p->link;
        contador ++;
    }
    return contador;
}

//funcao verifica se há repetição em uma lista ligada DESORDENADA
int verifica_repeticao_desordenada(no* pri){
    no* p;
    no* p_aux;

    p = pri;
    p_aux = pri;

    while(p_aux != NULL){
        p = pri;

        while(p != NULL){

            if(p->link != p_aux->link){

                if(p->info == p_aux->info){

                    return 1;
                }

            }
        p=p->link;

        }

    p_aux = p_aux->link;

    }


};

//funcao verifica se esta ordenada ou nao
int verifica_lista_ordenada(no* pri){
    no* p;
    no* p_aux;

    p = pri;
    p_aux = p;

    while(p->link != NULL){

        p = p->link;

        if((p->info) < (p_aux->info)){
            return 0;
        }else{
            p_aux = p_aux->link;
        }
    }
    return 1;
}

int main(){
    no * pri;
    int ordenada = 0;

    pri = init();

    inserir_final(&pri, 2);
    inserir_final(&pri, 3);
    inserir_final(&pri, 6);
    inserir_final(&pri, 7);
    inserir_final(&pri, 9);
    inserir_final(&pri, 9);

    imprime(pri);

    ordenada = verifica_lista_ordenada(pri);

    if(ordenada == 1){
        cout<<"\n\nLista Ligada ORDENADA!\n";
    }else{
        cout<<"\n\nLista ligada NAO ORDENADA!\n";
    }
    return 0;
}