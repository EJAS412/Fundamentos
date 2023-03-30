
#include <iostream>
using namespace std;
int main()
{
    int i,N;
    cout<<"Ingrese el numero de veces a repetir: ";
    cin>>N;
    cout<<"Salida del mientras"<<endl;
    i=0;
    while (i<N)
    {
        i++;
        cout<<i<<endl;
    }
    cout<<"Salida del para"<<endl;
    for (int i=0;i<=10;i++)
        cout<<i<<endl;
    cout<<"Salida del repetir"<<endl;
    i=0;
    do {
        i++;
        cout<<i<<endl;
    } while(i<10);   
        
        
    return 0;
}
