#include <iostream>

int main(void){
    int test_cases=0, grn=0, prpl=0, num_participants=0, cost=0;
    bool temp1, temp2; 
    std::cin >> test_cases ;
    for(int i=0; i<test_cases; i++){
        std::cin >> grn >> prpl >> num_participants;
        for(int counter =0; counter<num_participants; counter++ ){
            std::cin >> temp1 >> temp2;

            if(temp1==true)
                cost+=grn;
            if(temp2==true)
                cost+=prpl;
                
        }
    std::cout << cost << std::endl;
    cost = 0;

    }
}