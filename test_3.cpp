#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n=0, max_freq=0, index=0; 
    std::cin >> n;
    int arr[n];
    std::vector<int> frequency;
    for(int i=0;i<n;i++){
        std::cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        max_freq=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j])
                max_freq ++;
        }
        frequency.push_back(max_freq);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(frequency[j]>frequency[i])
                index=j;
        }
    }
    std::cout << arr[index];

    return 0;
}