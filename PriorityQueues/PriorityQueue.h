#include <vector>
class PriorityQueue{
    vector<int> pq;

public:
    PriorityQueue(){

    }

    bool isEmpty(){
        return pq.size()==0;
    }
    int getSize(){
        return pq.size();
    }
    int getMin(){
        if(isEmpty()){
            return 0;
        }
        return pq[0];
    }
    void insert(int element){
        pq.push_back(element);
        int childIdx = pq.size()-1;
        while(childIdx > 0){
            int parentIdx = (childIdx - 1)/2;
            if(pq[childIdx] < pq[parentIdx]){
                int temp = pq[childIdx];
                pq[childIdx] = pq[parentIdx];
                pq[parentIdx] = temp;
            }
            else{
                break;
            }
            childIdx = parentIdx;
        }
    }
    int removeMin(){
        int ans = pq[0];
        pq[0] = pq[pq.size()-1];
        pq.pop_back();

        int parentIdx = 0;
        int childIdx1 = 2*parentIdx +1;
        int childIdx2 = 2*parentIdx +2;
        while(childIdx1 < pq.size()){
            int minIdx = parentIdx;
            if(pq[minIdx] > pq[childIdx1]){
                minIdx = childIdx1;
            }
            if(pq[minIdx] > pq[childIdx2] && childIdx2 < pq.size()){
                minIdx = childIdx2;
            }
            if(minIdx == parentIdx){
                break;
            }
            int temp = pq[minIdx];
            pq[minIdx] = pq[parentIdx];
            pq[parentIdx] = temp;
            parentIdx = minIdx;
            childIdx1 = 2*parentIdx+1;
            childIdx2 = 2*parentIdx +2;
        }
        return ans;

    }
};
