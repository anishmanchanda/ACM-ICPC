#include<iostream>
using namespace std;
int utopianTree(int n){
    int height=1;
    for (int i=1;i<=n;i++){
        if(i%2==0){
            height++;
        }
        else{
            height=2*height;
            
        }
    }
    return height;

}
int main(){
    int t,n;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>n;
        arr[i]=utopianTree(n);
    }
    for(int i=0;i<t;i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}