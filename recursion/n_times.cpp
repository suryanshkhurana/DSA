#include<bits/stdc++.h>
using namespace std;

void func(int i,int n){
    if(i>n) return;
    cout<<i<<" ";
    func(i+1,n);

}

int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    func(1,n);
}