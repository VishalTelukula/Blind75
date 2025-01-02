class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i] + nums[j] == target ){
                    return{i,j};
                }
            }
        }
        return {};
    }
};
/////////////////////bruteForce/////////////////////////////
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> maps;
        for(int i=0;i<n;i++){
            int complement = target-nums[i];
            if(maps.find(complement) != maps.end()){
                return {maps[complement],i};
            }

            maps[nums[i]] = i;


        }
        return {};

    }
};
/////////////////////////////////optimal///////////////////