#include <iostream> 
int main(void){
    int size=0, temp1=0;
    std::cout << "Enter the row size :";
    std::cin >> size;
    temp1=size;
    
    for(int i=0;i<2*size; i++){
        for(int j=0; j<size; j++){
            if(j<temp1)
                std::cout << " ";
            else if(j>=temp1)
                std::cout << "*";    

        }
        std::cout << std::endl;
        if(i<size)
            temp1--;
        else if(i>=size)
            temp1++;
    }
}