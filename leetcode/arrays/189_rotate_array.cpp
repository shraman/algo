class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> res(nums.size(),0);
        int n = nums.size();
        for(int i=0; i<n; i++){
            res[(i+k)%n] = nums[i];
        }
        nums = res;
    }
};

// without extra memory


class Solution {
public:
    void swap(vector<int>& nums,int start, int end){
        int temp;
        while(start<end){
            temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int steps = k % n;
        swap(nums,0,n-1);
        swap(nums,0,steps-1);
        swap(nums,steps,n-1);
    }
};