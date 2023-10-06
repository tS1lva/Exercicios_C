#include <iostream>
using namespace std;

int soma_n_inteiros (int n, int total){
    total = total + n;
    if(n <= 1) {
        return total;
    }
    return soma_n_inteiros(n-1, total);
}

int main(){
    int n, total = 0;
    cout<<"Digite N: ";
    cin>>n;
    cout<<"\n";
    total = soma_n_inteiros(n, total);
    cout<<total;
    return 0 ;
}