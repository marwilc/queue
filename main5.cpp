/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main5.cpp
 * Author: marwilc
 *
 * Created on 12 de abril de 2016, 09:52 PM
 */

#include <cstdlib>
#include <iostream>
#include "list.h"
#include "tail.h"

using namespace std;

/*
 * 
 */
int main() {
    
    List<int> lA;
    Tail<int> cA, cB;
    int casos,nElements, entero, i, j, k;
    
    cin>>casos;
    
    for(i=1;i<=casos;i++)
    {
        cin>>nElements;
        for(j=1;j<=nElements;j++)
        {
            cin>>entero;
            lA.insert(entero);
        }
        
        for(k=1;k<=lA.length();k++)
        {
            if(k<=lA.length()/2)
            {
                cA.addTail(lA.consult(k));
            }
            else
            {
                cB.addTail(lA.consult(k));
            }
        }
        
        cout<<endl;
        cA.printTail();
        cout<<endl;
        cB.printTail();
        //cout<<lA<<endl;
        lA.emptying();
        cA.emptyingTail();
        cB.emptyingTail();
        
    }

    return 0;
}

