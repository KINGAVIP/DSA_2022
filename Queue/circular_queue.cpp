class CircularQueue{
    public:
    // Initialize your data structure.
    int *arr;
    int front;
    int rear;
    int size;
    CircularQueue(int n){
        size=n;
        arr=new int[size];
        rear=front=-1;
        // Write your code here.
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        if((rear==size-1 && front==0) || rear==(front-1)%(size-1))
            return false;
        if(front==-1)
        {
            rear++;
            front++;
         }
        else if(rear==size-1 && front!=0)
        {
            rear=0;    
        }
        else {
            rear++;
        }
        arr[rear]=value;
        
        return true;
        // Write your code here.
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        if(front==-1)
            return -1;
        int temp=arr[front];
        if(front==rear)
        {
            front=rear=-1;
        }
        else if(front==size-1)
            front=0;
        else
            front++;
        return temp;
        // Write your code here.
    }
};