#include <iostream>
using namespace std;
void mergeSort(int arr, int p,int r) {
    if (p<r){
        int q=(p+r)/2;
        mergeSort(arr,p,q);
        mergeSort(arr,q+1,r);
        
    }

}
void merge(int arr[],int p,int q,int r) {
    int n1=q-p+1; //size of left subarray
    int n1=r-q; //size of right subarray
    
}
int main (){
    
}