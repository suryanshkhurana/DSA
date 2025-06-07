#include<bits/stdc++.h>
using namespace std;

int func(char c,string s){
    int cnt=0;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]==c){
            cnt++;
        }

    }
    return cnt;

}

int main(){
    cout<<func('s',"abcdeedsssssssssg")<<endl;
}