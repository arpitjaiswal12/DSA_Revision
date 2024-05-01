#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int x){
        data=x;
    }
    //friend void push(node* &head,int x);
};
node* head=0;
node* newnode;
void push(int x){
    newnode=new node(x);
    newnode->next=head;
    head=newnode;
    return;
}
void pop(){
    if(head==NULL){
        cout<<"stack is underflow"<<endl;
        return;
    }
    head=head->next;
}
int display(){
    node* dis=head;
    while(dis!=0){
        cout<<dis->data<<" ";
        dis=dis->next;
    }
    
}


int main(){
    //node* head=NULL;
    push(12);
    push(45);
    push(89);
    push(56);
    display();
    pop();
    cout<<endl;
    display();
    
    
    
    return 0;
}