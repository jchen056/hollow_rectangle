

#include <iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    //print the first line 
    for(int y=0;y<x;y++){
            cout<<"* "; }
    cout<<"\n";
    for(int i=1;i<x;i++){
        for(int j=0;j<2*x-1-i;j++){
            if(i==j ||j==2*x-2-i){
                cout<<"*";}
            else{
                cout<<" ";} 
         }
        cout<<"\n";}
        

    return 0;
}
