#include <iostream>


int main(void){
    int size = 0, temp1=0, temp2=0;
    std::cout << "Enter the size of the diagonal star you want to print to the console :";
    std::cin >> size;
    int mid_str=size/2 ;
    temp1=mid_str-1, temp2=mid_str;
    for (int i=0; i<size; i++){
        for(int j=0; j<size; j++){

            if(j==mid_str)
                std :: cout << "*";
            else if(i==0 && j!=mid_str)
                std::cout << " ";
            if(i>0 && i!=size/2){
                if(j==temp1 || j == temp2){
                    std::cout << "*";
                } else
                    std::cout << " ";
            }else if(i==size/2 && j!=mid_str){
                std::cout << "*";
            }
        }
        std::cout << std::endl;

        if(i>0 && i!=7){
            if(i>=size/2){
                temp1 ++;
                temp2 --;
            }else if(i<size/2){
                temp1--;
                temp2++;
            }
        }else if(i==7){
            temp1=-1;
            temp2=-1;
        }
    }

}