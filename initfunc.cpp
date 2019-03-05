#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class QuadrFunc {
    public:
        double countDiscriminant( float a, float b, float c) {
            return b * b - 4 * a * c;
        }

        double countAndShowRoots(double disc, float a, float b, float c) {

            double x1, x2;

            if ( disc > 0 ) {
                x1 = ( -b + sqrt(disc) ) / ( 2 * a );
                x2 = ( -b - sqrt(disc) ) / ( 2 * a );
                cout << setprecision(2) << fixed << "x1 = " << x1 << endl;
                cout << fixed << "x2 = " << x2 << endl;
            } 
            else if ( disc = 0 ) {
                x1 = ( -b + sqrt(disc) ) / ( 2 * a );
                cout << "There is root of multiplicity 2" << endl;
                cout << "x = " << x1 << endl;
            }
            else {
                cout << "There are no real roots" << endl;
            }
            return 0;
    }
};
