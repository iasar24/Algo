//merge two arrays using merge sort
//time complexity of merge sort is O(NlogN)
//Space complexity of merge sort is O(n)
#include<iostream>
using namespace std;

void printarray(int arr[],int size){
    int i;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
        
    }

}
class solution{
    public:
    void merge(int A[],int low,int high,int mid){
        int i,j,k,B[1000000];
         i=low;
         j=mid+1;
         k=low;
         while(i<=mid&&j<=high){
            if(A[i]<A[j]){
            B[k]=A[i];
            i++;
            k++;
            }
            else
            {
                B[k]=A[j];
                j++;
                k++;
            }

         }
         while(i<=mid){
            B[k]=A[i];
            k++;
            i++;

         }
         while(j<=high){
            B[k]=A[j];
            k++;
            j++;

         }
         for(int i=low;i<=high;i++){
            A[i]=B[i];

         }
    }
    void mergesort(int A[],int low,int high ){
     int mid;
        if(low<high){
            mid=(low+high)/2;
            mergesort(A,low,mid);
            mergesort(A,mid+1,high);
            merge(A,mid,low,high);
        }
    }
};
int main(){
    int n,t,i;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        solution ob;
        ob.mergesort(arr,0,n-1);
        printarray(arr,n);
    }
    return 0;

}

