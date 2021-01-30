#include <iostream>
#include <vector>
int main(void){
    int size=0, row_size;
    std::cout << "Please Enter the size of the pyramid:";
    std::cin >> size;
    size++, row_size=size-1;
    std::vector <int> nums;
    
    for(int i=1;i<size;i++){
        nums.push_back(i);
    }

    for(int i=0;i<size; i++){
        for(int j=0;j<row_size;j++){
            std::cout << nums[j];
        }
        row_size--;
        std::cout << std::endl;
    }

}