#include <iostream>
#include <vector>
#include <cmath>

int main(void){
    int digits=1, num=0, temp=0, initial_num=0, divisor=10;
    std::vector <int> num_arr;
    std::cout << "Enter the even number you want to check :";
    std::cin >> num;
    initial_num=num;
    
    //finding the number of digits
    temp=num/divisor;
    for(int i=0; ; i++){
        temp/=divisor;
        digits++;
        if(temp==0)
            break;    
    }

    if(digits%2!=0)
        std::cout << "The number you've entered doesn't have even number of digits.";
    
    //parsing the digits
    divisor = pow(10, digits-1);
    for(int i=0;i<digits;i++){
        temp=num/divisor;
        num_arr.push_back(temp);
        num%=divisor;
        divisor/=10;        
    }

    //swapping the digits
    for(int i=0;i<digits/2; i++){
        temp= num_arr[i] ;
        num_arr[digits-(1+i)] = num_arr[i];
        num_arr[i]= temp;
    }

    //Converting the vector to num
    divisor=pow(10, digits-1);
    for(int i=0;i<digits; i++){
        num+=num_arr[i]*divisor;
        divisor/=10;
    }

    if(num==initial_num)
        std::cout << "The number you've entered is a palindrome";
    else
        std::cout << "The number you've entered is not a palindrome";
    
}