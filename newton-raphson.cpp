#include<iostream>
#include<math.h>
using namespace std;
float func(float x)
{
    return x*x - 3*x + 2;
}
float dfunc(float x)
{
    return 2*x - 3;
}
int main()
{
    //x2-3x+2
    int i = 0, num;
    float x,f, f0, error, ierror;
    cin>>num>>x;
    cout<<"First approximation, x0 = "<<x<<endl;
    for(i = 0; i < num; i++)
    {
        if(func(x) == 0)
        {
            break;
        }
        f = func(x);
        f0 = dfunc(x);
        x = x - (f/f0);
        //cout<<"f = "<<f<<endl;
        //cout<<"f0 = "<<f0<<endl;
        cout<<"For iteration no. "<<i+1<<endl;
        cout<<"x"<<i+1<<" = "<<x<<endl;
        cout<<endl;
    }
    cout<<"Root is "<<x<<endl;
}