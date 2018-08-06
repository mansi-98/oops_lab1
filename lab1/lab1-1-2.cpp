#include<iostream>
using namespace std;
int main()
{
int n,a=0;
cout<<"Enter any num : ";
cin>>n;
if(n<0)
{
n=n * -1;
}
else if(n==0)
{
n=1;
}
while(n>0)
{
n=n/10;
a++;
}
cout<<"\n no. of digits in given number is: "<<a;
}
