//
//  rational.hpp
//  lab_exam_3_practice
//
//  Created by Brandon Johns on 4/29/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#ifndef rational_hpp
#define rational_hpp
#include<iostream>
using namespace std;
#include <stdio.h>

class Rational
{
private:
    int num;
    int dem;
public:
    Rational();
    Rational (int N, int D);
    Rational( int WholeNumber);
    friend bool operator == (const Rational& number1, const Rational& number2);
    friend bool operator >= (const Rational& number1, const Rational& number2);
    friend bool operator <= (const Rational& number1, const Rational& number2);
    friend bool operator <(const Rational& number1, const Rational& number2);
    friend bool operator >(const Rational& number1, const Rational& number2);
    
    
    friend istream& operator>>(istream& input, Rational& frctn);
    friend ostream& operator<<(ostream& output,const Rational& frctn);
    friend Rational operator +(const Rational& number1, const Rational& number2);
    friend Rational operator -(const Rational& number1, const Rational& number2);
    friend Rational operator /(const Rational& number1, const Rational& number2);
    friend Rational operator *(const Rational& number1, const Rational& number2);
    
};
int GCM(int number1, int number2);
void normalize(int& num, int& den); 
void rationaloutput();


#endif /* rational_hpp */
