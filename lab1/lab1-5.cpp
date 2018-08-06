#include<iostream>
 using namespace std;
 int main()
  {
   int i,count=0;
   char ch[20];
   cout<<"Enter any string: ";
   cin>>ch;
   for(i=0;ch[i]!='\0';i++)
   {
   count++;
   }
   cout<<"String Length: "<<count;
  }
