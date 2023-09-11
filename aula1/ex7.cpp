#include <iostream>

using namespace std;

int main(){
    float n1, n2, media;
    cout<< "Digite a primeira nota: ";
    cin>> n1;
    cout<< "\nDigite a segunda nota: ";
    cin>> n2;
    media = ((n1*0.4) + (n2*0.6));

    cout<< "A media do aluno foi " << media << ".";
    return 0;
    
    
}