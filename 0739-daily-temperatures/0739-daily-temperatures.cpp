class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        int n = temperatures.size();

        vector<int> result(n, 0); // mặc định 0
        stack<int> st;            // lưu index

        for(int i = 0; i < n; i++){

            // nếu nhiệt độ hôm nay lớn hơn hôm trước
            while(!st.empty() && temperatures[i] > temperatures[st.top()]){

                int index = st.top();
                st.pop();

                result[index] = i - index;
            }

            // lưu index vào stack
            st.push(i);
        }

        return result;
    }
};