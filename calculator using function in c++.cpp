#include<iostream>

using namespace std;

int sum(int a , int b)
{
    return a+b;
}

int sub(int a , int b)
{
    return a-b;
}
int mul(int a , int b)
{
    return a*b;

}
int division(int a , int b)
{
    return a/b;
}




int main()
{
    int a,b,c;
    cin>>a>>b;
    cout<<"ENTER YOUR CHOICEE";
    cin>>c;
   if(c==1)
   {
       int ans=sum(a,b);
       cout<<ans;
   }
   if(c==2)
   {
       int ans=sub(a,b);
       cout<<ans;
   }
   if(c==3)
   {
       int ans=mul(a,b);
       cout<<ans;
   }
   if(c==4)
   {
       int ans=division(a,b);
       cout<<ans;
   }
    return 0;
}