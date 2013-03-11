// code works 

#include <stdio.h>
#include <math.h>

typedef struct {
    double re;
    double im;
} Complex;

void complexIncrement(Complex *this, Complex other) {
    this->re += other.re;
    this->im += other.im;
}

void complexDecrement(Complex *this, Complex other) {
    this->re -= other.re;
    this->im -= other.im;
}

void complexMultiply(Complex *this, Complex other) {
    double tmpRe = this->re * other.re - this->im * other.im;
    double tmpIm = this->im * other.re + this->re * other.im;
    
    this->re = tmpRe;
    this->im = tmpIm;
}

Complex complexSum(Complex a, Complex b) {
    a.re += b.re;
    a.im += b.im;
    return a;
}

Complex complexDiff(Complex a, Complex b) {
    a.re -= b.re;
    a.im -= b.im;
    return a;
}

Complex complexProduct(Complex a, Complex b) {
    Complex c;
    
    c.re = a.re * b.re - a.im * b.im;
    c.im = a.im * b.re + a.re * b.im;
    return c;
}

int complexEqual(Complex a, Complex b) {
    if ( a.re == b.re && a.im == b.im ) {
        return 1;
    }
    return 0;
}

double complexAbs(Complex this) {
    return hypot(this.re, this.im);
}

void complexPrint(Complex this) {
    if ( this.im < 0 ) {
        printf("%g%gi", this.re, this.im);
    } else {
        printf("%g+%gi", this.re, this.im);
    }
}

int main() {
    Complex a;
    Complex b;

    scanf("%lf %lf %lf %lf", &a.re, &a.im, &b.re, &b.im);
    

    
    complexPrint(complexDiff(a, b));
    printf("\n"); 
    complexDecrement(&a, b);
    printf("\n");
    printf("\n");
    complexPrint(a);
    printf("\n");
    printf("\n");
    printf("\n---------\n");
    printf("\n");


    complexPrint(a);
    if ( complexEqual(a, b) == 1 ) {
        printf(" is equal to ");
    } else {
        printf(" is not equal to ");
    }
    complexPrint(b);
    printf("\n");
    printf("%f\n", complexAbs(b));
    printf("\n");

    return 0;
}


















