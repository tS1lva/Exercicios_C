#include <iostream>
using namespace std;

//ALGEBRA LINEAR ESTA INCORRETA

void ler_coeficientes(int *a, int *b, int* c, int *d, int *e, int *f){
    cout<<"\na = ";cin>>*a;
    cout<<"\nb = ";cin>>*b;
    cout<<"\nc = ";cin>>*c;
    cout<<"\nd = ";cin>>*d;
    cout<<"\ne = ";cin>>*e;
    cout<<"\nf = ";cin>>*f;
}

int sistema(int a, int b, int c, int d, int e, int f, float *x, float *y){
    int divisao_por_zero=0;

    if((a*e)-(b*d) == 0){
        divisao_por_zero = 1;
    }else{
        *x = ((c*e)-(b*f))/((a*e)-(b*d));
        *y = ((a*f)-(c*d))/((a*e)-(b*d));
    }

    if(divisao_por_zero){
        return 0;
    }else{
        return 1;
    }
}

void imprime(int a, int b, int c, int d, int e, int f, float x, float y, int flag){
    if (flag){
        cout<<"\nSolucao";
        cout<<"\n\t X = "<<x;
        cout<<"\n\t Y = "<<y;
    }else{
        cout<<"\nSistema sem solucao.";
    }
}

int main (){
    int a, b, c, d, e, f, flag;
    float x, y;

    ler_coeficientes(&a, &b, &c, &d, &e, &f);
    flag = sistema(a, b, c, d, e, f, &x, &y);
    imprime(a, b, c, d, e, f, x, y, flag);

    return 0;
}