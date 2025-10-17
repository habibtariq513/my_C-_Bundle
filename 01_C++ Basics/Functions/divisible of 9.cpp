/* write a program that shows all integers b/w 100 and 200 which are divisible by 9 do it though functions */
#include<iostream>
using namespace std;
int integers();
int main()
{
    int e=200,count=0;
    int sum=0;
    integers();
    cout<<endl;

}
int integers()
{
    int e=300,count=0;
    int sum=0;
    for(int s=100;s<=e;s++)
    {
        if(s%9==0)
        {
            cout<<s<<endl;
            sum=sum+s;
            count++;
        }
    }
    cout<<"sum= "<<sum;
    cout<<endl;
    cout<<"total values are = "<<count<<endl;


}
