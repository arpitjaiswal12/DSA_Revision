#include<iostream>
using namespace std;
int main()
{

    int arr[7]={2,16,75,96,143,200,208};
    int start=0;
    int end=6;
    int kth=6;
    int mid;
    while(start<end){
        mid=(start+end)/2;
        if(mid==kth-1){
            cout<<"B.S"<<arr[mid]<<endl;
            break;
        }
        else if(mid<kth-1){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<arr[kth-1];
    return 0;
}