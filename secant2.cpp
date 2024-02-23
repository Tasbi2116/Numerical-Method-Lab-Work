
// C++ Program to find root of an
// equations using secant method
#include <bits/stdc++.h>
using namespace std;
// function takes value of x and returns f(x)

float f(float x, int p)
{
    // we are taking equation as x^3+x-1
    float a,b,c,d;
    if(x == 3)
    {
        cout << "enter the co-efficient of x^3 =";
        cin >> a;
        cout << "enter the co-efficient of x^2 =";
        cin >> b;
        cout << "enter the co-efficient of x =";
        cin >> c;
        cout << "enter the co-efficient of x^0 or constant =";
        cin >> d;

        float f = (a*pow(x, 3)) + (b* pow(x,2)) +(c*x) +d;

    }
    if(x == 2)
    {
        cout << "enter the co-efficient of x^2 =";
        cin >> a;
        cout << "enter the co-efficient of x =";
        cin >> b;
        cout << "enter the co-efficient of constant =";
        cin >> c;
        float f = (a* pow(x,2)) + (b* x) + c;
        return f;
    }
    return f ;
}
 
void secant(float x1, float x2, float E, int p)
{
    float n = 0, xm, x0, c;
    if (f(x1,p) * f(x2,p) < 0) {
        do {
            
            x0 = (x1 * f(x2,p) - x2 * f(x1,p)) / (f(x2,p) - f(x1,p));
 
            
            c = f(x1,p) * f(x0,p);
 
            
            x1 = x2;
            x2 = x0;
 
            // update number of iteration
            n++;
 
            // if x0 is the root of equation then break the loop
            if (c == 0)
                break;
            xm = (x1 * f(x2,p) - x2 * f(x1,p)) / (f(x2,p) - f(x1,p));
        } while (fabs(xm - x0) >= E); // repeat the loop
                                // until the convergence
 
        cout << "Root of the given equation=" << x0 << endl;
        cout << "No. of iterations = " << n << endl;
    } else
        cout << "Can not find a root in the given interval";
}
 
// Driver code
int main()
{
    // initializing the values
    int p;
    cout << "Enter the power of the equation" <<endl;
    cin >> p;
    float x1 = 0, x2 = 1,E;
    cout << "Enter the desire error =";
    cin >> E;

    secant(x1, x2, E);
    return 0;
}