#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    //x2-4x-10=0
    //x2 -3
    float x1,x2,x0,num,error,temp;
    float EstimatedError;
    int i = 0;
    cout << "Enter the value of x1,x2 and Number of iteration :\n";
    cin>>x1>>x2>>num;
    cout << "Enter the value of desired Error = ";
    cin >> EstimatedError;
    for(int i = 0; i < num; i++)
    {
    cout<<"\nFor iteration "<<i+1<<":\n";
    float f1 = (pow(x1,2))- 3;
    float f2 = (pow(x2,2))- 3;
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
        if(i > 0)
            {

            error = ((x0 - temp) / x0) * 100;
            if(error <= EstimatedError)
            {
                break;
            }
            cout<<"Error = "<<error<<"%\n";
        temp = x0;
        
        float f0 = (pow(x0,2))- 3;;
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
    }
    return 0;
}
