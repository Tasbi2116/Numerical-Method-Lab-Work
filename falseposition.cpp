#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    //x2-3
    float a,b,c,num,ioerror,error,temp;
    int i = 0;
    cin>>a>>b>>num>>ioerror;
    for(i = 0; i < num; i++)
    {
        cout<<"\nFor iteration "<<i+1<<":\n";
        float fa = pow(a,2)-3;
        float fb = pow(b,2)-3;
        c = ((a*fb)-(b*fa))/(fb-fa);
        float fc = pow(c,2)-3;
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"f(a) = "<<fa<<endl;
        cout<<"f(b) = "<<fb<<endl;
        cout<<"c = "<<c<<endl;
        cout<<"f(c) = "<<fc<<endl;
        if(i > 0)
        {
            error = abs((c - temp) / c) * 100;
            cout<<"error = "<<error<<"%\n";
            if(ioerror > error)
            {
                break;
            }
        }
        temp = c;
        if(fc*fa < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }
    cout<<"\nroot is "<<c<<"\n";
    return 0;
}