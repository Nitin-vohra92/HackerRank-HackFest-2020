#include <bits/stdc++.h>
using namespace std;

int len(string s){
    int cnt=0;

    for(int i=0;s[i]!='\0';i++){
        cnt++;
    }
    return cnt;
}


bool checkallzero(string s){
    int cnt=0;
    int n = len(s);

     for(int i=0;i<n;i++){
        if(s[i]=='0'){
            cnt++;
        }
    }

    if(cnt==n){
        return true;
    }
    else{
        return false;
    }
}


int maximumPower(string s) {
    int f=0;
    int cnt=0;
    int mx_cnt=0;
   
    
   if(checkallzero(s)){
       return -1;
   }
   
   string temp = s+s;
    int n = len(temp);
    
    for(int i=0;i<n;i++){
        if(temp[i]=='0'){
            if(f==1){
                cnt++;
            }
            else{
                f=1;
                cnt=1;
            }
        }
        else{
            f=0;
        }
        mx_cnt=max(mx_cnt,cnt);
    }
    return mx_cnt;
}

int main(){
    string s;
    cin>>s;

    cout<<maximumPower(s);
}