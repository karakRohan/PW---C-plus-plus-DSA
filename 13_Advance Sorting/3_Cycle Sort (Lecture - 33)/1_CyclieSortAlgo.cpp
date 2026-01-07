#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {4,1,6,2,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Cycle Sort
    int i = 0;
    while(i<n){
        int correctIdx = arr[i] - 1;
        if(i==correctIdx) i++;
        else swap(arr[i],arr[correctIdx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// LeetCode - 268
// Method - 1
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<bool> check(n+1,false);
        for(int i=0;i<n;i++){
            int ele = nums[i];
            check[ele] = true;
        }
        for(int i=0;i<=n;i++){
            if(check[i]==false) return i;
        }
        return 100;
    }
};


// LeetCode - 268
// Method - 2
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while(i<n){
            int correctIdx = nums[i];
            if(correctIdx==i || nums[i]==n) i++;
            else swap(nums[i],nums[correctIdx]);
        } 
        for(int i=0;i<n;i++){
            if(nums[i] !=i) return i;
        }
        return n;
    }
};

// LeetCode - 268
// Method - 3
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int actualSum = n*(n+1)/2;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += nums[i];
        }
        return actualSum - sum;
    }
};


// LeetCode - 287
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while(i<n){
            int correctIdx = nums[i];
            if(nums[correctIdx]==nums[i]) return nums[i];
            else swap(nums[i],nums[correctIdx]);
        }
        return 1000;
    }
};


// LeetCode - 448
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while(i<n){
            int correctIdx = nums[i] - 1;
            if(nums[correctIdx] == nums[i]) i++;
            else swap(nums[i],nums[correctIdx]);
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1) ans.push_back(i+1);
        }
        return ans;
    }
};



// LeetCode - 41
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        //{1,1}
        while(i<n){
            if(nums[i]<=0) i++;
            else if(nums[i]<=0 || nums[i]>n || nums[i]==i+1 || nums[nums[i]-1]==nums[i]) i++;
        }
        for(int i=0;i<n;i++){
            if(nums[i] != i+1) return i+1;
        }
        return n+1;
    }
};