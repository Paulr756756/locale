#include <bits/stdc++.h>
/*
void swap_str(std::string user_input, int l, int r){
    while(l<r){
        std::swap(user_input[l], user_input[r]);
        l++;
        r--;
    }
}

std::string reverse_str(std::string user_input){


    for(int i=0 ; i<user_input.length(); i++){
        int n = user_input.length();
        int j=0;
        user_input.insert(user_input.end(), ' ');
        //till you encounter a whitespace
        if(user_input[i]== ' '){
            swap_str(user_input, j, i-1);
            
            j=i+1;  
        }
    }

    user_input.pop_back();
    swap_str(user_input, 0, user_input.length() - 1);
    return user_input;
}


int main(void){
    std::string user_input = "";
    std::cout << "Enter your string:";
    getline(std::cin, user_input);

    std:: string reversed = reverse_str(user_input);

    std::cout << reversed;

}
*/
using namespace std; 
  
// Function used to reverse a string 
// from index l to r 
void reversed(string& s, int l, int r) 
{ 
  
    while (l < r) { 
  
        // Swap characters at l and r 
        swap(s[l], s[r]); 
        l++; 
        r--; 
    } 
} 
  
// Function to reverse the given string 
string reverseString(string str) 
{ 
  
    // Add space at the end so that the 
    // last word is also reversed 
    str.insert(str.end(), ' '); 
  
    int n = str.length(); 
  
    int j = 0; 
  
    // Find spaces and reverse all words 
    // before that 
    for (int i = 0; i < n; i++) { 
  
        // If a space is encountered 
        if (str[i] == ' ') { 
  
            // Function call to our custom 
            // reverse function() 
            reversed(str, j, i - 1); 
  
            // Update the starting index 
            // for next word to reverse 
            j = i + 1; 
        } 
    } 
  
    // Remove spaces from the end of the 
    // word that we appended 
    str.pop_back(); 
  
    // Reverse the whole string 
    reversed(str, 0, str.length() - 1); 
  
    // Return the reversed string 
    return str; 
} 
  
// Driver code 
int main() 
{ 
    string str; 
    
    std::cout << "Enter:";

    getline(std::cin, str);
    
    // Function call 
    string rev = reverseString(str); 
  
    // Print the reversed string 
    cout << rev; 
    return 0; 
} 