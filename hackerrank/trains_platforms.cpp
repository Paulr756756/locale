#include <bits/stdc++.h>

/*My code was to check space outside the interval, but it's more convinient to check the interval itself
int check(int a, int b, int c, int d, int count){
    if(a>b && a>d)
        count --;
    return count;
}*/


int main(void){
    int n=0;
    std::cin >> n;
    int arrival_timings[n];
    int departure_timings[n];

    //int count=n;
    int maximum=0;
    int count =1;
    for(int i=0;i<n; i++ ){
        std::cin >> arrival_timings[i] >> departure_timings[i];
    }
    for(int i=0; i<n; i++){
        count =1;
        for(int j=i+1; j<n; j++){
            if((arrival_timings[j]>=arrival_timings[i] && arrival_timings[j]<=departure_timings[i]) || (arrival_timings[j]<=arrival_timings[i] && departure_timings[j]>=arrival_timings[i]) )
                count ++;        
            }
        maximum=std::max(maximum, count);
    }

    std::cout << maximum;
}