#include<iostream>
using namespace std;
class Queue {
public:
    int *arr;
    int fronts,rear,size;
    Queue(int n) {
        size=n;
        arr=new int[size];
        fronts=0;
        rear=0;
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(rear==fronts)
            return true;
        return false;
        // Implement the isEmpty() function
    }

    void enqueue(int data) {
        if(rear==size)
           {
            cout<<"overflow";
            return;
           }
        arr[rear]=data;
        rear++;
        // Implement the enqueue() function
    }

    int dequeue() {
        if(rear==fronts)
            return -1;
        
        int temp=arr[fronts];
        arr[fronts]=-1;
        fronts++;
        if(rear==fronts)
        {
            fronts=0;
            rear=0;
        }
        int i=fronts;
        while(i<rear)
        {
            arr[i-1]=arr[i];
            i++;
        }
        fronts-=1;
        rear-=1;
        return temp;
        // Implement the dequeue() function
    }

    int front() {
        if(rear==fronts)
            return -1;
        return arr[fronts];
        // Implement the front() function
    }
    void display()
    {
        for(int i=fronts;i<rear;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main()
{
    Queue q(5);
    q.enqueue(2);
    q.enqueue(5);
    q.enqueue(3);
    q.dequeue();
    q.enqueue(8);
    q.enqueue(1);
    q.enqueue(7);
    q.display();
}