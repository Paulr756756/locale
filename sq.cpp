#include <iostream>
int main(void){
    int size=0;
    std::cout << "Enter the size of the square:";
    std::cin >> size;
    for(int i=0;i<size; i++){
        for(int j=0; j<size; j++){
            if(i==0 || i==size-1)
                std::cout << "*";
            else if(i>0 && i<size-1){
                if(j==0  || j==size-1)
                    std::cout << "*";
                else
                    std::cout << " ";
                    
            }    
        }
        std::cout << std::endl;
    }
}