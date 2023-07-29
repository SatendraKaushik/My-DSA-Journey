#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int m){
    int start=0;
    int end = n-1;
    int mid=(start+end)/2;
    while(start<=end) {
        if(arr[mid]==m){
           
           cout<<mid;


        }              
        if(m>arr[mid]) {
            start = mid+1;
        }
        else{
            end=mid-1;
         }
         mid=(start+end)/2;

    }
    
}
int main () {
    int arr[7]={1,2,3,4,5,6,7};
    int index = binarySearch(arr,7,3);
    cout<< "Index of 3 is "<< index<< endl;
}