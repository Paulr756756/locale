#include <iostream>
int main(void){
    int diag_size=0, temp1=1, temp2=0, lne=0;
    std::cout << "Enter the size of the diagonal you want to print:";
    std::cin >> diag_size;
    temp2 = diag_size;
    lne=diag_size+2;
    std::cout << "\n";
    for(int i=0; i<lne; i++){
        std::cout << "*";
    }
    std::cout << std::endl;
    

    for(int i=0; i<diag_size ; i++){
        for(int j=0; j<diag_size+2; j++){
            if(j==0){
                std::cout << "*";
            } else if(j==diag_size+1){
                std::cout << "*";
            } 
            else{
            
            if(temp1==temp2 && j==temp1){
                std::cout << "*";
            }else if(j==temp1){
                std::cout << "*";
            }else if(j==temp2){
                std::cout << "*";
            }else{
                std::cout << " ";
            }
            }
        }
    temp1+=1;
    temp2-=1;
    std::cout << "\n";
    }

    for(int i=0; i<lne; i++){
        std::cout << "*";
    }
    std::cout << std::endl;
    
}