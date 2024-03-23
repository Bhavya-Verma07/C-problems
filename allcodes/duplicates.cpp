//finding duplicates


int findDuplicates(vector<int>& nums){
unordered_set<hash>h;
int n= nums.size();
for(int i=0; i<n; i++){
    if(h.find(nums[i]) !=h.end()){
        return nums[i];
    }
    h.insert(nums[i]);
}

return -1;
}