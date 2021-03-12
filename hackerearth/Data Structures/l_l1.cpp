#include <bits/stdc++.h>

struct Node{
    int data;
    Node* next;
};
Node* head ;

void Insert(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if(head==NULL) head = temp;

}

void Print(){

}
int main(void){
    int x,n;
    std::cout << "Enter the lsit size:";
    std::cin >> n;
    for(int i=0;i<n;i++){
        std::cout << "Enter the number:";
        std :: cin >> x;
        Insert(x);
        Node* temp1=head;
        while(temp1!=NULL){//traversing a list
            temp1=temp1->next;
        }
    }
}