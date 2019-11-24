//
//  rational.cpp
//  lab_exam_3_practice
//
//  Created by Brandon Johns on 4/29/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#include "rational.hpp"
using namespace std;
#include <iostream>

int GCM(int number1, int number2)
{
    int temp;
    int remainder;
    number1=abs(number1);
    number2=abs(number2);
    if(number1>number2)
    {
        temp=number1;
        number1=number2;
        number2=temp;
    }
    while(remainder!=0)
    {
        remainder= number1% number2;
        number1=number2;
        number2=remainder;
    }
    return number1;
}

void normalize(int& num, int& den)
{
    int gcd;
    gcd=GCM(num, den);
    if((num>0&& den<0) || (num<0 && den<0))
    {
        num=-num;
        den=-den;
    }
}

Rational:: Rational()
{
    num=0;
    dem=1;
}


Rational:: Rational (int N, int D)
{
    N=num;
    D=dem;
    normalize(N, D);
    if (D==0)
    {
        cout<< "dem cannot be zero"<<endl;
    }
}
Rational:: Rational( int WholeNumber)
{
    WholeNumber=num;
    dem=1;
}
istream& operator>>(istream& input, Rational& frctn)
{
    char ch;
    input>> frctn.num>>  ch >> frctn.dem;
    if(ch!='/')
    {
        cout<<"wrong input: "<<ch<<endl;
    }
    return input;
}

ostream& operator<<(ostream& output,const Rational& frctn)
{
    output<<(char)frctn.num<<'/'<<frctn.dem;
    return output;
}

 bool operator == (const Rational& number1, const Rational& number2)
{
    return number1.num*number2.dem==number2.num*number1.dem;
}


 bool operator >= (const Rational& number1, const Rational& number2)
{
    return number1.num*number2.dem>= number2.num*number1.dem;
}


 bool operator <= (const Rational& number1, const Rational& number2)
{
    return number1.num*number2.dem<= number2.num*number1.dem;
}

bool operator <(const Rational& number1, const Rational& number2)
{
    return number1.num*number2.dem< number2.num*number1.dem;
}
 bool operator >(const Rational& number1, const Rational& number2)
{
    return number1.num*number2.dem <number2.num*number1.dem;
}



 Rational operator +(const Rational& number1, const Rational& number2)
{
    int n;
    int d;
    Rational add;
    n=(number1.num*number2.dem)+(number1.dem*number2.num);
    d=number1.dem*number2.dem;
    normalize(n, d);
    return add;
}
 Rational operator -(const Rational& number1, const Rational& number2)
{
    int n;
    int d;
    Rational sub;
    n=(number1.num*number2.dem)-(number1.dem*number2.num);
    d=number1.dem*number2.dem;
    normalize(n, d);
    return sub;
}
 Rational operator *(const Rational& number1, const Rational& number2)
{
    int n;
    int d;
    Rational multi;
    n=number1.num*number2.num;
    d=number1.dem*number2.dem;
    normalize(n,d);
    multi=Rational(n,d);
    return multi;
}
Rational operator /(const Rational& number1, const Rational& number2)
{
    int n;
    int d;
    Rational div;
    n=number1.num*number2.dem;
    d=number1.dem*number2.num;
    normalize(n,d);
    div=Rational(n,d);
    return div;
}

void rationaloutput()
{
    Rational rational;
    
    cout<<"Results of Rational() constructor: "<< rational <<endl;
    rational=Rational(2);
    cout<<"Reuslts of Rational(int) constructor: " << rational <<endl;
    cout<<"Results of Rational(int int) constructor: "<< rational<<endl;
    
    
    cout<<"enter a fraction(Numerator/ Denomianator): ";
    cin>> rational;
    
    rational=Rational(12,-18);
    cout<<"results of rational(int int): " << rational <<endl;
    
    cout<< "the equivalent fraction is: " << rational <<endl;
    
    Rational rational1 =Rational(1,2);
    Rational rational2 =Rational(2,3);
    
    cout<<"rational numbers used for testing are: "<<endl;
    cout<<"Rational number -1: " <<endl;
    cout<< "Rational number -2: "<<endl;
    
    cout<<"testing the conditional operations: "<<endl;
    cout<< "is " << rational1<< " == " << rational2 <<"?: "<<endl;
    if(rational1==rational2)
    {
        cout<< "TRUE" <<endl;
        
    }
    
    else{
        cout<<"FALSE" <<endl;
    }
    
    cout<<"testing the conditional operations: "<<endl;
    cout<< "is " << rational1<< " < " << rational2 <<"?: "<<endl;
    if(rational1<rational2)
    {
        cout<< "TRUE" <<endl;
        
    }
    
    else{
        cout<<"FALSE" <<endl;
    }
    
    cout<<"testing the conditional operations: "<<endl;
    cout<< "is " << rational1<< " > " << rational2 <<"?: "<<endl;
    if(rational1>rational2)
    {
        cout<< "TRUE" <<endl;
        
    }
    
    else{
        cout<<"FALSE" <<endl;
    }
    
    cout<<"testing the conditional operations: "<<endl;
    cout<< "is " << rational1<< " <= " << rational2 <<"?: "<<endl;
    if(rational1<= rational2)
    {
        cout<< "TRUE" <<endl;
        
    }
    
    else
    {
        cout<<"FALSE" <<endl;
    }
    
    cout<<"testing the conditional operations: "<<endl;
    cout<< "is " << rational1<< " => " << rational2 <<"?: "<<endl;
    if(rational1>= rational2)
    {
        cout<< "TRUE" <<endl;
        
    }
    
    else{
        cout<<"FALSE" <<endl;
    }
    
    cout << "testing + operations: " <<endl;
    cout<<"rational1 " << " + " << " rational2" <<endl;
    cout<< rational1+rational2 <<endl;;
    cout<<endl;
    
    cout << "testing - operations: " <<endl;
    cout<<"rational1 " << " - " << " rational2" <<endl;
    cout<< rational1-rational2<<endl;
    cout<<endl;
    
    cout << "testing * operations: " <<endl;
    cout<<"rational1 " << " *" << " rational2" <<endl;
    cout<<(rational1*rational2)<<endl;
    cout<<endl;
    cout << "testing / operations: " <<endl;
    cout<<"rational1 " << " / " << " rational2" <<endl;
    cout<< rational1/ rational2<<endl;
    cout<<endl;
}

