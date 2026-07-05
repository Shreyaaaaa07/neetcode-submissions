class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int lp = 0, rp = height.size()-1;

        while(lp < rp){

            int wt = rp - lp;
            int ht = min(height[lp], height[rp]);

            int currWater = wt * ht;
            maxWater = max(maxWater , currWater);

            if(height[lp]< height[rp]){
                lp ++;

            }else{
                rp --;
            }
        }
        return maxWater;
    }
};
