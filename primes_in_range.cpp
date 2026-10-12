//Write a program in c++ to find a prime Number within a range
//A prime number is a whole number greater than 1 that has only two factors: 1 and itself
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"First and Last Numbers for the Range"<<endl;
    cin>>num1>>num2;
    for(int n=num1;n<=num2;n++)
    {
        bool flag=true;
        
         if(n<=1){
                flag=false;
            }
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                flag=false;
                break;
            }
        }
        if(flag==true)
        {
            cout<<n<<" ";
        }
    }
    return 0;
}

