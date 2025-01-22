#include<iostream>
using namespace std;
void circularArrayRotation(int n,int k,int q,int arr[],int query[]);
int main(){
    int n,k,q;//no. of elements in array, rotation count, no. of queries
    cin>>n>>k>>q;
    int a[n];
    int query[q];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int j=0;j<q;j++){
        cin>>query[j];
    }
    circularArrayRotation(n,k,q,a,query);
    return 0;
}

void circularArrayRotation(int n,int k,int q,int arr[], int query[]){
    for(int j=0;j<k;j++){    
        int last=arr[n-1];
        for(int i=n-1;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=last;
        
    }
    for(int h=0;h<q;h++){
        cout<<arr[query[h]]<<endl;
    }
    
}