class MyCircularQueue {
    int *arr;
    int front;
    int rear;
    int size;
public:
    MyCircularQueue(int k) {
        size=k;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    
    bool enQueue(int value) {
        if(front==-1){
            front=0;
            rear=0;
            arr[rear]=value;
            return true;
        }
        rear++;
        if(rear==size)
            rear=0;
        if(rear==front){
            rear--;
            if(rear==-1)
                rear=size-1;
            return false;
        }
        arr[rear]=value;
        return true;
    }
    
    bool deQueue() {
        if(front==-1)
            return false;
        if(front!=-1 && front==rear){
            front=rear=-1;
            return true;
        }
        front++;
        if(front==size){
            front=0;
        }
        return true;
    }
    
    int Front() {
        if(front==-1)
            return -1;
        return arr[front];
    }
    
    int Rear() {
        if(front==-1)
            return -1;
        return arr[rear];
    }
    
    bool isEmpty() {
        if(front==-1)
            return 1;
        return 0;
    }
    
    bool isFull() {
        if(front==0 && rear==size-1)
            return true;
        if(rear==front-1 || rear==(front-1)%(size-1))
            return true;
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */