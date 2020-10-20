#include <bits/stdc++.h>
using namespace std;



int sumOdd(vector<int> v){
    int cnt=0;
    int n = v.size();
        for(int i=0;i<n;i++){
            if(i%2!=0){
            cnt+=v[i];
        }
    }
    return cnt;
}

int sumEven(vector<int> v){
        int cnt=0;
        int n = v.size();
        for(int i=0;i<n;i++){
            if(i%2==0){
            cnt+=v[i];
        }
    }
    return cnt;
}

int maximumStones(vector<int> v) {
     int n=v.size();
    
    int sO = sumOdd(v);
    int sE = sumEven(v);
        
    int ans = min(sO,sE);
    return (ans)*2;
}


int main(){
    int n;
    cin>>n;

    vector<int> v;
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<maximumStones(v);
}