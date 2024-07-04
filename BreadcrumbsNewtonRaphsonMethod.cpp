#Monir-cse04 
#here is the c++ program of newton raphson method 
#include<bits/stdc++.h>
#define e 0.001
#define f(x) pow(x,3)- 6*x*x-9*x-1
#define df(x) 3*x*x-12*x-9
using namespace std;
int main()
{
    float x0,x1,f0,f1,df0;
    int i=0;
    cout<<"enter the value of x0 : ";
    cin>>x0;
    do{
        f0=f(x0);
        df0=df(x0);
        x1=x0-(f0/df0);
        f1=f(x1);
        x0=x1;
        i++;
        cout<<"no of iteration= "<<i<<" ";
        cout<<"root = "<<x1<<" ";
        cout<<"value of the function :"<<f1<<endl;
    } while(fabs(f1)>e);
  return 0;
}
