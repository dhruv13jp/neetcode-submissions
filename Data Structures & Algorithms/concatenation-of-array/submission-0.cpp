class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        vector<int> nums2(size*2);
        for(int i =0;i<size;i++){
            nums2[i]=nums[i];
            nums2[i+size]=nums[i];
        }
            return nums2;
        }
    };
