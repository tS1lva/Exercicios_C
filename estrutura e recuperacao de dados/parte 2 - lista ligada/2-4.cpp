
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
};

// funcao para fazer a soma de inteiros entre 1 e 10
void soma_inteiros_1_a_10(no ** pri, no ** soma){
    no *p;
    no *novo;
    no *p_aux;
    int contador;
    //iniciamos apontando p para pri
    p = *pri;

    //criamos uma lista soma de 10 nós, inicialmente vazia (sem infos)
    for (int i=1 ; i <= 10 ; i++){
        contador = 0;
        //sempre voltamos p para pri, ou seja para o inicio de sua lista
        p = *pri;
        //criamos um no
        novo = novo_no();
        novo->link = NULL;
        
        //agora vamos iterar na lista pri com numeros de 0 a 10
        while( p != NULL){
            //vamos verificar se info de p (p->info) corresponde com o numero que estamos buscando
            if (p->info == i){
                //a cada valor i encontrado, o contador incrementa
                contador++;
            }
            //andando com p.....
            p = p->link;
        }
        //após iterar sobre a lista pri, colocamos a contagem encontrada no novo nó que estamos criando
        novo->info = contador;

        //se for o primeiro no, vamos apontar soma para ele
        if (i == 1){
            *soma = novo;
            //também apontamos p_aux na mesma posicao
            p_aux = *soma;
        }else{
            //se nao é o primeiro no, conectamos na lista apontando o p_aux->link ao novo no. Em seguida, caminhamos com p_aux para essa nova posicao
            p_aux->link = novo;
            p_aux = p_aux->link;
        }
    }
};



int main(){
    no * pri;
    no * somas;
    int a = 1;

    pri = init();
    somas = init();

    inserir_final(&pri, 3);
    inserir_final(&pri, 10);
    inserir_final(&pri, 7);
    inserir_final(&pri, 3);
    inserir_final(&pri, 4);
    inserir_final(&pri, 9);
    inserir_final(&pri, 2);
    inserir_final(&pri, 9);
    inserir_final(&pri, 9);
    inserir_final(&pri, 9);

    soma_inteiros_1_a_10(&pri, &somas);

    imprime(somas);

    return 0;
}