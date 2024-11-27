#include<bits/stdc++.h>
using namespace std;

 void rev(int n){
  int num=0;
  while(n>0){
    num=num*10+(n%10);
    n=n/10;
  }
  cout<<num;
}

int main(){
    int n;
    cin>>n;
    rev(n);
}
