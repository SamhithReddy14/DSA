class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr= 0, maxtilNow= INT_MIN; 
        for(int num: nums){
            curr= max(num, curr+num); 
            maxtilNow= max(maxtilNow, curr); 
        }

        return maxtilNow;
    }
};