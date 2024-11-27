#include<bits/stdc++.h>
using namespace std;

 void armstrong(int n){
  int num=0;
  int n2=n;
  int cnt=int(log10(n)+1);
  while(n>0){
    num=num+pow((n%10),cnt);
    n=n/10;
  }
   if(num==n2){
     cout<<"Yes arm ";
   }else{
     cout<<"Not arm ";
   }
}


int main(){
    int n;
    cin>>n;
    armstrong(n);
}
