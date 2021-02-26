#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int count=0, input=0, divisor=10, res=0;
    int result=0, make=0;
    std::cin >> input;
    make=input;
    for(int i=0;;i++){
        count ++;
        res=make/divisor;
        if(res == 0)
            break;
       divisor*=10;
        
    }if(count!=2){
    for(int i=0;i<count;i++){
        divisor=pow(10, count -1);
        make%=divisor;
        divisor/=10;
        if(count==3){
            result=100-make;
        }
        count--;
    }
    }else if(count ==2 || count ==1){
        result = 100-input;
    }
    std::cout << result;
    return 0;
}
