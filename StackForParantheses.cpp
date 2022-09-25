#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string stringInput;
    cout<<"Enter String";
    cin>>stringInput; //take input from string
    stack<char> stackForParantheses;
    int i=0; //to iterate over the string
    while(i < stringInput.length()){
        
        char currentCharacter = stringInput[i]; // the i-th character
        
        if(currentCharacter == '('){ // if it is open bracket, push in stack
            stackForParantheses.push('(');
        }
        else if(currentCharacter == ')'){ 
            if(stackForParantheses.empty()){ // if the stack is empty then the string is not valid
                cout<<"The string does not have valid set of parantheses!";
                return 0; // end the program
            }
            else if(stackForParantheses.top() == '('){
                stackForParantheses.pop(); //pop since we got one valid pair
            }
           
        }
        i++; 
    }
    if(!stackForParantheses.empty()){ // if it is not empty, the pairs are incomplete
        cout<<"The string does not have valid set of parantheses!";
    }
    else{
        cout<<"The string has valid set of parantheses!";
    }
    return 0;
}
