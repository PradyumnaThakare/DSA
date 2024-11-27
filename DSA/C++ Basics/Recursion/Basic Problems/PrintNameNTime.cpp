#include<bits/stdc++.h>
using namespace std;
void printName(string name,int n){
  if(n<1){
    return;
  }
  cout<<name<<endl;
  printName(name,n-1);
}
int main(){
   int n;
   string name;
   cin>>n>>name;
   printName(name,n);
}