#include <iostream>
using namespace std;
void CompareTriplets(int a[3],int b[3]){
    int Alice=0,Bob=0;
    for(int i=0;i<3;i++){
        if(a[i]>b[i]){
            Alice++;
        }
        else if(b[i]>a[i]){
            Bob++;
        }
        else{
            continue;
        }
    }
    cout<<Alice<<" "<<Bob;
    int score[2]={Alice,Bob};

}

int main(){
    int arr1[3],arr2[3];
    for(int i=0;i<3;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<3;i++){
        cin>>arr2[i];
    }
    CompareTriplets(arr1,arr2);
    return 0;
}