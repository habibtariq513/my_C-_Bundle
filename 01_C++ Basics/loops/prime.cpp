#include<iostream>
using namespace std;
int prime();
int main()
{
    /*int j,i,count=0;
    j=1;
    cout<<"enter any number = ";
    cin>>i;
    while(j<=i){
        if(i%j==0){

            count++;

        }
        j++;
    }
    if(count==2)
    {
        cout<<"its a prime number";
    }
    else{cout<<"its  not a prime number";}*/

   int s,e,count=0,l=1,sum=0;
   cout<<"enter starting number = ";
   cin>>s;
   cout<<"\nenter ending number = ";
   cin>>e;
   //int prime();
   //int s,e,count=0,l=1,sum=0;
    while(s<=e)
    {
        while(l<=s)
        {
           if(s%l==0)
         {
            sum=sum+s;
            count++;
         }
         l++;
        }

        s++;
    }
   /* if(count==2)
    {
        sum=sum+s;
    }*/
    cout<<endl;
    cout<<"sum = "<<sum;

}
/*
int prime()
{
    int s,e,count=0,l=1,sum=0;
    while(s<=e)
    {
        if(s%l==0)
        {
            count++;
        }
        s++;
    }
    if(count==2)
    {
        sum=sum+s;
    }
    cout<<endl;
    cout<<"sum = "<<sum;

}*/
