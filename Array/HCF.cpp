#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int hcf(int a, int b){
    
    int max=1;
    for(int i=min(a,b);i>0;i--){
        if(a%i==0 && b%i==0){
        
                max=i;
                break;
            
        }
    }
    return max;
}

// Euclidean Algorithm tc is O(log(min(a,b)))

int opti(int a , int b){
    while(b!=0){
        int temp =b;
        b=a%b;
        a=temp;
    }
    return a;
}

int main(){
cout<<"The hcf will be : "<<hcf(20,40)<<endl;
cout<<"The hcf will be : "<<opti(12,40)<<endl;
cout<<"HELLnjklhlO\n \n";

    return 0;
}