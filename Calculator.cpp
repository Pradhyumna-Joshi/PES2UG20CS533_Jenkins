#include<iostream>
using namespace std;


int add(int a,int b){
  return a+b;  
} 

int sub(int a,int b){
  return a-b;
}

int mul(int a,int b){
  return a*b;
}

int div_(int a,int b){
  return a/b;
}


int main(){
  
  cout<<add(5,3)<<endl;
  cout<<sub(5,3)<<endl;
  cout<<mul(5,3)<<endl;
  cout<<div_(4,2)<<endl;
  
  return 0;
}  
  
