#include <iostream>
#include <string>
using namespace std;

long long repeatedString(string s,long long  n){
    long long  counta=0;
    long long length;
    length=s.size();
    string spart="";

    for(int i=0;i<length;i++){
        if(s[i]=='a'){
            counta+=1;
        }
    }
    long long div=n/length;
    counta=div*counta;
    long long rem=n%length;
    for(int i=0;i<rem;i++){
        if(s[i]=='a'){
            counta+=1;
        }
    }
    return counta;
}
int main(){
    string s;
    long long n;
    //cout<<"enter s: ";
    cin>>s;
    //cout<<"enter n: ";
    cin>>n;

    cout<<repeatedString(s,n);
    return 0;
}
