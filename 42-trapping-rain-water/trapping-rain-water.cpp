class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n == 0) return 0;

        int leftmax = 0, rightmax = 0;
        int maxheight = height[0], index = 0, water = 0;

        // Find the index of the maximum height bar
        for(int i = 1; i < n; i++){
            if(height[i] > maxheight){
                maxheight = height[i];
                index = i;
            }
        }

        // Calculate water on the left side of max bar
        leftmax = height[0];
        for(int i = 1; i < index; i++){
            if(height[i] < leftmax){
                water += leftmax - height[i];
            } else {
                leftmax = height[i];
            }
        }

        // Calculate water on the right side of max bar
        rightmax = height[n-1];
        for(int i = n-2; i > index; i--){
            if(height[i] < rightmax){
                water += rightmax - height[i];
            } else {
                rightmax = height[i];
            }
        }

        return water;
    }
};
