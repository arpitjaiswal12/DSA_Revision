#include<iostream>
using namespace std;

bool sorted(int arr[], int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        sorted(arr+1,size-1);
    }
}

int main(){
    int arr[5]={4,6,8,9,10};
    bool ans=sorted(arr,5);
    if(ans){
        cout<<"is sorted";
    }
    else{
        cout<<"not sorted";
    }

    
    
    return 0;
}