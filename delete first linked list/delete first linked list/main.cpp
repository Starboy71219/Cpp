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
Node *deleter(Node *head){
    if(head==NULL){
        return NULL;
    }
    Node *temp=head->next;
    delete head;
    return temp;
}
int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    deleter(head);
    
    return 0;
}
