
#include<iostream>
using namespace std;
#include<math.h>

int main(){
  int x;
  cin>>x;
  for (int a=0;a<x;a++){
      int len=pow(2,a);
      for(int col=0;col<len;col++){
        cout<<"*";
        }
    cout<<endl;}
  return 0;
    }

