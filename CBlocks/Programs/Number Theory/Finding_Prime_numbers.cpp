#include<iostream>
using namespace std;
int checkPrime(int n)
{
  if(n<2)
  return false;

  for (int i = 2; i*i <=n; i++) {
  if(n%i==0)
  {
    return false;
  }
  }
  return true;
}
int main() {
  int n;
  cin>>n;
  std::cout <<checkPrime(n)<< '\n';
  return 0;
}
