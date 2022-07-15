//
//  main.cpp
//  insert at end linked list
//
//  Created by Ritesh Kumar on 03/11/21.
//

#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
void deleteEnder(Node *head){
    Node *curr=head;
    while(curr->next->next!=NULL){
        curr=curr->next;
    }
    Node *temp=curr->next;
    curr->next=NULL;
    delete temp;
}
void printrec(Node *head){
    if(head==NULL){
        return;
        }
    cout<<(head->data)<<" ";
    printrec(head->next);
}
int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    deleteEnder(head);
    printrec(head);
    return 0;
}

