#include <iostream>

struct node {
    int data ;
    node *next;
};
node *head = NULL, *curr_node;
int size;

void create(int a){
    if(head==NULL){
        node* temp = new node();
        temp->data = a;
        temp->next = NULL;
        head = temp;
        curr_node=head;
    } else if(head!=NULL){
        node* temp = new node();
        temp->data = a;
        curr_node->next = temp;
        temp->next=NULL;
        curr_node = temp;
    }
}

void print(){
    node *temp1 = head;
    while(temp1->next!=NULL){
        std::cout << temp1->data << std::endl;
        temp1=temp1->next;
    }
    std::cout << temp1->data << std::endl;
}

int main(void){
    int data;
    std::cout << "Enter the size of the linked list you want to create:";
    std::cin >> size;
    
    for(int counter =0; counter <size; counter++){
        std::cout << "Enter the data:";
        std::cin >> data;
        create(data);
    }
    print();
    
}