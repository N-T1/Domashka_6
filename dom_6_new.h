#ifndef DOM_6_NEW
#define DOM_6_NEW
#include <iostream>
using namespace std;

struct  Complex
{
    double re = 0;
    double im = 0;

    void print();
    double mod();
    void coutmod();

};
bool operator>(Complex& a, Complex& b);
ostream& operator<< (ostream& out, Complex& a);

void sort_bubble(int mass[], int N);
void sort_bubble(double mass[], int N); 
void sort_bubble(Complex mass[], int N);

#endif