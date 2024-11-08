#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of students: ";
    cin>>n;
    int grades[n];
    for (int i=0;i<n;i++){
        //cout<<"enter grade: ";
        cin>>grades[i];
    }
    int div,rnd,diff;
    int finalgrades[n];
    for(int i=0;i<n;i++){
        div=grades[i]/5;
        div++;
        rnd=5*div;
        diff=rnd-grades[i];
        //cout<<div<<" "<<diff<<" "<<rnd<<endl;
        if(diff<3){
            finalgrades[i]=rnd;
        }
        else if(diff>=3 || grades[i]<38){
            finalgrades[i]=grades[i];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<finalgrades[i]<<endl;
    }
    return 0;
}
