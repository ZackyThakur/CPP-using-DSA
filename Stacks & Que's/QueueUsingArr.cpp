#include<iostream>
using namespace std;

template<typename T>
class queueUsingArr{
    T* data;
    int size;
    int fI;
    int nI;
    int capacity;

public:
queueUsingArr(int s){
    data = new T[s];
    nI = 0;
    fI = -1;
    size= 0;
    capacity = s;
    }
    int getSize(){
        return size;
    }
    void enqueue(T element){
        if(size == capacity){
            cout<<"Queue is Full"<<endl;
            return;
        }
        data[nI] = element;
        nI = (nI + 1) % capacity;
        if(fI == -1){
            fI =0;
        }
        size++;
    }
    bool isEmpty(){
        return fI == -1;
    }
    T dequeue(){
        if(isEmpty()){
            return 0;
        }
        T ans  = data[fI];
        fI = (fI + 1) % capacity;
        size--;
        if(size ==0){
            fI = -1;
            nI = 0;
        }
        return ans;
    }
    T front(){
        if(isEmpty()){
            return 0;
        }
        return data[fI];
    }
};

int main(){
    queueUsingArr<int> s(5);
    s.enqueue(10);
    s.enqueue(20);
    s.enqueue(30);
    s.enqueue(40);
    s.enqueue(50);
    s.enqueue(60);

    cout<<s.front()<<endl;
    cout<<s.dequeue()<<endl;
    cout<<s.dequeue()<<endl;
    cout<<s.dequeue()<<endl;

    cout<<s.getSize()<<endl;
    cout<<s.isEmpty()<<endl;
}
