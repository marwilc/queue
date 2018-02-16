#include <iostream>
#include <string>
#include "list.h"

using namespace std;

int main()
{
    int i,j,k, prim, ult, cont;
    string cadena;
    char caracter1, caracter2;
    List<char> l1; 
    for(i=1;i<=4;i++)
    {
       
        getline(cin, cadena);
        //cout<<cadena<<'\n';
        //cout<<caracter;
        for(j=0;j<cadena.size();j++)
        {
            l1.insert(cadena[j],j+1);
        }
        //l1.codification();
        k=1;
        prim=2;
        cont=l1.length()/4;
        
        if(l1.length()%2==0)
            ult=l1.length();   
        else
            ult=l1.length()-1;
      
        while(k<=cont)
        {
            caracter1=l1.consult(prim);
            caracter2=l1.consult(ult);
            l1.erase(prim);
            l1.insert(caracter2,prim);
            l1.erase(ult);
            l1.insert(caracter1,ult);
            prim+=2;
            ult-=2;
            k++;
        }
            
        for(j=1;j<=l1.length();j++)
        {
            cout<<l1.consult(j);
        }
        cout<<'\n';
        l1.emptying();
    }
    return 0;
}
