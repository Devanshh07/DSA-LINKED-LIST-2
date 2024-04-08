#include<bits/stdc++.h>

using namespace std;
//2nd approch is in -> OptimalSort012.cpp

class node{
    public:
    int data;
    node *next;
    node (int data){
        this->data = data;
        next = nullptr;
    }

};
node *arr2ll(vector<int> &arr){
    node *mover = new node(arr[0]);
    node *head = mover;
    for(int i=1;i<arr.size();i++){
        node *temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
node *print(node *head){
    node *temp = head;
    while(temp!=NULL){
     cout<<temp->data<<" ";
     temp = temp->next;
     
    }
};
node *sorting(node *head){
    node *temp = head;
    node *zero = new node(-1);
    node *newll = zero;
    node *one = new node(-1);
    node *hed1 = one;
    node *two = new node(-1);
     node *hed2 = two;
    while(temp!=NULL){
        if(temp->data==0){
            node *zro = new node(0);
            zero->next = zro;
            zero = zero->next;
        }
        else if(temp->data==1){
            node *on = new node(1);
            one->next = on;
            one = one->next;
        }
        else {
            node *too = new node(2);
            two->next = too;
            two = two->next;
        }
        temp = temp->next;
    }
    zero->next = hed1->next;
    one->next = hed2->next;


    return newll->next;


}
int main(){

  vector<int> arr = {0,2,2,1,2,1,0,0,1,1};
  vector<int> v = {};
  node *head = arr2ll(arr);
   
  node *newhead = sorting(head);
  print(newhead);
   





    return 0;
}