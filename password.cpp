#include<iostream>
using namespace std;
int main(){
  int pass=12987;
  int input;
  cout<<"Enter the password"<<endl;
  cin>>input;
  if(input==pass){
    cout<<"Acess the password"<<endl;
  }
  else{
    cout<<"wrong  the password"<<endl;
  }
  return 0;
  }
