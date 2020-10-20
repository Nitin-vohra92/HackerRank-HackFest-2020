#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define INT_MAXX 9e18
#define arr_size 200005
using namespace std;

bool checkPossible(map<int,set<pair<int,int>>>& red, map<int,set<pair<int,int>>>&blue, map<int,set<pair<int,int>>>& green, int qr,int qb,int qg){

    int r=0,b=0,g=0;
    //this will iterate towards the map of set and check
    //whether there is possible value where green and blue
    //are small
    for(auto i:red[qr]){
        if(i.first<=qb and i.second<=qg){
            r++;
            break;
        }
    }
    //this will iterate towards the map of set and check
    //whether there is possible value where green and red
    //are small
    for(auto i:blue[qb]){
        if(i.first<=qr and i.second<=qg){
            b++;
            break;
        }
    }
    //this will iterate towards the map of set and check
    //whether there is possible value where red and blue
    //are small
    for(auto i:green[qg]){
        if(i.first<=qr and i.second<=qb){
            g++;
            break;
        }
    }
    //if there is a combination where all the above conditions are
    //satisfied then we can say that "YES" there will
    //be a possible combination
    if(r and b and g){
        return true;
    }
    return false;
}

 
int main(){
 
  ios_base::sync_with_stdio(false);
 cin.tie(NULL); 
 
 
   int n,q;
    cin>>n>>q;

   map<int,set<pair<int,int>>>red;
   map<int,set<pair<int,int>>>blue;
   map<int,set<pair<int,int>>>green;

   for(int i=0;i<n;i++){
       int r,b,g;
       cin>>r>>b>>g;

       red[r].insert({b,g});
       blue[b].insert({r,g});
       green[g].insert({r,b});
   }

   for(int i=0;i<q;i++){
       int qr,qb,qg;
       cin>>qr>>qb>>qg;
       bool ans = checkPossible(red,blue,green,qr,qb,qg);
       if(ans){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
   }
 
}
 