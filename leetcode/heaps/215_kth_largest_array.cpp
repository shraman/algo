class Solution {
public:
    // add first k elements to min_heap, iterate through next elements and if any element is greater than this replace it with root of the min_heap and heapify

    void min_heapify(vector<int>& heap, int index, int size){
        int least = index;
        int l = 2*index+1;
        int r = 2*index+2;
        
        if(l<size && heap[l] < heap[least] ) least = l;
        if(r<size && heap[r] < heap[least] ) least = r;
        
        if(least != index){
            int temp = heap[least];
            heap[least] = heap[index];
            heap[index] = temp;
            
            min_heapify(heap, least, size);
        }
    }
    
    int findKthLargest(vector<int>& nums, int k) {
        vector<int> heap;
        for(int i = 0; i < k; i++){
            heap.push_back(nums[i]);
        }
        for(int i = k/2-1; i>=0 ; i--){
            min_heapify(heap,i,k);
        }
        
        for(int i=k; i<nums.size();i++){
            if(nums[i]>heap[0]) heap[0] = nums[i];
            min_heapify(heap,0,k);
        }
        
        return heap[0];
        
    }
};