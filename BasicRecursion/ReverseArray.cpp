// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse(int a[],int st,int end){
    if(st>=end) return;
    swap(a[st],a[end]);
    
    reverse(a,st+1,end-1);
}

void display(int a[],int n){
    for(int i =0;i<n;i++){
        cout<<a[i]<< "  ";
    }
    cout<<endl;
}



int main() {
    // Write C++ code here
    int a[]={1,2,3,4,5};
    int n=5;
    display(a,n);
    reverse(a,0,n-1);
    display(a,n);

    return 0;
}