class Solution {
public:
    int maxProduct(int* nums, int size) {
        int i = 0;
        int j;
        for(int k = 0; k < size;k++)
        {
            if(nums[k] > i)
            {
                j = i;
                i = nums[k];
            }
            else if(nums[k] > j) j = nums[k];
        }
        return(i * j);
    }
};

