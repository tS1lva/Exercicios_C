/*
Dada uma lista ligada contendo números inteiros ordenados. Construir uma função que verifica se há algum número repetido na lista ou não. Caso exista alguma repetição retornar 1 senão retornar 0. Não usar estruturas auxiliares para a solução, tais como, vetor ou outra lista ligada. (ND 1)
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

//funcao verifica se há repetição em uma lista ligada ordenada.
int verifica_repeticao(no* pri){
    no* p;
    no* p_anterior;
    p = pri;

    //se o link do nó p for NULL antes de começar iterar, significa que só tem um nó, e portanto não tem como haver repetição.
    if(p->link == NULL){
        return 0;
    }

    //1 enquanto o link de p for diferente de nulo
    while (p->link != NULL)
    {   //2 p_anterior recebe link e info de p
        p_anterior = p;

        //3 p recebe o endereco do seu link, significa que ira "andar" para o proximo elemento
        p = p->link;

        //4 se o valor do novo elemento de p for igual ao do anterior (p_anterior) retorna 1
        if(p->info == p_anterior->info ){ 
            return 1;
        }
    }
    //5 se percorreu toda a lista e nao encontrou repeticao, entao retorna 0
    return 0;

};

//
int main(){
    no * pri;
    int repeticao = 0;

    pri = init();

    inserir_final(&pri, 3);
    inserir_final(&pri, 5);
    inserir_final(&pri, 11);
    inserir_final(&pri, 40);
    inserir_final(&pri, 200);
    inserir_final(&pri, 200);

    imprime(pri);

    repeticao = verifica_repeticao(pri);

    if(repeticao == 1){
        cout<<"\n\nLista Ligada possui repeticao!";
    }else{
        cout<<"\n\nLista ligada nao possui repeticao!";
    }
    return 0;
}