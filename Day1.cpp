//Two Sum 
//(Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.)

//Optimised Aproach => Unorderd Map (Using Hash Table)
// Step1: 



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;  //Created Unordered_map 
       
        for(int i = 0; i < nums.size(); i++){     //traversing array
            if(mp.find(target - nums[i]) == mp.end())         //if required element not found in hash table then add 
                mp[nums[i]] = i;
            else
                return {mp[target - nums[i]], i};        //if result found then return{requiredElememtIndex , ElementIndex}
        }
 
        return {-1, -1};    //if number ie. target-(current number) not found in entire array then return {-1, -1}
    }
};
