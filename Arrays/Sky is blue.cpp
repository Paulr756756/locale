#include <bits/stdc++.h>

int main(void){

    char temp = ' ';
    int j=0, changes=0, prev_space=0;
    char user_input[] = "The sky is blue";
    std::vector <int> space_pos;

    //Reversing the whole string
    for(int i=0; i<sizeof(user_input)-(i+2); i++){
        temp=user_input[sizeof(user_input)-(i+2)];
        user_input[sizeof(user_input)-(i+2)] = user_input[i];
        user_input[i]= temp;
    }
    
    //space position
    for(int i=0; i<sizeof(user_input); i++){
        if(user_input[i] == ' ')
            space_pos.push_back(i);
    }


    //Reversing the position
    for(int i=0; i<space_pos[j]; i++){
        if(changes>(space_pos[j]-prev_space)/2){
            if(i== space_pos[j] - 1){
                prev_space=space_pos[j];
                j++;
                changes = 0;
            }
            continue;
        }
        if(user_input[i]== ' ')
            continue;

        int k = space_pos[j]-1;
        int r = i-prev_space;
        temp=user_input[i];
        user_input[i]= user_input[k-r];
        user_input[k-r] = temp;
        changes++;
    }

    //Printing the array(wrong)
    for(int i=0; i<sizeof(user_input) - (i+2); i++){
        std::cout << user_input[i];
    }
}