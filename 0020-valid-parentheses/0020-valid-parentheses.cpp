class Solution {
public:
    bool isValid(string s) {

        stack<char> st;

        for(char c : s){

            // nếu là ngoặc mở
            if(c == '(' || c == '{' || c == '['){
                st.push(c);
            }

            else{

                // nếu stack rỗng -> sai
                if(st.empty()){
                    return false;
                }

                char top = st.top();
                st.pop();

                // kiểm tra có khớp không
                if(c == ')' && top != '(') return false;
                if(c == '}' && top != '{') return false;
                if(c == ']' && top != '[') return false;
            }
        }

        // nếu stack rỗng thì hợp lệ
        return st.empty();
    }
};