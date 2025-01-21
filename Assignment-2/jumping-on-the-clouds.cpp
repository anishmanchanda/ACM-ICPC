#include <iostream>
#include <string>
using namespace std;

//upto i+2 jumps
/*
int jumpingOnClouds(int num,int arr[num]){
    int njumps=0;
    for(int i=0;i<num;i++){
        
            if(arr[i+2]==0){
                njumps+=1;
                i+=1;
            }
            else if(arr[i+2]==1){
                njumps+=1;
                //i+=1;
            }
    }
    return njumps;
}
*/

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int njumps=0;
    for(int i=0;i<n;i++){
        
            if(arr[i+2]==0){
                njumps+=1;
                i+=1;
            }
            else if(arr[i+2]==1){
                njumps+=1;
                //i+=1;
            }
    }
    //int jumps=jumpingOnClouds(n,arr);
    cout<<endl<<njumps<<endl;
    return 0;
}