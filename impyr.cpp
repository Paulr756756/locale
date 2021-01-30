#include <iostream>
int main(void){
    int pyr_size=0, temp1=0, temp2=0, strt_pnt=0;
    std::cout << "Enter the pyramid size :";
    std::cin >> pyr_size ;
    pyr_size+=1;
    strt_pnt=pyr_size+1;

    //strt_pnt = (pyr_size/2)+1;
    temp1=strt_pnt-1;
    temp2=strt_pnt+1;
    for(int i=0; i<pyr_size; i++){
        for(int j=0; j<strt_pnt+pyr_size; j++){
            if(i==1){
            if(j==strt_pnt)
            std::cout <<"*";
            std::cout << " ";
            
            }
            if(i!=1 && i!=0){
                if(j>=temp1 && j<=temp2){
                
                std::cout << "*";
                }else
                std::cout<< " "; 
            }
        }
        std::cout << "\n";
        if(i>=2){
            temp1-=1;
            temp2+=1;
        }

    }
}