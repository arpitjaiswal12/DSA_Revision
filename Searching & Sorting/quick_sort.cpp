#include<iostream>
using namespace std;

int partition(int a[],int lb,int ub){
    int pivot=lb;
    int start=lb;
    int end=ub;
    while (start<end)
    {
        while(a[start]<=a[pivot] && start<ub){
            start++;
        }
        while(a[end]>a[pivot] && end>lb){
            end--;
        }
        if(start<end){
            int temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
    int temp=a[pivot];
    a[pivot]=a[end];
    a[end]=temp;
    return end;
}
void quick_sort(int a[],int lb,int ub){
    int k;
    if(lb<ub){
        k=partition(a,lb,ub);
        quick_sort(a,lb,k-1);
        quick_sort(a,k+1,ub);
    }
}
int main(){
    // int a[6]={12,2,34,5,10,8};
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int a[n];
    cout<<"enter the element of array :: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quick_sort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    
    return 0;
}