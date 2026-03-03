#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i = 0; i < s.size(); i++) {

            // Opening brackets push karo
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } 
            else {
                // Agar stack empty hai -> invalid
                if(st.empty()) return false;

                // Closing bracket check
                if(s[i] == ')') {
                    if(st.top() != '(') return false;
                    st.pop();
                }
                else if(s[i] == '}') {
                    if(st.top() != '{') return false;
                    st.pop();
                }
                else if(s[i] == ']') {
                    if(st.top() != '[') return false;
                    st.pop();
                }
            }
        }

        // Last me stack empty hona chahiye
        return st.empty();
    }
};