#include <iostream>
int main(void){
    int temp1=0, temp2=0, size=0;
    std::cout << "Please enter the size of the pattern you want to display :";
    std::cin >> size ;
    temp1 = size/2, temp2 = size/2;
    for(int i =0; i < size; i++){
    
    for(int j=0; j< size; j++){
        
        if(j<temp1 || j>temp2)
            std::cout << "*  ";
        else
        
            std::cout << "   ";
        } 

    std::cout << std::endl;
    
    if(i<size/2){
        temp1 --;
        temp2 ++;
    } else if(i>=size/2){
        temp1 ++;
        temp2 --;
    }
    
    }

}