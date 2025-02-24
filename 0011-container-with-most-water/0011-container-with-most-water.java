class Solution {
    public int maxArea(int[] height) {
        int n=height.length;
        int i=0,j=n-1,max=0,area;
        while(i<j){
            if(height[i]<height[j]){
                area=(j-i)*height[i];
                i++;
            }
            else{
                area=(j-i)*height[j];
                j--;
            }
          if(area>max)
            max=area;
        }
        return max;
    }
}