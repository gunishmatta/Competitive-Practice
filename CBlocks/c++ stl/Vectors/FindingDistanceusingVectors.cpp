#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int> p1,pair<int,int> p2)
{
  int d1 = p1.first*p1.first+p1.second*p1.second;
  int d2 = p2.first*p2.first+p2.second*p2.second;
if(d1==d2)
{
  return p1.first<p2.second;
}
  return d1<d2;
}
int main() {
  vector<pair<int,int>> v;
int n;
int x;
int y;
cin>>n;
for (int i = 0; i < n; i++) {
cin>>x>>y;
v.push_back(make_pair(x,y));
}
sort(v.begin(),v.end(),compare);
for (auto a:v) {
  /* code */
cout<<a.first<<" "<<a.second<<endl;
}
  return 0;
}
