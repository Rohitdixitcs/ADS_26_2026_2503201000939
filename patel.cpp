#include <iostream>
using namespace std;
bool isPalindrome(const strings&str){
    int left =0;
    int right=str.length()-1;
    while (left<right) {
        if (str[left]!=str[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main() {
    string test1="racecar";
    string test2="hello";
    cout<<"ls"<<
}