//
//  polynomial.hpp
//  lab_exam_3_practice
//
//  Created by Brandon Johns on 4/29/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#ifndef polynomial_hpp
#define polynomial_hpp

#include <stdio.h>
using namespace std;
#include<iostream>

class Polynomial
{
public:
    Polynomial();
    Polynomial(int degr);
    // Initialize the object with degree of degr
    Polynomial(const Polynomial &poly);
    // Copy constructor
    Polynomial(double cf[], int degr);
    // Parameterized constructor. The input is an array of double values and
    // the degree. The array of double should have already been populated with
    // the coefficients of the polynomial.
    Polynomial(double ct);
    // A constructor to automatically convert a constant to a polynomial
    ~Polynomial();
    int get_degree() const;
    // Return the private member degree.
    double get_coeff(int index) const;
    // Return the coefficient of a index.
    void set_coeff(int index, double val);
    // Mutator to alter a coefficient
    void operator = (const Polynomial &poly);
    // Assignment operator
    friend Polynomial operator+(const Polynomial &polya, const Polynomial &polyb);
    friend Polynomial operator-(const Polynomial &polya, const Polynomial &polyb);
    friend Polynomial operator*(const Polynomial &polya, const Polynomial &polyb);
    friend ostream& operator << (ostream& ost, const Polynomial &pol);
    double evaluate(double val);
    // Evaluate the polynomial
private:
    double *coeff;
    int degree;
};
void polynomialoutput();
#endif /* polynomial_hpp */
