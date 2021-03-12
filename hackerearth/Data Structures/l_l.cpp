#include <bits/stdc++.h>// inserting a node at the beginning

struct Node {
    int data;
    Node* next;
};
Node* head;

void Insert(int x){
    Node* temp =  new Node();
    temp-> data = x;
    temp->next = head;
    head = temp;
    
}
void Print (){

}
int main(void){
    int n, i, x;
    head = NULL; // empty list
    std::cout << "How many numbers:";
    std ::cin >> n;
    for(int i=0;i<n;i++){
        std::cout << "Enter the number:";
        std::cin >> x;
        Insert(x);
        Print();
    }

}