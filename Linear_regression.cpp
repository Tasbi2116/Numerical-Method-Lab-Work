#include<iostream>
#define N 50
using namespace std;
int main(){
   int n, i;
   float x[N], y[N], sum_x=0, sum_x2=0, sum_y=0, sum_xy=0, a, b, y_avg;
   float y_value,sr, r, sum_for_st, sum_for_sr;

   /* Input */
   cout<<"Please enter the number of data points..";
   cin>>n;

   cout<<"Enter data:"<< endl;

   for(i=1;i<=n;i++){
      cout<<"x["<< i <<"] = ";
      cin>>x[i];
      cout<<"y["<< i <<"] = ";
      cin>>y[i];
   }

   /* Calculating Required Sum */
   for(i=1;i<=n;i++){
      sum_x = sum_x + x[i];
      sum_x2 = sum_x2 + x[i]*x[i];
      sum_y = sum_y + y[i];
      sum_xy = sum_xy + x[i]*y[i];
   }
   
   /* Calculating a and b */
   b = (n*sum_xy-sum_x*sum_y)/(n*sum_x2-sum_x*sum_x);
   a = (sum_y - b*sum_x)/n;

   y_avg = sum_y/n; // calculating average

   /*Calculating sr and st and r*/
   for (int i=1; i<=n; i++)
   {
      sum_for_st = sum_for_st + ((y[i] - y_avg) * (y[i] - y_avg));
      y_value = a + b*x[i];
      sum_for_sr = sum_for_sr + ((y[i] - y_value) * (y[i] - y_value));
   }

   r = (sum_for_st - sum_for_sr)/ sum_for_st;  // calculating r
   

   /* Displaying value of a and b */
   cout << endl;
   cout<<"Calculated value of st is "<< sum_for_st<<endl;
   cout << endl;
   cout<<"Calculated value of sr is "<< sum_for_sr<<endl;
   cout << endl;
   cout<<"Calculated value of r is "<< r<<endl;
   cout << endl;
   cout<<"Calculated value of a is = "<< a << " and b is = "<< b << endl;
   cout << endl;
   cout<<"Equation of best fit line is: y = "<< a <<" + "<< b<<"x";
   cout << endl;
   return(0);
}