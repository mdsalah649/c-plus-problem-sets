/*Write a program in c++ to find a perfect number*/
// A perfect number equals the sum of its proper divisors (e.g. 6 = 1 + 2 + 3).
#include<iostream>
using namespace std;
void checker(int n){
    int sum=0;
    if(n<=0)
    {
        cout<<"Not a valid candidate for perfect Number"<<endl;
        return;
    }
    for(int i=1;i<n;i++)
    {    
        if(n%i==0)
        {
            sum=sum+i;
        }
        
    }
    if(sum==n)
    {
        cout<<"This is a perfect Number"<<endl;
    }
    else{
        cout<<"Not a perfect Number"<<endl;
    }
}
int main(){
    int a;
    cout<<"Enter a Number:"<<endl;
    cin>>a;
    checker(a);
}