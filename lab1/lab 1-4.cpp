#include<iostream>
using namespace std;
int main()
{
int i, n, fact=1;
cout<<"Enter the any no. : ";
cin>>n;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
cout<<"Factorial: "<<fact;
return 0;
}
