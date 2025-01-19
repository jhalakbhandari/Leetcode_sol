#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data= val;
        next=NULL;
    }
};
class queue{
    node* front;
    node* back;
    public:
    queue(){
        front=NULL;
        back=NULL;
    }

    void push(int x){
    node* n = new node(x);

    if(front == NULL && back == NULL){
        back=n;
        front=n;
        return;
    }
    back->next=n;
    back=n;
    }
    void pop(){
        if(front==NULL){
            cout<<"Queue underflow"<<endl;
            return;
        }
        node* todelete=front;
        front=front->next;
         if (front == NULL) {
            back = NULL;
        }

        delete todelete;
    }
    int peek(){
         if(front==NULL){
            cout<<"No element in queue"<<endl;
            return -1;
        }
        return front->data;
    }
    bool empty(){
          if(front==NULL){
            return true;
        }
        return false;
    }
};

int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    // Displaying the front element and popping elements
    cout << q.peek() << endl; // Expected Output: 1
    q.pop();

    cout << q.peek() << endl; // Expected Output: 2
    q.pop();

    cout << q.peek() << endl; // Expected Output: 3
    q.pop();

    cout << q.peek() << endl; // Expected Output: 4
    q.pop();

    cout << q.peek() << endl; // Expected Output: 5
    q.pop();

    // Now the queue should be empty, checking for emptiness
    if (q.empty()) {
        cout << "Queue is empty!" << endl;  // Expected Output: "Queue is empty!"
    }

    // Trying to peek or pop when the queue is empty
    q.peek();  // Expected Output: No element in queue
    q.pop();   
    return 0;
}