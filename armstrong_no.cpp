#include <iostream>
#include <vector>
#include <cmath>


int digits(int);

std::vector <int> parsing(int a, int b){
    int temp=0, div=pow(10, b-1);
    std::vector<int> c;
    for(int i = 0; i<b; i ++){
        temp=a/div;
        a%=div;
        div/=10;        
        c.push_back(temp);
    }
    return c;
}

int main(void){
    int a, dig=0, sum=0;
    std::cout << "Enter your preferred  number :";
    std::cin >> a;
    dig = digits (a);
    std:: vector <int> arr;
    arr = parsing(a, dig);

    for(int i =0; i<dig; i++){


        sum+=pow(arr[i], dig);
    }

    if(sum == a)
    std::cout << "The number you've entered is an armstrong number.\n";
    else 
    std::cout << "The number you've entered is not a armstrong number.\n";

}

int digits(int a){
    int temp=1, div=10;
    for(int i = 0; ; i++){
        if(a/div <1)
            break;
        temp++;
        div*=10;
    }
    return temp;
}


