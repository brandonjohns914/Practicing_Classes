//
//  complex.hpp
//  lab_exam_3_practice
//
//  Created by Brandon Johns on 4/29/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#ifndef complex_hpp
#define complex_hpp

#include <stdio.h>
using namespace std;
#include<iostream>
#include <cmath>

class complex
{
public:
    complex (double r = 0, double i = 0): re (r), im (i) { }
    double real () const { return re; }
    double imag () const { return im; }
private:
    double re, im;
    friend double real (const complex&) ;
    friend double imag (const complex&) ;
    friend complex operator + (const complex&, const
                               complex&);
    friend complex operator - (const complex&,
                               const complex&);
    friend complex operator * (const complex&,
                               const complex&);
    friend complex operator / (const complex&,
                               const complex&);
    friend bool operator == (const complex&,
                             const complex&);
    friend bool operator != (const complex&,
                             const complex&);
    friend complex polar (double, double);
    friend istream& operator>> (istream&, complex&);
    friend ostream& operator<< (ostream&, const complex&);
};
double norm (const complex& x);

void complexoutput();
#endif /* complex_hpp */
