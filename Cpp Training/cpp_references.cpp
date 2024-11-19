#include <iostream>
#include "sumaFunc.h"
#include "armadillo"
//#include <stdlib.h>

using namespace std;
using namespace arma;
//int sumaFunc(int x , int y);
int main()
{
    double xvariable;
    cin >> xvariable;
    double &yvariable = xvariable;
    cout << yvariable + xvariable << endl;
    int suma = yvariable + 2 * yvariable;
    cout << suma << endl;
    if (xvariable >= 100 && xvariable != 150)
    {
        cout << "es lo que es" << endl;
    }
    //xvariable = sumaFunc(xvariable, xvariable);
    cout << "new xvariable value x 2 is: " << sumaFunc(xvariable, xvariable)/*xvariable*/ << endl;
    cout << std::sin(xvariable) << " es el seno " << endl;
    cout << "entre a y b\n";
    double a, b;
    cin >> a;
    //cout << endl;
    cin >> b;
    float hypotenusa = arma_hypot_generic(a, b);
    cout << hypotenusa << " es la hypotenusa del triangulo" << endl;
    
return 0;
}
/*
int sumaFunc(int x, int y) {
    //int xv = x;
    //int yv = y;
return x + y;
}*/
