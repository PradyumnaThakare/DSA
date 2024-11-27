#include<bits/stdc++.h>
using namespace std;

bool palin(string str,int s,int e){
    while(s>=e/2){
       return true;
    }
    if(str[s]!=str[e])
     return false;
  
    return palin(str,s+1,e-1); 
}
int main(){
  string str;
  cin>>str;
  if(palin(str,0,str.length()-1)){
    cout<<"True"<<endl;
  }else{
    cout<<"False"<<endl;
  }
}