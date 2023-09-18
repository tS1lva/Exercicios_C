#include <iostream>
using namespace std;

int potencia (int x, int y){
    int pot = 0, i;

    if(y == 0){
        x = 1;
    }else{
        for (i=1 ; i<y ; i++){
            x = x * x;
        }
    }
    return x;
}

int main(){
    int x, y, p;
    cout<<"valor de x: ";
    cin>>x;
    cout<<"\nelevado a : ";
    cin>>y;
    p = potencia(x,y);
    cout<<"\n"<<x<<" elevado a "<<y<<" e igual a "<<p;
    return 0;
}