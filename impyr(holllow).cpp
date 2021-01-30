#include <iostream>
int main(void){
    int temp1=0, temp2=0, pnt=0, size=0;
    std::cout << "Enter the size of the pyramid : ";
    std::cin >> size ;
    size+=1;
    pnt = size+1;

    temp1=pnt-1;
    temp2=pnt+1;

    for(int i=0; i<size; i++){
        for(int j=0; j<pnt+size; j++){
            if(i==1){
            if(j==pnt)
            std::cout <<"*";
            std::cout << " ";
            
            }
            if(i>1 && i<size-1){
                if(j==temp1 || j==temp2){
                
                std::cout << "*";
                }else
                std::cout<< " "; 
            } else if(i==size-1){
                if(j>=temp1 && j<= temp2)
                std::cout << "*";
                else 
                std::cout <<" ";
            }
        }
        std::cout << "\n";
        if(i>=2){
            temp1-=1;
            temp2+=1;
        }

    }
}