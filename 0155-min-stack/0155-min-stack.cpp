class MinStack {
public:

    stack<int> st;      // stack lưu dữ liệu
    stack<int> minSt;   // stack lưu giá trị nhỏ nhất

    MinStack() {
        
    }
    
    void push(int val) {

        st.push(val);

        // nếu stack min rỗng hoặc val nhỏ hơn min hiện tại
        if(minSt.empty() || val <= minSt.top()){
            minSt.push(val);
        }
        else{
            // lặp lại giá trị min hiện tại
            minSt.push(minSt.top());
        }
    }
    
    void pop() {

        st.pop();
        minSt.pop();
    }
    
    int top() {

        return st.top();
    }
    
    int getMin() {

        return minSt.top();
    }
};