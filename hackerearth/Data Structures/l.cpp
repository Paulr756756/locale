#include <bits/stdc++.h>
struct Node{
    int data;
    Node* next;
};
Node* head ;

void append();
void print();
void Push(int num){
    
}

int main(void){
    std::cout << "Enter the size of the list:"; int n, num;
    std:: cin >> n;
    for(int counter=0;counter<n;counter++){
        std::cout << "Enter a number:";
        std::cin >> num;
        push(num);

        std::cout << std::endl;
    }
}