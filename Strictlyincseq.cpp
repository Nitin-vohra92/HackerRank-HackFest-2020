#include <bits/stdc++.h>
using namespace std;



bool checkCornerCase(vector<int> v){
    int n=v.size();
    set<int> s;
    
     for(int i=0;i<n;i++){     
       s.insert(v[i]);
     }
    
     if(s.size()==v.size()){
        return true;
    }
    else{
        return false;
    }
}

int checkOdd(vector<int> v){
    if(v.size()%2==0){
        return false;
    }
    else{
        return true;
    }
}

string whoIsTheWinner(vector<int> v) {
    // WRITE DOWN YOUR CODE HERE
    
    int n=v.size();
    stable_sort(v.begin(),v.end());
    string first = "First";
    string second = "Second";
    if(checkCornerCase(v)){
        return first;
    }
    else{
        if(checkOdd(v)){
            return first;
        }
        else{
            return second;
        }
    }

}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }

        cout<<whoIsTheWinner(v)<<endl;
    }

    
}