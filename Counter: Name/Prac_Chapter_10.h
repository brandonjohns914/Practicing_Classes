//
//  Prac_Chapter_10.h
//  Chapter10_midterm2_Practice
//
//  Created by Brandon Johns on 3/17/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#ifndef Prac_Chapter_10_h
#define Prac_Chapter_10_h


#endif /* Prac_Chapter_10_h */

#include <iostream>
#include "Prac_Chapter_10.h"
#include "Prac_Project_10.h"
using namespace std;

/// 1
class CDAccount
{
private:
    double balance;
    double interest_rate;
    int term;
public:
    CDAccount();
    CDAccount(double bal, double Irate, int mon);
    double Balance();
    double Interest_rate();
    int Term();
    void Get_Info(CDAccount& account);
    double Balance_Maturity();
};
CDAccount:: CDAccount()
{
    
}
CDAccount:: CDAccount(double bal, double Irate, int mon)
{
    bal=balance;
    Irate=interest_rate;
    mon=term;
}
double CDAccount:: Balance()
{
    return balance;
}
double CDAccount:: Interest_rate()
{
    return interest_rate;
}
int  CDAccount:: Term()
{
    return term;
}
void  CDAccount:: Get_Info(CDAccount& account)
{
    cout<<"What is the account balance?: " <<endl;
    cin>> account.balance;
    cout<<"what is the interest rate?: " <<endl;
    cin>> account.interest_rate;
    cout<<"what is the term?: " <<endl;
    cin>>account.term;
}
double CDAccount:: Balance_Maturity()
{
    return balance*(1+(interest_rate/100.0)*(term/12.0));
}


///// 3
class CounterType
{
private:
    int counter;
public:
    CounterType();
    void setCounter(int counter);
    int getCounter();
    void addCounter();
    void minusCounter();
    void display(ostream& out);
    
};
CounterType:: CounterType()
{
    counter=0;
}

void CounterType:: setCounter(int counter)
{
    if(counter<0)
    {
        cout<<"Counter value cannot be a negative number" <<endl;
    }
    else
    {
        this -> counter=counter;
    }
}

void CounterType:: addCounter()
{
    counter=counter+1;
    
}
void CounterType:: minusCounter()
{
    if(counter<=0)
    {
        cout<< "counter cannot be less than zero" <<endl;
    }
    else
    {
        counter=counter-1;
    }
}
int CounterType:: getCounter()
{
    return counter;
}


