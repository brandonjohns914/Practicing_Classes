//
//  main.cpp
//  Chapter10_midterm2_Practice
//
//  Created by Brandon Johns on 3/17/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#include <iostream>

#include "Prac_Chapter_10.h"
#include "Prac_Project_10.h"
using namespace std;



int main()
{
    //// 1
    CDAccount account;
    account.Get_Info(account);
    cout<<"The current balance: "<< account.Balance()<<endl;
    cout<<"The interest rate: " << account.Interest_rate()<<endl;
    cout<<"The term is: " << account.Term()<<endl;
    
    cout<<"The account at maturity is: " << account.Balance_Maturity() << " at "<< account.Term() << " months" <<endl;
    
    cout<<"-----------------------------------" <<endl;
    cout<<"enter a number" <<endl;
    int num;
    cin>>num;
    CounterType count;
    count.setCounter(num);
    cout<< "counter value is: " << count.getCounter()<<endl <<endl;
    
    cout<<"subtact: " << endl;
    count.minusCounter();
    cout<<"new value: " << count.getCounter() <<endl <<endl;
    
    cout<<"subtact: " << endl;
    count.minusCounter();
    cout<<"new value: " << count.getCounter() <<endl <<endl;
    
    cout<<"addition : " << endl;
    count.addCounter();
    cout<<"new value: " << count.getCounter() <<endl <<endl;
    
    cout<< "Resetting counter" <<endl;
    count.setCounter(num);
    cout<<"current value: " << count.getCounter()<<endl <<endl;

}
