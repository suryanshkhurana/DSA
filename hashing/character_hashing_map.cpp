#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter your number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;

    }
    // int q;
    // cout<<"enter your number of queries: ";
    // cin>>q;
    // while(q--){
    //     int number;
    //     cin>>number;
    //     cout<<mpp[number]<<endl;
    // }
}