class Solution {
public:
    string removeDuplicates(string s) {

        stack<char> st;

        for(char c : s){

            // nếu stack không rỗng và ký tự trùng
            if(!st.empty() && st.top() == c){
                st.pop(); // xóa cặp trùng
            }
            else{
                st.push(c); // thêm ký tự
            }
        }

        // tạo chuỗi kết quả
        string result = "";

        while(!st.empty()){
            result = st.top() + result;
            st.pop();
        }

        return result;
    }
};