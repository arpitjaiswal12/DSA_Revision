#include<iostream>
using namespace std;
int sum=0;
int sumarray(int* arr,int size){
    if(size==0){
        return 0;
    }
    sum=sum+arr[size-1];
    sumarray(arr,size-1);
    return sum;
}

int main(){
    int a[5]={2,3,7,9,8};
    int ans=sumarray(a,5);
    cout<<ans;
    


    
    return 0;
}