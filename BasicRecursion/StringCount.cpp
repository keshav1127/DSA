#include<iostream>
using namespace std;


int StrCount(const string& s,char key){
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[tolower(s[i])-97]++;
    }
    key=tolower(key);
    return hash[(key)-97];
   
}
// this is to count any symbol 
int StrCount2(const string& s,char key){
    int hash[256]={0};                  // can use map<char,int> mpp or mostly us unordered_map<dt,dt>
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    
    return hash[key];
   
}

int main(){
    string s;
    cout<<"enter str : ";
    cin>>s;
    cout<<"\n enter key : ";
    char key;
    cin>>key;
    cout<<"count is : "<<StrCount2(s,key);
}