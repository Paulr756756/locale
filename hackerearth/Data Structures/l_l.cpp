#include <bits/stdc++.h>// inserting a node at the beginning

struct Node {
    int data;
    Node* next;
};
Node* head;

void Print (){
    Node *curr_node = head;
    while(curr_node->next!=NULL){
        std::cout << curr_node->data << std::endl;
        curr_node=curr_node->next;
    }
    std::cout << curr_node->data << std::endl;

}
int main(void){
    int x;
    head = NULL;
    Node *temp = new Node();
    std::cin >> x;
    temp->data = x;
    temp->next = NULL;
    head=temp;
    Node* curr_node = head;

    temp = new Node();
    std::cin >> x;
    temp->data = x;
    temp->next = NULL;
    curr_node->next=temp;
    curr_node = temp;

    temp = new Node();
    std::cin >> x;
    temp->data = x;
    temp->next=NULL;
    curr_node->next = temp;
    curr_node=temp;
    
    temp = new Node();
    std::cin >> x;
    temp->data = x;
    temp->next=NULL;
    curr_node->next=temp;
    curr_node=temp;

    temp=new Node();
    std::cin >> x;
    temp->data=x;
    temp->next = NULL;
    curr_node->next=temp;


    Print();
}