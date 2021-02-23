#include <bits/stdc++.h>

bool condition(int i,int j,int k,int x,int y){
    bool true_condition=false;
    if(((i+j)%k == x)&&((i*j)%k==y))
        true_condition= true;
    if(true_condition)
        return true;

    return false;
}

int main(void){
    int n=0,k=0,x=0,y=0, num_unordered=0;
    std::cin >> n >> k >> x >> y;
    int arr[n];
    for(int i=0; i <n; i++ ){
        std::cin >> arr[i];
    } 

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(condition(arr[i], arr[j], k, x, y))
                num_unordered+=1;
        }
    }

    std::cout << num_unordered;
}