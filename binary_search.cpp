//Time complexity:O(Log N)
//Earth Github
//ONly works in sorted array
//Hint:It divides the array in half pieces
//Compare the middle element of the search space with the key. 
//Compare the middle element of the search space with the key. 
//If the key is found at middle element, the process is terminated.
//If the key is not found at middle element, choose which half will be used as the next search space.
//If the key is smaller than the middle element, then the left side is used for next search.
//If the key is larger than the middle element, then the right side is used for next search.
#include<iostream>
using namespace std;

//This process is continued until the key is found or the total search space is exhausted.
int binary(int arr[],int n,int k){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(k==arr[mid])
        return mid;
        else if(k<arr[mid])
        high=mid-1;
        else 
        low=mid+1;

    }
    return -1;

}
int main(){
    int arr[]={0,4,8,16,24};
    int k=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    int search=binary(arr,n,k);
    if(search!=-1){
        cout<<"Element Found: "<<search<<"  Position"<<endl;

    }
    else{
        cout<<"Not Found Dosto!"<<endl;
    }
    return 0;




}
