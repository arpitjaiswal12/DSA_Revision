#include<iostream>
using namespace std;

int main(){
    int arr[20]={12,24,36,56,67,68,89,90};
    int n=8;
    //insert the element in sorted array:
    int key;
    cout<<"enter key to insert ";
    cin>>key;
    for(int i=n-1;i>=0;i--){
        if(key<arr[i]){
            arr[i+1]=arr[i];
            arr[i]=key;
            
        }
        else if(key>arr[i]){
            arr[i+1]=key;
            break;
        }

    }
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    
    
    
    return 0;
}