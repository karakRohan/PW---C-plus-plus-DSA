// class Solution {
//     public:
//         void nextPermutation(vector<int>& nums) {
//             int n=nums.size();
//             int idx=-1;
//             //step-1: finding pivot index
//             for(int i=n-2;i>=0;i--)
//             {
//                 if(nums[i]<nums[i+1])
//                 {
//                     idx=i;
//                     break;
//                 }
//             }
//             if(idx==-1)//step-2: if array is already greatest
//             {
//                 reverse(nums.begin(),nums.end());
//                 return;
//             }
//             //step-3: sorting after pivot
//            int j = n - 1;
//             while (nums[j] <= nums[idx]) { // Find the rightmost element greater than nums[idx]
//                 j--;
//             }
    
//             // Step 4: Swap elements at idx and j
//             swap(nums[idx], nums[j]);
    
//             // Step 5: Reverse the remaining elements after idx
//             reverse(nums.begin() + idx + 1, nums.end());
//             return;
    
            
//         }
//     };