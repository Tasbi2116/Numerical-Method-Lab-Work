#include<iostream>
 #include<bits/stdc++.h>
using namespace std;

double f(double x){
    return x*x*x-.165*x*x+.0003993;
}


int main(){
    double x1,x2, x0,error,error2;
    cout<<"Enter the initial value 0f x1 and x2:";
    cin>>x0>>x1;

    int it;
    cout<<"\nEnter the number of iteration :";
    cin>>it;
    cin>>error2;

    for(int i=1; i<=it; i++){
        x2=abs(x1-((x1-x0)*f(x1)/(f(x1)-f(x0))));
        cout<<"\nIteration "<<i<<": "<<x2<<endl;
        x0=x1;
        x1=x2;
        error=((x1-x0)/x1)*100;
        error=fabs(error);
        cout<<"Error "<<error;
        if(error<error2){
        break;
        }

}
}