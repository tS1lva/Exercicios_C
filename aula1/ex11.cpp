#include <iostream>

using namespace std;

int main(){
    int a, b, c, d, e, f;
    float x, y;

    cout<< "Digites os valores (na sequencia) para a, b, c, d, e, f: \n";
    cin>> a;
    cin>> b;
    cin>> c;
    cin>> d;
    cin>> e;
    cin>> f;

    x = ((c*e) - (b*f)) / ((a*e) - (b*d));
    y = ((a*f) - (c*d)) / ((a*f) - (b*d));

    cout<< "Os resultados são x = " << x << " e y = " << y << ".";
    
    return 0;

}