#include<iostream>
using namespace std;
int saveThePrisoner(int n,int m,int s);
int main(){
    int t;//no. of test cases
    cin>>t;
    long int ans[t];
    for(int i=0;i<t;i++){
        long int n,m,s;//no. of prisoners, candy, starting prisoner
        cin>>n>>m>>s;
        ans[i]=saveThePrisoner(n,m,s);
    }
    for(int i=0;i<t;i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}

int saveThePrisoner(int n,int m,int s){
    long int unlucky;
    unlucky=(s+m-1)%n;
    if (unlucky==0){
        return n;
    }
    else{
        return unlucky;
    }
}