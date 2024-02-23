#include<bits/stdc++.h>
using namespace std;
int main()
{
    int numofX,numofY,i,j;
    double x[1000],y[1000],sumX=0,sumY=0,sumsqX=0,sumsqY=0,sumXY=0;
    cin>>numofX>>numofY;
    for(i=0;i<numofX;i++)
    {
        cin>>x[i];
    }
    for(j=0;j<numofY;j++)
    {
        cin>>y[j];
    }
    for(i=0;i<numofX;i++)
    {
        sumX+=x[i];
        sumsqX+=(x[i]*x[i]);
    }
    for(i=0;i<numofY;i++)
    {
        sumY+=y[i];
        sumsqY+=(y[i]*y[i]);
    }
    for(i=0;i<numofX;i++)
    {
        sumXY+=(x[i]*y[i]);
    }
    float a1,a0;
    a1=((numofX*sumXY)-(sumX*sumY))/((numofX*sumsqX)-(sumX*sumX));
    a0=(sumY/numofY)-(a1*(sumX/numofX));
    cout<<a1<<" "<<a0<<endl;
}