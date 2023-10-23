#include <iostream>
#include <stdlib.h>
using namespace std;

typedef char stack_element; //vamos comecas testando tipos inteiros

struct no {
    stack_element info;
    no * link;
};

struct Stack{
    no * top;
};

//funcao para errros
void error(int i){
    switch (i){
        case 1:cerr<<"OVERFLOW";exit (1);
        case 2:cerr<<"UNDERFLOW";exit(1);
    }
};

//funcao para iniciar uma pilha vazia
void initStack(Stack &p){
    p.top = NULL;
};

//funcao para alocar memoria para um no
no * novo_no(){
    no *novo = (no*) malloc  (sizeof(no));
    if (!novo){
        error(1);
    }
    return novo;
};

//funcao que inserir informacao no topo da pilha
void push(Stack &p, stack_element a){
    no *novo;
    novo = novo_no();

    novo->info = a;
    novo->link = p.top;
    p.top = novo;
};

//funcao para eliminar informacao do topo da pilha
stack_element pop (Stack &p){
    if(p.top == NULL) error (2);
    stack_element v;
    
    v = p.top -> info;

    no * x = p.top;
    p.top = (p.top)->link ; 
    free(x);

    return v;
};

//funcao para consultar informacao no topo da lista
stack_element peek(Stack p){
    if (p.top == NULL){
        error (2);
    }
    return (p.top)->info;
};

//funcao para verificar se a pilha esta vazia ou nao
int isEmpity(Stack p){
    if(p.top == NULL) return 1; //vazia
    return 0; // nao vazia

};


int main(){
    Stack letras;
    stack_element ver_topo;
    int pilha_vazia;

    //testando se a lista esta vazia
    pilha_vazia = isEmpity(letras);
    if(pilha_vazia){
        cout<<"\nPILHA VAZIA!\n";
    }
    else {
        cout<<"\nPilha contem DADOS\n";
    }

    //vendo o topo da pilha (stack)
    ver_topo = peek(letras);
    cout<<ver_topo<<endl;

    //inserindo 5 elementos na pilha (stack) numeros
    push(letras, 'A');
    push(letras, 'B');
    push(letras, 'C');
    push(letras, 'D');
    push(letras, 'E');

    //testando se a lista esta vazia
    pilha_vazia = isEmpity(letras);
    if(pilha_vazia)cout<<"\nPILHA VAZIA!\n";
    else cout<<"\nPilha contem DADOS\n";

    //vendo o topo da pilha (stack)
    ver_topo = peek(letras);
    cout<<ver_topo<<endl;

    //removendo o elemento do topo da pilha (stack)
    pop(letras);
    
    //vendo novamente o topo da pilha
    ver_topo = peek(letras);
    cout<<ver_topo<<endl;


    //removendo varios elementos da pilha (stack)
    pop(letras);
    pop(letras);
    pop(letras);
    pop(letras);
    

    //vendo novamente o topo da pilha
    ver_topo = peek(letras);
    cout<<ver_topo<<endl;

    //testando se a lista esta vazia
    pilha_vazia = isEmpity(letras);
    if(pilha_vazia){
        cout<<"\nPILHA VAZIA!\n";
    }
    else {
        cout<<"\nPilha contem DADOS\n";
    }

    return 0;
};