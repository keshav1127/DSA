#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void display(int a[],int n){
    for(int i=0;i<n;i++)
    cout<<a[i]<<"  ";
    cout<<endl;
}




void selection(int a[],int n){
    
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[min]>a[j])
            min=j;

           
        }

        if(min!=i)
        swap(a[min],a[i]);
    }
}


int main(){
    int a[]={12,12,2,1,4,7,6};
    int n=7;
    display(a,n);
    selection(a,7);
    cout<<"\n after \n";
    display(a,n);


}