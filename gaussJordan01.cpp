#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a[3][4], x1, x2, x3, m1, m2, m3;
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            cin>>a[i][j];
        }
    }
    x1 = a[0][0];
    for(j = 0; j < 4; j++)
    {
        a[0][j] /= x1;
    }
    m1 = a[1][0];
    float temp;
    for(j = 0; j < 4; j++)
    {
        temp = a[0][j];
        a[1][j] -= (temp*m1);
    }
    m2 = a[2][0];
    for(j = 0; j < 4; j++)
    {
        temp = a[0][j];
        a[2][j] -= (temp*m2);
    }
    x2 = a[1][1];
    for(j = 0; j < 4; j++)
    {
        a[1][j] /= x2;
    }
    m1 = a[0][1];
    m2 = a[2][1];
    for(j = 0; j < 4; j++)
    {
        temp = a[1][j];
        a[0][j] -= (temp*m1);
    }
    for(j = 0; j < 4; j++)
    {
        temp = a[1][j];
        a[2][j] -= (temp*m2);
    }
    x3 = a[2][2];
    for(j = 0; j < 4; j++)
    {
        a[2][j] /= x3;
    }
    m1 = a[0][2];
    m2 = a[1][2];
    for(j = 0; j < 4; j++)
    {
        temp = a[2][j];
        a[0][j] -= (temp*m1);
        a[1][j] -= (temp*m2);
    }
    for(i = 0; i < 3; i++)
    {
        cout<<a[i][3]<<" ";
    }
}