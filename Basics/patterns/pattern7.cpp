#include<iostream>
using namespace std;
void version1(int n){
     int k=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
            k=j+1;
        }
        for(;k<=n+(i-1);k++){
          cout<<"*";  
        }
        cout<<endl;
        k=0;
    }

}
void version2(int n){
     int k=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
            k=j;
        }
        for(;k<=n-k;k++){
          cout<<"*";  
        }
        cout<<endl;
        k=0;
    }

}
int main(){
    int n;
    cin>>n;
    version2(n);
   
}