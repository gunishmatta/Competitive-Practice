#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Stack{
private:
  std::vector<T> v;
public:
  void push(T data)
  {
    v.push_back(data);
  }
  void pop()
  {
    v.pop_back();
  }
  bool isEmpty()
  {
    return v.size()==0;
  }
  T top()
  {
    return v[v.size()-1];
  }
};


int main() {
Stack<int> s;
s.push(1);
s.push(2);
s.push(3);
Stack<char> s2;
while(!s.isEmpty())
{
  cout<<s.top()<<" ";
  s.pop();
}

for (int i = 65; i < 85; i++) {
s2.push(i);
}
while(!s2.isEmpty())
{
  cout<<s2.top()<<" ";
  s2.pop();
}

  return 0;
}
