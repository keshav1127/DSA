#include <iostream>

using namespace std;

int count(int a[],int key){
    int hash[5]={0};
    for (int i=0;i<5;i++){
        hash[a[i]]++;
    }
    return hash[key];

}

int main(){
    int a[]={1,4,2,1,1};
    cout<<"the ele count is :"<<count(a,1);
}