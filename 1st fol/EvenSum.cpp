#include<iostream>
using namespace std; 

int main(int argc, char const *argv[])
{
    int n=10,sum=0;
    int i=0;
    while (i<=n)
    {
        if(i%2==0)
        sum=sum+i;

        i++;
    }
    cout<<sum<<endl;
    
    return 0;
}
