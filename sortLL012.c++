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
node *sortt(node *head){
    node *temp = head;
    int cntZero=0;
    int cntOne = 0;
    int cntTwo = 0;
    while(temp!=NULL){
        if(temp->data==0){
            cntZero++;
        }
        if(temp->data==1){
            cntOne++;
        }
        else cntTwo++;
        temp = temp->next;
    }
    temp = head;
    while(temp!=NULL)  {
         if(cntZero) {
            temp->data = 0;
            cntZero--;
         }
         else if(cntOne) {
                 temp->data = 1;
                 cntOne--;
         }
         else{
            temp->data = 2;
         }


        temp = temp->next;
    }
  return head;
}

int main(){

  vector<int> arr = {0,2,2,1,2,1,0,0,1,1};
  vector<int> v = {};
  node *head = arr2ll(arr);
   
  node *newhead = sortt(head);
  print(newhead);
   





    return 0;
}