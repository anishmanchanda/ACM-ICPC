#include <iostream>
#include <climits>
using namespace std;
int main(){
    int max=INT_MIN;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if (arr[i]==max){
            count++;
        }
    }
    cout<<count;

    return 0;

}