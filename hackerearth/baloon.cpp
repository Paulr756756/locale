#include <iostream>

int main(void){
    int test_cases=0, grn=0, prpl=0, counter = 0, num_participants, cost=0;
    bool temp; 
    std::cin >> test_cases ;
    for(int i=0; i<test_cases; i++){
        std::cin >> grn >> prpl >> num_participants;
        for(std::cin >> temp; counter<num_participants; counter++ ){
            for(int j=0; j<2; j++){
                if(j=0)
                    if(temp)
                        cost+=grn;
                if(j=1)
                    if(temp)
                        cost+=prpl;
            }
        }
    }
}