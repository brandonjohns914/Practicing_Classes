//
//  complex.cpp
//  lab_exam_3_practice
//
//  Created by Brandon Johns on 4/29/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#include "complex.hpp"
using namespace std;
#include<iostream>
#include <cmath>

ostream& operator<< (ostream& o, const complex& c)
{
    o << "(" << c.re << ", " << c.im << ")";
    return o;
}
//limited checking of format is done here.
istream& operator>> (istream& ins, complex& z)
{
    double r, i;
    char ch;
    ins >> ch;
    if ('(' != ch) //if the complex number isn't in
        //required form, complain and exit.
    {
        cout << "\nBad complex form: found "
        << ch << ", need(for complex input; \n"
        << "A complex must be of the form (re, im) \n";
        exit(1);
    }
    //We have '(' -- now get the real part
    ins >> r;
    //and get the comma
    ins >>ch;
    if (',' != ch) //complex number must have a comma next,
        //if not, complain and exit.
    {
        cout << "\nBad complex form: found "
        << ch << ", need comma for complex input; \n"
        << "A complex must be of the form (re, im) \n";
        exit(1);
    }
    //now get the imaginary part
    ins >> i;
    //and get the close parenthesis
    ins >> ch;
    if(')' != ch)//complex number must have a ')' last,
        //If not, complain and exit.
    {
        cout << "\nBad complex form: found "
        << ch << ", need)for complex input; \n"
        << "A complex must be of the form (re, im) \n";
        exit(1);
    }
    z = complex(r, i);
    return ins;
}
double imag (const complex& x)
{
    return x.imag ();
}
double real (const complex& x)
{
    return x.real ();
}
complex operator + (const complex& x, const complex& y)
{
    return complex (real (x) + real (y), imag (x) + imag (y));
}
complex operator - (const complex& x, const complex& y)
{
    return complex (real (x) - real (y), imag (x) - imag (y));
}
complex operator * (const complex& x, const complex& y)
{
    return complex (real (x) * real (y) - imag (x) * imag (y),
                    real (x) * imag (y) + imag (x) * real
                    (y));
}
complex operator / (const complex& x, double y)
{
    return complex (real (x) / y, imag (x) / y);
}
bool operator == (const complex& x, const complex& y)
{
    return real (x) == real (y) && imag (x) == imag (y);
}
bool operator != (const complex& x, const complex& y)
{
    return real (x) != real (y) || imag (x) != imag (y);
}
double abs (const complex& x)
{
    return sqrt(norm(x));
}
complex conj (const complex& x)
{
    return complex (real (x), -imag (x));
}
double norm (const complex& x)
{
    return real (x) * real (x) + imag (x) * imag (x);
}
//Divide overloading: There is a possible bug here.
//The usual tool for complex division, num/den =
//num*conj(den)*(1/(den * conj(den)), causes an infinite
//recursion.
//Exercise: How and why?
complex operator / (const complex& num, const complex& den)
{
    return(num * conj(den) * (1/norm(den)));
}
void complexoutput()
{
    complex x, y(3), z(-3.2, 2.1);
    cout <<"x = " << x << " y = " << y
    << " z = " << z << endl << endl;
    x = complex(3, -4);
    cout << "testing members and support functions as "
    << " well as output operator:\n"
    << "complex number x = " << x << endl
    << "real part: " << x.real() << endl
    << "real part from friend real(x): "
    << real(x) << endl
    << "imaginary part: " << x.imag() << endl
    << "imaginary part from friend imag(x) : "
    << imag(x) << endl
    << "norm: " << norm(x) << endl << endl;
    cout << "test complex arithmetic and output"
    << " routines: \n\n";
    y = complex (1, -1);
    cout << "x = " << x << " y = " << y
    << " z = " << z << endl << endl;
    z = x + y;
    cout << "z = x + y = " << z << endl;
    z = x * y;
    cout << "z = x * y = " << z << endl;
    z = x - y;
    cout << "z = x - y = " << z << endl;
    z = x / y;
    cout << "z = x / y = " << z << endl << endl;
    //test of automatic conversion double -> complex by the
    //constructor.
    double d(2.0);
    cout << "d: " << d << " x: " << x <<endl;
    cout << "x+d: " ;
    z = x + d;
    cout << z << endl;
    z = x - d;
    cout << "x-d: " ;
    cout << z << endl;
    z = x * d;
    cout << "x*d: ";
    cout << z << endl;
    z = x / d;
    cout << "x/d: " ;
    cout << z << endl;
    z = d + x;
    cout << "d+x: " ;
    cout << z << endl;
    z = d - x;
    cout << "d-x: " ;
    cout << z << endl;
    z = d * x;
    cout << "d*x: " ;;
    cout << z << endl;
    z = d / x;
    cout << "d/x: " ;;
    cout << z << endl;
    //test whether double/complex and complex/complex
    //give same result:
    complex two(2,0);
    cout << "two/x: ";
    cout << two/x << endl;
    cout << "\nGetting data from standard input: \n";
    cin >> x >> y;
    cout << "data read is: x = " << x
    << " y = " << y << endl << endl;
}
