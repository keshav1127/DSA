#include<iostream>

using namespace std;

void fun(int n){
    if(n==0) return;
   
    cout<<n<<endl;
    fun(n-1);
    
}

int main(){

fun(10);
    return 0;
}