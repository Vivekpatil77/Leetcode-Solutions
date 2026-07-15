class MyQueue {
public:
    stack<int> a;
    stack<int> b;
    MyQueue() {
        
        
    }
    
    void push(int x) {
        if(!a.empty())
        {
            a.push(x);
        }
        else{
            while(!b.empty())
            {
                a.push(b.top());
                b.pop();
                
            }
            a.push(x);
        }
        return;
        
    }
    
    int pop() {
        if(!a.empty()){
        while(!a.empty())
        {
            b.push(a.top());
            a.pop();
        }
        int val = b.top();
        b.pop();
        return val;
        }
        else{
            int val = b.top();
            b.pop();
            return val;
        }
        return 0;
        
    }
    
    int peek() {
        if(!a.empty()){
        while(!a.empty())
        {
            b.push(a.top());
            a.pop();
        }return b.top();
        }
        else{
            return b.top();
        }
          return 0;
        
    }
    
    bool empty() {
        if(a.empty()&& b.empty())
        {
            return true;
        }
          return false;
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */