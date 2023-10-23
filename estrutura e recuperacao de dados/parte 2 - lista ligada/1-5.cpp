/*
Dada uma lista ligada contendo números inteiros quaisquer. Construir uma função que verifica qual o número que se repete mais vezes nessa lista. Retornar a porcentagem de repetições desse número em relação à lista toda. Não há restrição quanto ao uso de outras estruturas, apenas não "estrague" a lista dada. (ND 3)
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

//funcao verifica qual numero mais se repete e retorna % de repeticao
float porcentagem_repeticoes(no* pri){
    no* p;
    no* p_aux;
    int contador = 1;
    int contador_aux = 1;
    float porcentagem =0 ;
    float total;

    //chama outra funcao para obter o tamanho da lista
    total = conta_nos(pri);

    //retorna -1 se a lista estiver vazia
    if(total = 0){
        return -1;
    }

    p = pri;
    p_aux = pri;

    while(p_aux != NULL){
        p = pri;
        contador_aux = 1;
        while(p != NULL){

            if(p->link != p_aux->link){

                if(p->info == p_aux->info){
                    contador_aux ++;

                    if(contador_aux >= contador){
                        contador = contador_aux;
                    }                 
                }

            }
        p=p->link;
        }
    p_aux = p_aux->link;
    }
    
    porcentagem = (contador / total)*100;

    return porcentagem;
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



float numero_repetido(no* pri){


}

int main(){
    no * pri;
    int ordenada = 0;
    float porcentagem = 0;


    pri = init();

    inserir_final(&pri, 2);
    inserir_final(&pri, 6);
    inserir_final(&pri, 6);
    inserir_final(&pri, 9);
    inserir_final(&pri, 6);
    inserir_final(&pri, 6);
    inserir_final(&pri, 2);
    inserir_final(&pri, 3);
    inserir_final(&pri, 6);
    inserir_final(&pri, 6);
    inserir_final(&pri, 9);
    inserir_final(&pri, 6);
    inserir_final(&pri, 2);
    inserir_final(&pri, 6);
    inserir_final(&pri, 6);
    inserir_final(&pri, 9);
    inserir_final(&pri, 9);
    inserir_final(&pri, 6);
    inserir_final(&pri, 2);
    inserir_final(&pri, 3);
    inserir_final(&pri, 6);
    inserir_final(&pri, 9);
    inserir_final(&pri, 9);
    inserir_final(&pri, 6);

    imprime(pri);

    porcentagem = porcentagem_repeticoes(pri);

    cout<<"\n\n O percentual do numero mais repetido foi: "<<porcentagem<<"% \n\n";
    return 0;
}