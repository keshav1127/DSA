#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void display(int a[],int n){
    for(int i=0;i<n;i++)
    cout<<a[i]<<"  ";
    cout<<endl;
}




void Bubble(int a[],int n){
    
    for(int i=n-1;i>=1;i--){
        
        for(int j=0;j<i;j++){
            if(a[j]> a[j+1]){
                swap(a[j],a[j+1]);
            } 
        } 
    }
}


void insertion(int a[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            swap(a[j],a[j-1]);
            j--;
        }
    }
}


int main(){
    int a[]={12,12,2,1,4,7,6};
    int n=7;
    display(a,n);
    insertion(a,7);
    cout<<"\n after \n";
    display(a,n);


}