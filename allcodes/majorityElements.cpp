// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. 
// You may assume that the majority element always exists in the array.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxi = INT_MIN;
        int n= nums.size();
        unordered_map<int,int>hash;
        for(int i=0; i<n; i++){
            int a= nums[i];
           int r= ++hash[a];
           
            maxi = max(r, maxi);
            if(maxi > n/2 && maxi > 0){
                return a;
            }
        }
return 0;


    }
};