
#include <iostream>
using namespace std;

void triangle(int a){
    for (int i=1;i<=a;i++){
        for(int j=0;j<i;j++)
        cout<<"* ";
    cout<<endl;}
}

void triangle_down(int a){
    for (int i=a;i>0;i--){
        for(int j=0;j<i;j++)
            cout<<"* ";
        cout<<endl;
    }
}

void triangle1(int a){
    for (int i=1;i<=a;i++){
        for(int j=a-i;j>0;j--)
            cout<<"  ";
        for(int k=a-i+1;k<=a;k++)
                cout<<"* ";
        cout<<endl;
    }
}
int main()
{
    int a;
    cin>>a;
    
    triangle(a);
    cout<<endl;
    triangle_down(a);
    cout<<endl;
    triangle1(a);
    return 0;
}

