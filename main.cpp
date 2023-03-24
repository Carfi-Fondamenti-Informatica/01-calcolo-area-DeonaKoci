#include <iostream>
using namespace std;

int main(){
//Qui vanno definite le variabili
 float a=0, b=0, c=0 ;
    float triangolo=0, quadrato=0, rettangolo=0, trapezio=0;
    cout << "inserire tre valori reali\n";

cin >> a >> b >> c;

 //Qui va scrittoil codice per eseguire i calcoli richiesti
    triangolo = ((a*b)/2);
    quadrato= a*a;
    rettangolo = a*b;
    trapezio = (((a+b)*c)/2);

    cout << "triangolo = " << triangolo ;
    cout << ", quadrato = " << quadrato ;
    cout << ", rettangolo = " << rettangolo ;
    cout << ", trapezio = " << trapezio ;

    return 0;
}
