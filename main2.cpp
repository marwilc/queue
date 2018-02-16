/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main2.cpp
 * Author: marwilc
 *
 * Created on 8 de marzo de 2016, 05:33 PM
 */

#include <cstdlib>
#include <iostream>
#include "tail.h"
#include "stack.h"

using namespace std;

/*
 * 
 */
int main() 
{
    Tail<int> cola, colaAux;
    int i,j,m, entero, num;
    //char caracter;
    
    
    while(cin>>m)
    {
        while(cin>>entero && cin.get()!='\n')
        {
    
        //cin>>entero;
        //caracter=cin.get();
        cola.addTail(entero);
        }
        //cout<<entero<<caracter;   
    

    i=2;
    
    while(i<=m)
    {
        j=0;
        while(!cola.isEmpty())
        {
            j++;
            num=cola.getFront();
            cola.unTail();
            if(j!=1)
            {
                colaAux.addTail(num);
            }
            if(j==i)
            {
              j=0;  
            }   
        }
        //cout<<'\n'<<'\n';
        while(!colaAux.isEmpty())
        {
            num=colaAux.getFront();
            cout<<num<<" ";
            colaAux.unTail();
            cola.addTail(num);
        }
        cout<<'\n';
        i++;
    }
    cola.emptyingTail();
    colaAux.emptyingTail();
    
    /*while(!cola.isEmpty())
    {
        cout<<cola.getFront()<<" ";
        cola.unTail();
    }
    cout<<'\n'<<'\n';*/
    }
    return 0;
}


