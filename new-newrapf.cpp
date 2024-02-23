#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int highpow, num,k,i, j;
    float x,f, f0, error, ierror;
    cin>>highpow;
    float power[100], arr[100], diff[100], sumfunc = 0, sumdiff = 0;
    for(int i = highpow; i >= 0; i--)
    {
        power[i] = i;
        cin>>arr[i];
    }
    cin>>x>>num;
    for(k = 0; k < num; k++)
    {
        for(i = highpow; i >= 0; i--)
        {
            sumfunc += (arr[i]*(pow(x,power[i])));
        }
        //cout<<"\nFunction = "<<sumfunc<<endl;
        if(sumfunc == 0)
        {
            break;
        }
        for(j = highpow; j >= 0; j--)
        {
            if(power[j] != 0)
            {
                diff[j] = power[j]*arr[j];
            }
        }
        int npow = highpow-1;
        for(i = highpow; i >= 0; i--)
        {
            if(npow<0)
            {
                break;
            }
            //cout<<npow<<endl<<diff[i]<<endl;
            sumdiff += (diff[i]*pow(x,npow));
            npow -= 1;
        }
        //cout<<"\ndiff Function = "<<sumdiff<<endl;
        x = x - (sumfunc/sumdiff);
        cout<<"For iteration no. "<<k+1<<endl;
        cout<<"x"<<k+1<<" = "<<x<<endl;
        cout<<endl;
        sumfunc = 0;
        sumdiff = 0;
    }
    cout<<"Root is = "<<x<<endl;
    
}