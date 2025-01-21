#include <iostream>
#include <string>
using namespace std;
/*
INEFFECIENT APPROACH
int palindromeIndex(string s){
    //string scopy=s;
    int length=s.size();
    string srev=string(s.rbegin(), s.rend());
    if(s==srev)return -1;
    for(int i=0;i<length;i++){
        string scopy=s;
        scopy.erase(i,1);
        string srev=string(scopy.rbegin(), scopy.rend());
        if(scopy==srev){
            return i;
        }
    }
    return -1;
}
*/
int palindromeIndex(string s) {
    int left = 0, right = s.size() - 1;

    // Two-pointer approach to find the mismatch
    while (left < right) {
        if (s[left] != s[right]) {
            // Check by skipping the left character 
            int l = left + 1, r = right;
            bool isLeftValid = true;
            while (l < r) {
                if (s[l] != s[r]) {
                    isLeftValid = false;
                    break;
                }
                l++;
                r--;
            }
            if (isLeftValid) return left;

            // Check by skipping the right character
            l = left, r = right - 1;
            bool isRightValid=true;
            while (l < r) {
                if (s[l] != s[r]) {
                    isRightValid=false;
                    break;
                }
                l++;
                r--;
            }
            if(isRightValid) return right;
        }
        left++;
        right--;
    }

    return -1; // Already a palindrome
}


int main(){
    string ss;
    int q;
    cin>>q;
    string arr[q];
    for(int i=0;i<q;i++){
        cin>>ss;
        arr[i]=ss;
    }
    for(int i=0;i<q;i++){
        cout<<palindromeIndex(arr[i])<<endl;
    }
    return 0;
}