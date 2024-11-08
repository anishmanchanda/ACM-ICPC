#include <iostream>
using namespace std;
void staircase(int n){
    for(int rowno=1;rowno<=n;rowno++){
        for(int colno=1;colno<=n-rowno;colno++){
            cout<<" ";
        }
        for(int j=0;j<rowno;j++){
            cout<<"#";
        }
        cout<<endl;
    }

}

int main(){
    int n;
    cin>>n;
    staircase(n);
    return 0;
}