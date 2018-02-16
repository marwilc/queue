/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main3.cpp
 * Author: marwilc
 *
 * Created on 8 de abril de 2016, 03:36 PM
 */

#include <iostream>
//#include "node2.h"
#include "list.h"

using namespace std;

/*
 * 
 */
int main() {

        List<int> listA, listB;
	int m, p, i, valor, entero;
	bool band=false;
	
	while(cin>>valor)
	{
		for(i=1;i<=valor;i++)
		{
			cin>>entero;
			if(!band)
			{
				//cout<<entero<<" ";
				listA.insert(entero, i);
			}
			else
			{
				listB.insert(entero, i);
			}
		}
		if(!band)
		{
			band=true;
			m=valor;
		}
		else
		{
			band=false;
			p=valor;
			//cout<<m<<endl;
			//cout<<listA<<endl;
			//cout<<p<<endl;
			//cout<<listB<<endl;
                        //cout<<listA.length()<<endl;
                        //cout<<listB.length()<<endl;
                        cout<<listA.subList(listB)<<"repeat"<<endl;
			listA.emptying();
			listB.emptying();
		}
	}
	return 0;
    return 0;
}

