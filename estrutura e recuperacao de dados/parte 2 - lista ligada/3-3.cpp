
#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

typedef char elemento; //Estou dizendo que int agora irá se chamar elemento, dando um apelido, isso permite que daqui pra frente eu chame int de elemento!

typedef struct no{
    elemento info; //elemento é o tipo (nesse caso inteiro) e info o nome da variável.
    no * link;      //no é o tipo link será um ponteiro para um nó. ou seja armazena o endereço do próximo nó da lista ligada.  
}no;

//funcao para impremir os elementos dos nós
void imprime(no* pri){
    no* p;
    p = pri;

    while(p != NULL){
        cout<< p->info/*<<"  "*/;   //imprime o que está dentro de info
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

// funcao que insere * entre os nós (caracteres)
void insere_asterisco(no ** pri, elemento x){
    no *novo;
    no *p;

    p = *pri;

    while( p->link != NULL){
        novo = novo_no();
        novo->info = x;
        novo->link = p->link;
        p->link = novo;
        p = novo->link;
    }
}


int main(){
    no * pri;
    char x;
    x = '*';

    system("cls");

    pri = init();
    

    inserir_final(&pri, 'N');
    inserir_final(&pri, 'A');
    inserir_final(&pri, 'Y');

    imprime(pri);

    insere_asterisco(&pri, x);
    cout<<"\nNova lista:\n";

    imprime(pri);

    return 0;
}