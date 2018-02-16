/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main4.cpp
 * Author: marwilc
 *
 * Created on 11 de abril de 2016, 09:29 AM
 */

#include <iostream>
#include "polinomio.h"
#include "monomio.h"

using namespace std;

/*
 * 
 */
int main() 
{
    Polinomio<Monomio> p1, p2, p3,p4,p5;
    Monomio m1;
    int i,j, k,casos,cont, exp;
    float coef;
   
    
    cin>>casos;
    for(i=1;i<=casos;i++)
    {
        for(j=1;j<=3;j++)
        {
            if(j==3)
            {
                cin>>coef;
                cin>>exp;
                m1.modCoef(coef);
                m1.modExp(exp);
                p4.insert(m1,1);
            }
            else
            {
            cont=1;
            while(cin>>coef && cin>>exp && exp!=-1)
            {
                m1.modCoef(coef);
                m1.modExp(exp);
                
                if(j==1)
                    p1.insert(m1,cont);
                else if(j==2)
                    p2.insert(m1,cont);
                
                cont++;  
            }
            }
        }
        
      
        p3.suma(p1, p2);
        p3.imprimir(); 
        cout<<endl;
        p5.Multiplicacion(p3,p4);
        p5.imprimir();
        cout<<endl;
        //cout<<endl;
        //p1.imprimir();
        //cout<<endl;
        //p2.imprimir();
       // cout<<endl;
       // p3.imprimir();
        //cout<<endl;
        p1.emptying();
        p2.emptying();
        p3.emptying();
        p4.emptying();
        p5.emptying();
        
    }

    return 0;
}

