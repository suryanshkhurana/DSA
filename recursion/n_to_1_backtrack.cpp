#include<bits/stdc++.h>
using namespace std;

void func(int i,int n){
    if(i>n) return;
    func(i+1,n);
    cout<<i<<" ";
}
int  main(){
    int n;
    cout<<"enter your number: ";
    cin>>n;
    func(1,n);
}