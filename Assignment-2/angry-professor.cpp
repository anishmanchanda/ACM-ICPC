#include <iostream>
#include <string>
using namespace std;
string angryProfessor(int k,int n,int a[]);

int main(){
    int t,n,k;
    cin>>t;
    string ans[t];
    for(int i=0;i<t;i++){
        cin>>n>>k;
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        ans[i]=angryProfessor(k,n,a);
    }
    for(int i=0;i<t;i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}

string angryProfessor(int k,int n,int a[]){
    int onTime=0;
    for(int i=0;i<n;i++){
        if(a[i]<=0){
            onTime+=1;
        }
    }
    if(onTime>=k){
        return "NO";
    }
    else{
        return "YES";
    }
}
