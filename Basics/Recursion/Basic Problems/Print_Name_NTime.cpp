#include<iostream>
using namespace std;
void printName(int n){
    if(n<=0){
        return;
    }
    cout<<"Pradyumna"<<endl;
    printName(n-1);
}
void printName1(int n,int i){
    if(i>n){
        return;
    }
    cout<<"J"<<endl;
    printName1(n,++i);
}
int main(){
    int n;
    cin>>n;
    printName1(n,1);
}