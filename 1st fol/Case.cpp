#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter ch :";
    cin>>ch;
    if(ch >= 'a' && ch <= 'z'){
        cout<<"This is lower case \n";
    }
    else {
     if(ch >= 'A' && ch <= 'Z'){
        cout<<"This is Upper case\n";
    }
    else 
    cout<<"It is no \n";}
}