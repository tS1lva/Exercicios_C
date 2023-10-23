/*
Dada uma lista ligada contendo números inteiros desordenados. Construir uma função que verifica se há algum número repetido na lista ou não. Caso exista alguma repetição retornar 1 senão retornar 0. Não usar estruturas auxiliares para a solução, tais como, vetor ou outra lista ligada. (ND 2)
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

//
int main(){
    no * pri;
    int repeticao = 0;

    pri = init();

    inserir_final(&pri, 375);
    inserir_final(&pri, 2020);
    inserir_final(&pri, 86);
    inserir_final(&pri, 22);
    inserir_final(&pri, 2020);
    inserir_final(&pri, 26);

    imprime(pri);

    repeticao = verifica_repeticao_desordenada(pri);

    if(repeticao == 1){
        cout<<"\n\nLista Ligada POSSUI repeticao!\n";
    }else{
        cout<<"\n\nLista ligada NAO POSSUI repeticao!\n";
    }
    return 0;
}