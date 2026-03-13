class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
      int maxele=*max_element(nums.begin(), nums.end());
      int start=1;
       int end=maxele;
        int ans=maxele;
        while(start<=end){
            int mid=(start+end)/2;
            int sum=0;
            for(int i = 0;i< nums.size(); i++)
            {
                int divi=nums[i]/mid;
                if(nums[i] % mid != 0)
                {
                 divi++;
                }
                sum=sum+divi;
            }
            if(sum>threshold)
            {
                start= mid+1;
            }
            else
            {
                ans=mid;
                end= mid-1;
            }
        }
        return ans;
    }
};