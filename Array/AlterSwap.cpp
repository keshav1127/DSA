// 1. alter swap
//2. print unique

#include <iostream>

using namespace std;
void swap(int &x,int &y){
    int temp = x;
    x=y;
    y=temp;
}


int unique(int a[],int size ){
    int result=0;
    for(int i =0;i<size;i++){
        result = result ^ a[i];     // yaha par zor gate use liya hai a^a=0 and 0^a=a 
    }
    return result;
}

void display(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}

int TwoCheck(int a[],int size){
    int sam;
    for (int i = 0; i < size; i++)
    {
        
        for(int j=i+1;j<size;j++){
            if(a[i]==a[j]){
                return a[i];
            }
        }
    }
    
}


int main() {
    
    int a[5]={1,2,7,8,5};
    //int b[7]={1,1,3,4,3,4,2};
    int b[7]={0};
    int c[7]={1,3,3,4,3,1,1};
    int d[7]={1,2,3,4,5,6,4};

    //cout<<"Unique is :"<<unique(b,7)<<endl;;
   // cout<<"Unique is :"<<unique(c,7)<<endl;;




    display(d,7);
    cout<<"repeated no is :"<<TwoCheck(d,7);
   
    // cout << "\nafter swap \n";

    // for(int i=0;i<4;i=i+2){
    //     swap(a[i],a[i+1]);
    // }

   
    

    cout<<endl;
        
    return 0;
}
