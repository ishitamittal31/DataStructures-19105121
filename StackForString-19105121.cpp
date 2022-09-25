#include <bits/stdc++.h>
using namespace std;
// We're using vector(since the size is adjustable unlike array) to make the stack and apply operations
class StackString{
    
    vector<string> vec; // declaring the vector vec, making it private
    public:
    
        void push(string st){ // push function to push it in the vector 
            vec.push_back(st);
        }
        void pop(){ // pop function to pop it from the vector
            vec.pop_back();
        }
        string top(){
            if(vec.size() != 0){ // if the vector is not empty than we return the last element inserted in vector
                return vec[vec.size()-1];
            }
            else{
                cout<<"Invalid operation on empty stack!";
            }
        }
        int getSize(){
            return vec.size(); //return the size of the stack, added property.
        }
    
};



int main()
{
    StackString st; // creating stack by making object of StackString
    st.push("apple");
    st.push("banana");
    st.push("orange");
    st.push("ishita");
    st.pop();
    cout<<st.top();
    // Thus the stack is implemented successfully.
    return 0;
}
