template<typename T>
class StackUsingArr {
    T *data;
    int nextIdx ;
    int capacity ;

  public:
    StackUsingArr(){
    data = new T[4];
    nextIdx = 0;
    capacity = 4;
    }

    int size(){
        return nextIdx;
    }
    bool isEmpty(){
        return nextIdx == 0;
    }
    void push(T element){
        if(nextIdx == capacity){
        T *newdata = new T[2*capacity];
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
    T pop(){
        if (isEmpty()){
            cout<< " STACK IS EMPTY"<<endl;
            return 0;
            }
        nextIdx--;
        return data[nextIdx];
    }

    T top(){
        if(isEmpty()){
            cout<<"STACK IS EMPTY"<<endl;
            return 0;
        }
        return data[nextIdx-1];
    }
};
