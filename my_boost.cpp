#include <iostream>
#include <boost\math\distributions.hpp>

using namespace std;

using boost::math::students_t;
using boost::math::chi_squared;
using boost::math::fisher_f;

int main()
{
    cout << "Hello" << endl;

    double P = 0.95;
    double r = 21;

    students_t my_stud(r);
    double t = quantile(my_stud, P);

    cout << "Student:" << endl;
    cout << "P = " << P << " " << "r = " << r << " " << "t = " << t << endl;
    
    chi_squared my_chi(r);
    double xi = quantile(my_chi, 1 - P);
    cout << "Chi-squared:" << endl;
    cout << "P = " << P << " " << "r = " << r << " " << "xi = " << xi << endl;

    double r1 = 7;
    double r2 = 13;
    fisher_f my_fisher(r1, r2);
    double fish = quantile(my_fisher, P);
    cout << "Fisher:" << endl;
    cout << "P = " << P << " " << "r1 = " << r1 << " " << "r2 = " << r2;
    cout << " Fish = " << fish << endl;
}