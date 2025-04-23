#include<iostream>
using namespace std; 

int main(int argc, char const *argv[])
{
    int n,flag=0;
    cout<<"enter value : ";
    cin>>n;
    for (int i = 2; i < n/2; i++)
    {
        if (n%i==0)
        {
            flag=1;
            cout<<"NO is not prime \n";
            break;
        }
        
    }
    if(flag==0)
    cout<<"no is Prime\n\n";
    
    return 0;
}
