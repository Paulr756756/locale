#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main(){
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   int input=0;
   std::cin >> input;
   if(input %2 == 1) { 
      input++;
   }
   int mid_str = (input/2);
   for(int i = 1; i<= mid_str; i++) {
      for(int j = 1; j<=(mid_str-i); j++) {
         std::cout << "\t";
      }
      if(i == 1) {
         std::cout << "*";
      }else{
         std::cout << "*" ;
         for(int j = 1; j<=2*i-3; j++) { 
            std::cout << "\t";
         }
         std::cout << "\t"<< "*";
      }
      std::cout << "\n";
   }
   for(int i = mid_str+1; i<input; i++) {
      for(int j = 1; j<=i-mid_str; j++) {
         std::cout << "\t";
      }
      if(i == input-1) {
         std::cout << "*";
      }else{
         std::cout <<"*" ;
         for(int j = 1; j<=2*(input - i)-3; j++) { 
            std::cout << "\t";
         }
         std::cout << "\t" << "*" ;
      }
      std::cout << "\n";
   }
    return 0;
}