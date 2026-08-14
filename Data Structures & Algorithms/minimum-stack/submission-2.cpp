class MinStack {
public:
stack<int> element;
stack<int> minimum;
    MinStack() {
        
    }
    
    void push(int val) {
        if(minimum.empty() || val<minimum.top()) minimum.push(val);
        else {
            minimum.push(minimum.top());
        }
        element.push(val);
        
    }
    
    void pop() {
        element.pop();
        minimum.pop();
    }
    
    int top() {
        return element.top();
        
    }
    
    int getMin() {
        return minimum.top();    
    }
};
