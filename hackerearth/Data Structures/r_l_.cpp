#include <bits/stdc++.h>

struct Node{
    int data;
    Node *next;    
};

Node *HEAD=NULL, *curr_node, *even_node, *prev_node;

void create(int curr){
    if(HEAD==NULL){
        Node* temp = new Node();
        temp->data = curr;
        temp->next = NULL;
        HEAD=temp;
        curr_node=HEAD;
    }else{
    Node* temp= new Node();
    curr_node->next = temp;
    temp->data = curr;
    temp->next=NULL;
    curr_node = temp;
    }
}

void reversal(int number){
    Node *temp;
    prev_node=HEAD;
    temp=HEAD;
    for(int i=0; i<number; i++){
        if(temp->data%2 == 0){
            even_node = temp;
        }else if(temp->data%2!= 0){
            temp = temp->next;
        }
        temp=temp->next;
        if(i>2)
            prev_node=prev_node->next;
        
    }
}

int main(void){
    int number, temp;
    std::cin >> number;
    
    for(int i=0;i<number; i++){
        std::cin >> temp;
        create(temp);
    }
    reversal(number);  
}