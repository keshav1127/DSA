#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int count(int a[],int key){
    unordered_map<int,int> mpp;
    for (int i=0;i<5;i++){
       mpp[a[i]]++;
    }
   

    // to iterate in the map 
    cout<<endl;
    for(auto it : mpp){         // auto automatically provides the data type
        cout<<it.first<<" -> "<<it.second<<endl;
    }

    return mpp[key];

}

int main(){
    int a[]={12,4,2,1,1};
    cout<<"the ele count is :"<<count(a,2);
}