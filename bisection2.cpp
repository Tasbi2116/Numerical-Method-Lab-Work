#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    //x2-3
    float x1,x2,x0,num,error,temp,ioerror;
    int i = 0;
    cin>>x1>>x2>>num>>ioerror;
    for(int i = 0; i < num; i++)
    {
        cout<<"\nFor iteration "<<i+1<<":\n";
    float f1 = (pow(x1,2))-3;
    float f2 = (pow(x2,2))-3;
    cout<<"f1 = "<<f1<<"\nf2 = "<<f2<<"\n";
    if((f1*f2) > 0)
    {
        cout<<"Do not bracket any root\n";
        return 0;
    }
    else
    {
        cout<<"x1 = "<<x1<<"\n"<<"x2 = "<<x2<<"\n";
        x0 = (x1+x2)/2;
        cout<<"x0 = "<<x0<<"\n";
        if(i > 0)
        {
            error = abs((x0 - temp) / x0) * 100;
            cout<<"error = "<<error<<"%\n";
            if(ioerror > error)
            {
                break;
            }
        }
        temp = x0;
        
        float f0 = (pow(x0,2))-3;
        if((f1*f0) < 0)
        {
            x2 = x0;
        }
        else
        {
            x1 = x0;
            f1 = f0;
        }
    }
    }
    cout<<"\nroot is "<<x0<<"\n";
    return 0;
}
