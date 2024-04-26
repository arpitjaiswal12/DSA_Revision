#include<iostream>
using namespace std;
int sum=0;
int sum_natural(int i,int n){
    if(i==n){
        sum+=i;
        return sum;
    }
    sum+=i;
    sum_natural(i+1,n);

    

}

int main(){
    int sum;
    cout<<sum_natural(1,5);
    
    return 0;
}