#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

typedef long long int ll;
#define ld long double
#define pb push_back

using namespace std;

const int MOD = 1e9+7;
const ld PI = acos(-1);
const ld EPS = 1e-9;
const ll INF = 1e18;

int ans(string s){


ll i,l;
l = s.size();
ll t,t1,t2,m = -1,prev;
vector < char > ss(s.begin(),s.end());
vector < char > c(s.begin(),s.end());
for(i = 0 ; i < l ; i++){

t1 = c[i] - 1;
t2 = c[i] + 1;

if(t1 == c[i-1] && t2 == c[i+1]){
t = i;


for(int j = m+1 ; j < i ; j++){

    ss[j] = c[t-1];
    t--;
}
prev = i;
m = prev;
}
vector < char > ss1 = ss;
}
for(int x = 0 ; x < l ; x++){
    cout << ss[x];
}
return 0;
}






int main(){


ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

vector < string > s;

s.push_back("uiyabcfg");
s.push_back("pliabcxldefz");
s.push_back("abcxyz");
s.push_back(s[0] + s[1]);
s.push_back(s[0] + s[2]);

reverse(s[0].begin(),s[0].end());
s.push_back(s[0]);
s.push_back(s[3] + s[0]);
reverse(s[6].begin(),s[6].end());
s.push_back(s[6] + s[1]);

for(int j = 7 ; j < 25 ; j++){
    s.push_back(s[j] + s[j-4]);
}

for(int i = 0 ; i < 24 ; i++){

    cout << "INPUT :" << s[i] << " " << "OUTPUT :" ;
     ans(s[i]);
    cout << endl;
}



return 0;
}



