#include<iostream>
using namespace std;



int main(){
    int n;
    cout<<"enter the size of first array "<<endl;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    
    int m;
    cout<<"enter the size of second array "<<endl;
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    int ans[n+m];
    int i=0,j=0;
    for(int k=0;k<n+m;k++){
        if(i==n){
            ans[k]=arr2[j];
            j++;
        }
        else if(j==m){
            ans[k]=arr1[i];
            i++;
        }
        else if(arr1[i]<=arr2[j]){
            ans[k]=arr1[i];
            i++;
        }
        else if(arr2[j]<=arr1[i]){
            ans[k]=arr2[j];
            j++;
        }
    }
    cout<<"ur merged array is "<<endl;
    for(int i=0;i<n+m;i++){
        cout<<ans[i]<<" ";
    }
    
    
    return 0;
}