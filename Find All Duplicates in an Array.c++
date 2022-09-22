class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums){
        
        sort(nums.begin(),nums.end());  // function use for sort
        
        vector<int>ans;
        
        for(int i = 0 ;i < nums.size() -1 ;i++){  // traverse the loop in size-1
            
            if( nums[i] == nums [i+1] ){ // condition check nums == nums[i+1] 
                
                ans.push_back( nums[i] ); //nums[i] insert kardo ans mai.
            }
        }return ans;
    }
};
