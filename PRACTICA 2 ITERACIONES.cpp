#include <iostream>

using namespace std;

int main()

{
    int i=0,mayor,menor,Numeros;
    float promedio,suma=0;
    cout<<"Ingrese los Numeros: ";
    cin>>Numeros;
    if (Numeros<=0)
        cout<<"Ningun dato ingresado o no existen positivos";
    else{    
    mayor=Numeros;
    menor=Numeros;
        
    do {
     {
        suma=suma+Numeros;
        cout<<"Ingrese los Numeros: ";
        cin>>Numeros;
        if (Numeros>0)
        {
        if (mayor<Numeros)
            mayor=Numeros;
        if (menor>Numeros)    
            menor=Numeros;
        i++;
        }
       }   
    } while (Numeros>=0);
    if (Numeros>0)
        promedio=(suma+Numeros)/i;
    else
       i++;
        promedio=suma/i;
    cout<<"El promedio es: "<<promedio<<endl;
    cout<<"El mayor es: "<<mayor<<endl;
    cout<<"El menor es: "<<menor<<endl;
    return 0;
}}