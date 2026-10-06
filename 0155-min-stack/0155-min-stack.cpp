class MinStack {
public:stack<int> st;
multiset<int> mt;

    MinStack() {
        
    }
    
    void push(int value) {
        mt.insert(value);
        st.push(value);
    }
    
    void pop() {
        mt.erase(mt.find(st.top()));
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return *mt.begin();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */