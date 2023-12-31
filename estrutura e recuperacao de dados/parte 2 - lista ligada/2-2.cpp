/*
2. Construir uma função que cria uma lista ligada para conter em cada nó um termo da seguinte soma: (ND 3)
*/
#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

typedef float elemento; //Estou dizendo que int agora irá se chamar elemento, dando um apelido, isso permite que daqui pra frente eu chame int de elemento!

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
    no *novo, *p;
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


// funcao para fazer a soma de termos
void soma_termos(no ** pri, elemento a){
    no *novo;
    no *p;
    float n = 1; //numerador
    float d = 1; //denominador
    float termo;

    //primeiro vamos criar um nó com o elemento inicial
    novo = novo_no();
    novo->link = NULL;
    termo = n / d;
    novo->info = termo;

    //agora atribuimos pri ao novo nó e em seguida também posicinamos p em pri
    *pri = novo;
    p = *pri;

    for (n=3 ; n< 100 ; n=n+2){
        //vamos aumentando d de um em um
        d++;

        //criamos um novo no    
        novo = novo_no();
        novo->link = NULL;
        termo += n / d;
        novo->info = termo;

        //conectamos o novo no a lista
        p->link = novo;

        //movemos a posicao do p para o no criado
        p = p->link;
    }
}


int main(){
    no * pri;
    int a = 1;

    pri = init();

    soma_termos(&pri, a);

    imprime(pri);



    return 0;
}