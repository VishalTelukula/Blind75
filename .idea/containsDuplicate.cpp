class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(nums[i] == nums[j]){
                    count++;
                }
                
                
            }
            if(count>=2){
            return true;}
        }
        
        return false
        ;
        
            
    }
};
////////////////////////////bruteForce///////////////////////////////////
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int it : nums){
            // as this is unordered this will always takes int
            map[it]++;
            if(map[it] >=2){ // if any element repeats twice
                return true;
            }
        }
        return false;
        
        
    }
};
/////////////////////////////////optimal