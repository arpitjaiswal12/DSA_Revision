#include<iostream>
using namespace std;
void reverse_array(int *arr,int i,int n){
    if(i>n-1) return;
    int temp=arr[i];
    arr[i]=arr[n-1];
    arr[n-1]=temp;
    reverse_array(arr,i+1,n-1);
}
int main(){
    int arr[4]={23,4,6,1};
    reverse_array(arr,0,4);
    for(int i=0;i<4;i++){
        cout<<arr[i]<<",";


    }
    
    return 0;
}