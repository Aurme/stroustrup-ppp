// Chapter 04, exercise 04: guess a number from 1 to 100 in no more than 7 tries

//The middle of a given range of numbers can be taken by adding the lowest number and highest number
//and dividing it by two. we can set this to an expression of (max+min) / 2
//since we remove our guess from the range, you can update these by adding 1 to the lowest possible
//range if our guess was too low, or subtracting 1 if our guess was too high. (to explain the
// else if()... bodies)

//we rely on integer division for this problem, as a special note
#include "std_lib_facilities.h"

int main() {
    
    int min_num = 1;
    int max_num = 100;
    int count = 1;
    cout << "I will guess your number (1-100) in seven guesses or less. You just need to tell me " <<
    "if my guess is (s)maller, (l)arger, or (c)orrect.\n\n";
    cout << "guess " << count << ":\n";
    cout << "Is your number " << (max_num + min_num) / 2 << "?\n";
    char user_reply;
    while(cin >> user_reply )
    {
        if(user_reply == 'c'){
            
            cout << "Thanks for playing.\n";
            break;
        }
        
        else if(user_reply == 'l')
        {
            min_num = ((max_num + min_num) / 2) + 1;
        }
        
        else if(user_reply == 's')
        {
            max_num = ((max_num + min_num) / 2) - 1;
        }
        
        else{
            cout << "That wasn't a valid response. Please use (s)maller, (l)arger, or (c)orrect.\n";
            count--; //reduce counter since invalid
        }
        count++;
        if(count > 7){
            cout << "That's odd, are you sure you picked a number within range? I used all my guesses.\n";
            break;
        }
        cout << "guess " << count << ":\n";
        cout << "Is your number " << (max_num + min_num) / 2 << "?\n";
        
    }
    
     return 0;
}
