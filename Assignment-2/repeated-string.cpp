#include <iostream>
#include <string>
using namespace std;

/*
INEFFICIENT APPROACH

int repeatedString(string s,long long int n){
    //function must return the no. of a in formatted s
    int length;
    length=s.size();
    string copy=s;
    if(n>length){
        int rem=n%length;
        int div=n/length;
        int count=0;
        while(count<div-1){
            s.append(copy);
            count+=1;
        }
        s.append(copy,0,rem);
        //cout<<s<<endl;
        int counta=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
                counta+=1;
            }
        }
        //cout<<counta<<endl;
        return counta;
    }
    else{
        //cout<<s<<endl;
        return s.size();
    }
}
*/

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
