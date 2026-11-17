#include <iostream>
using namespace std; 
void binarySearch(int arr[],int size,int target) {
    int left=0;
    int right =size-1;
    while (left<=right) {
        int mid=left+(right-left)/2;
        if(arr[mid]==target){
            cout<<"Element found at index: "<<mid<<endl;
            return;
        }
        else if(arr[mid]<target){
            left=mid+1;
        } else {
            right=mid-1;
        }
    }cout<<"Element not found in the array."<<endl;

}
int main(){
    int arr[]={2,4,6,8,10,12,14,16,18,20};
    int target=14;
    binarySearch(arr,size,target);
    return 0;
}