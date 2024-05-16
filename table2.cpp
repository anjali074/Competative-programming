#include<iostream>
using namespace std;
int main(){
  int n=2;
  int i=2;
  cout<<"enter the value in n"<<endl;
  cin>>n>>i;
  while (i<=20){
    while(n<=20){
    cout<<n<<"* "<<i<<"="<<n*i<<endl;
    n++;
  
  }i++;
  n=2;
  }
   return 0;
  }