class myStack {
private:
    int top;
    int size;
    int *arr;
public:
    myStack(int n) {
        size = n;
        top = -1;
        arr = new int[n];
    }
    bool push(int x) {
        if (top == size - 1)
            return false;
        arr[++top] = x;
        return true;
    }
    int pop() {
        if (top == -1)
            return -1;
        return arr[top--];
    }
    int peek() {
        if (top == -1)
            return -1;
        return arr[top];
    }
    bool isEmpty() {
        return (top == -1);
    }
    bool isFull() {
        return (top == size - 1);
    }
};