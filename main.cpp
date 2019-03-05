#include <iostream>
#include "initfunc.cpp"


using namespace std;

int main() {
    float a, b, c;
    cout << "Enter the coefficients with space between them: " << endl;
    cin >> a >> b >> c;

    QuadrFunc quadrfunc;
    
    double disc = quadrfunc.countDiscriminant( a, b, c);
    
    quadrfunc.countAndShowRoots( disc, a, b, c );
}

