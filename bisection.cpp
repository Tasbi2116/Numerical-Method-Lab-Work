#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    //2x3-8x2+2x+12
    float x1,x2,x0,num,error,temp;
    cin>>x1>>x2>>num;
    
    for(int i = 0; i < num; i++)
    {
        cout<<"\nFor iteration "<<i+1<<":\n";
    float f1 = 2*(pow(x1,3))-(8*(pow(x1,2)))+2*x1+12;
    float f2 = 2*(pow(x2,3))-(8*(pow(x2,2)))+2*x2+12;
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
            error = ((x0 - temp) / x0) * 100;
            cout<<"error = "<<error<<"%\n";
        }
        temp = x0;
        
        float f0 = 2*(pow(x0,3))-(8*(pow(x0,2)))+2*x0+12;
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
    return 0;
}