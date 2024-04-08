#include<bits/stdc++.h>

using namespace std;

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
node *OddEven(node *head,vector<int> arr){
    node *temp = head;

    if( head == NULL || head->next == NULL){
        return head;
    }


    while(temp!=NULL && temp->next !=NULL){
          arr.push_back(temp->data);
          temp = temp->next->next;
    }
    if(temp) arr.push_back(temp->data);




     temp = head->next;
    while(temp!=NULL && temp->next !=NULL){
        arr.push_back(temp->data);
        temp = temp->next->next;
    }
    if(temp) arr.push_back(temp->data);



    node *od = head;
    int i = 0;
    while(od!=NULL){
        od->data = arr[i];
        i++;
        od = od->next;
    }
    return head;
    
}
node *oddeven2(node *head){
    node *temp = head;
    node *odd = head;
    node *even = head->next;
    node *evenhead = even;
    while(odd!=NULL && odd->next !=NULL){
        odd->next  = odd->next->next;
        odd = odd->next->next;
    }
    while (even!=NULL && even->next!=NULL){
        even->next = even->next->next;
        even = even->next->next;
    }
    odd->next  = evenhead;
    
    return head;

}

int main(){

  vector<int> arr = {10,20,30,40,50,60,70,80,90,100};
  vector<int> v = {};
  node *head = arr2ll(arr);

    head = oddeven2(head);
    print(head);




    return 0;
}