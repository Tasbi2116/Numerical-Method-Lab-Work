#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    //x2-3x+2 = 0
    //2x-3
    int highpow,power[100], arr[100], diff[100];
    cin>>highpow;
    for(int i = highpow; i >= 0; i--)
    {
        power[i] = i;
        cin>>arr[i];
    }
    for(int j = highpow; j >= 0; j--)
    {
        if(power[j] != 0)
        {
            diff[j] = power[j]*arr[j];
        }
    }
    for(int j = highpow; j >= 0; j--)
    {
        if(power[j] != 0)
        {
            if( diff[j] > 0 && j != highpow)
            {
                cout<<"+";
            }
            cout<<diff[j];
            power[j] -= 1;
            if(power[j] != 0)
            cout<<"x"<<power[j];
        }
    }
    cout<<endl;
    int npow = highpow-1;
    int x, sum = 0;
    cin>>x;
    for(int i = highpow; i >= 0; i--)
    {
        if(npow<0)
        {
            break;
        }
        //cout<<npow<<endl<<diff[i]<<endl;
        sum += (diff[i]*pow(x,npow));
        npow -= 1;
    }
    cout<<"sum = "<<sum;
}