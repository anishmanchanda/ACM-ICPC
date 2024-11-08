#include <iostream>
using namespace std;
int solve(int a,int b){
    return a+b;
}

int main(){
    int n1,n2;
    cout<<"enter num1: ";
    cin>>n1;
    cout<<"enter num2: ";
    cin>>n2;
    cout<<solve(n1,n2)<<endl;
    return 0;
}
