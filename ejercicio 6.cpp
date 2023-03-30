
#include <iostream>
#include <cmath>
using namespace std;
int i,N, suma;
int main()
{
    cout<<"Ingrese el numero de veces a repetir: ";
    cin>>N;
    for (int i=1;i<=N;i++)
    {
        suma=suma+pow(N,i);
        
    }
    cout<<suma<<endl;
    
    
    return 0;
}