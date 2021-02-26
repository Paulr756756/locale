#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int best_per=0,worst_per=0, num=0, count=0, i=0;
    std::cin >> num;
    int arr[num];

    for(int i=0;i<num;i++){
        std::cin >> arr[i];
    }
    best_per= arr[i];
    worst_per=arr[i];

    for(int i=1;i<num;i++){
        if(arr[i]>best_per || arr[i]<worst_per){
            if(arr[i]>best_per){
                best_per=arr[i];
                count++;
            }else if(arr[i]<worst_per){
                worst_per=arr[i];
                count++;
            }
        }  
    }
    std::cout << count;
    return 0;
}
