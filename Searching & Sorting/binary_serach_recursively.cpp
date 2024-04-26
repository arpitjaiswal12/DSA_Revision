/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void binary_search(int arr[],int start,int end,int key){
    int mid=(start+end)/2;
    if(start>end){
        return ;
    }
    if(arr[mid]==key){
        cout<<"key at position "<<mid;
    }
    else if(arr[mid]>key){
        binary_search(arr,start,mid-1,key);
    }
    else{
        binary_search(arr,mid+1,end,key);
    }
}

int main()
{
    int arr[6]={10,20,30,45,56,67};
    int start=0;
    int end=5;
    int key;
    cout<<"enter the key to search "<<endl;
    cin>>key;
    binary_search(arr,start,end,key);
    
    

    return 0;
}
