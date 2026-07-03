class MinStack {

    stack<int> mainStack;
    stack<int> minStack;
     public:
    MinStack() {
        
    }
   
    
    void push(int val) {
        mainStack.push(val);
        if(minStack.empty()) minStack.push(val);
        else val<minStack.top()? minStack.push(val) : minStack.push(minStack.top());
    }
    
    void pop() {
        mainStack.pop();
        minStack.pop();
    }
    
    int top() {
        return mainStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
