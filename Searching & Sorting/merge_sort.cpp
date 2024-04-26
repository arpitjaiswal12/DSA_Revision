#include<iostream>
using namespace std;
void merge(int arr[],int start,int mid,int end){
    int n1=mid-start+1;
    int n2=end-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[start+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }
    int i=0,j=0;
    int k=start;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            arr[k]=a[i];i++;k++;
        }
        else{
            arr[k]=a[j];
            j++;k++;
        }
    }
    while (i<n1)
    {
        arr[k]=a[i];i++;k++;
        /* code */
    }
    while (j<n2)
    {
        arr[k]=b[j];j++;k++;
        /* code */
    }
    
    
}
void merge_sort(int arr[],int start,int end){
    if(start<end){
        int mid=(start+end)/2;
        merge_sort(arr,start,mid);
        merge_sort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}

int main(){
    int arr[7]={23,12,2,44,3,18,4};
    merge_sort(arr,0,6);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}