#include <iostream>
int main(void){
    int a=0, b=0;
    std::cout << "Enter the two numbers:";
    std::cin >> a >> b;

    a=a+b;
    b=a-b;
    a=a-b;
    std::cout << "The numbers swapped are:" << a << " " << b;   
}