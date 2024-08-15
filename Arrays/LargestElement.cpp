#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //largest element in array 

    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }

    cout<<"the largest element is "<<largest;
    return 0;
}
