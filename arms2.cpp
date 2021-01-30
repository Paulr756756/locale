#include <iostream>
#include <cmath>
int main(void){
    int dig=0, remainder=0, num=0, OG_num=0, result =0 ;
    std::cout << "Enter the number of you want to check :";
    std::cin >> num;
    
    //Store the total number of digits in num
    for(OG_num = num;OG_num !=0; ++dig){
        OG_num /=10;
    }

    //
    for(OG_num=num; OG_num!=0; OG_num/=10){
        remainder=OG_num % 10;
        result += pow(remainder, dig);
    }

    if(num==result)
        std::cout << "The number you've entered is an armstrong number.\n";
    else
        std::cout << "The number you've entered is not an armstrong number.\n"; 
}