class Solution {
public:
       int removeDuplicates(vector<int>& nums) {
       int s=0,f=1;
       while(f<nums.size()). //Traversing through the array
           {
              if(nums[s]!=nums[f]) //finding the unique elements
              {
                  s++;  // no of unique elements
                  nums[s]=nums[f];
              }
        f+=1;
       }
       return s+1;
       }
};
