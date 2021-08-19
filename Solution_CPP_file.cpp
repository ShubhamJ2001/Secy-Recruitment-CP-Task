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



int main(){


ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

string s;
cin >> s;

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



