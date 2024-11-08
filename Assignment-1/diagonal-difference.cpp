#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mat[n][n];
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    //cout<<endl;
    /*for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<mat[i][j]<<" ";
        }cout<<endl;
    }*/
    int sumLtoR=0,sumRtoL=0;
    for(int i=0;i<n;i++){
        sumLtoR+=mat[i][i];
    }
    //cout<<endl;
    for(int i=0;i<n;i++){
        sumRtoL+=mat[i][n-i-1];
    }
    //cout<<sumLtoR<<" "<<sumRtoL<<endl;
    int diff= sumLtoR - sumRtoL;
    diff=abs(diff);
    cout<<diff;
    return 0;
}
