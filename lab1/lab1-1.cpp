#include<iostream>
using namespace std;
int main()
{
int i,j,r=1,k=1;
cout<<"enter i and j";
cin>>i>>j;
while(r<=i)
{
r=k*j;
k++;
}
cout<<"the number is:"<<r<<endl;
return 0;
}
