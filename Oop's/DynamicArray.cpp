#include<iostream>
using namespace std;

class dynamicArray{
    int *data;
    int capacity;
    int idx;

public:
    dynamicArray(){
        data = new int[5];
        idx =0;
        capacity=5;
    }
    dynamicArray(dynamicArray const &d){
        this->data = new int[d.capacity];
        for(int i =0;i<d.idx;i++){
            this->data[i]=d.data[i];
        }
        this -> idx = d.idx;
        this -> capacity = d.capacity;
    }
    void operator=(dynamicArray const &d){
        this->data = new int[d.capacity];
        for(int i =0;i<d.idx;i++){
            this->data[i]=d.data[i];
        }
        this -> idx = d.idx;
        this -> capacity = d.capacity;
    }
    void add(int element){
        if(idx == capacity){
            int *newData = new int[2*capacity];
            for(int i =0;i<capacity;i++){
                newData[i] = data[i];
            }
            delete []data;
            data = newData;
            capacity *= 2;
        }
        data[idx]=element;
        idx++;
    }

    int get(int i)const{
        if(idx>i){
            return data[i];
        }
        else
            return -1;
    }
    void add(int i , int element){
        if(i<idx){
            data[i]=element;
        }
        else if(i==idx){
            add(element);
        }
        else{
            return;
        }
    }
    void print(){
        for(int i =0;i<idx;i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;
    }
};
int main(){
    dynamicArray d1;
    d1.add(10);
    d1.add(20);
    d1.add(25);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.print();
    dynamicArray d2(d1);
    dynamicArray d3;
    d3 =d1;
    d1.add(0,11);
    d2.print();
    d3.print();

}
