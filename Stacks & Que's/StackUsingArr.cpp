#include<climits>
#include<iostream>
using namespace std;
class StackUsingArr {
    int *data;
    int nextIdx ;
    int capacity ;

  public:
    StackUsingArr(){
    data = new int[4];
    nextIdx = 0;
    capacity = 4;
    }

    int size(){
        return nextIdx;
    }
    bool isEmpty(){
        return nextIdx == 0;
    }
    void push(int element){
        if(nextIdx == capacity){
        int *newdata = new int[2*capacity];
        for(int i =0;i<capacity;i++){
            newdata[i] = data[i];
        }
        capacity *=2;
        delete [] data;
        data = newdata;
        capacity *=2;
        }
        data[nextIdx] = element;
        nextIdx++;
        }
    int pop(){
        if (isEmpty()){
            cout<< " STACK IS EMPTY"<<endl;
            return INT_MIN;
            }
        nextIdx--;
        return data[nextIdx];
    }

    int top(){
        if(isEmpty()){
            cout<<"STACK IS EMPTY"<<endl;
            return INT_MIN;
        }
        return data[nextIdx-1];
    }
};
int main(){
    StackUsingArr s;
    s.push(100);
    s.push(120);
    s.push(103);
    s.push(104);
    s.push(105);

    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    //cout<<s.getSize()<<endl;
    cout<<s.isEmpty()<<endl;

}
