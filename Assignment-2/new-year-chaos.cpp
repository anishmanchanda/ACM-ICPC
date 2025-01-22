//can't pass the checks in this one, problem seems unclear and conflicting
#include <iostream>
using namespace std;
int minimumBribes(int n,int arr[]);

int main(){
    int t;
    cin>>t;
    int ans[t];
    int n;
    for(int i=0;i<t;i++){
        cin>>n;
        int arr[n];
        int tempnum;
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        tempnum=minimumBribes(n,arr);
        ans[i]=tempnum;
    }
    //cout<<endl;
    for(int i=0;i<t;i++){
        int num=ans[i];
        if(num<=2){
            cout<<num<<endl;
        }
        else{
            cout<<"Too chaotic"<<endl;
        }
    }
}

int minimumBribes(int n,int arr[]){
    int Bcount=0;
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j+1]<arr[j]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                Bcount+=1;
            }
        }
    }
    return Bcount;
}