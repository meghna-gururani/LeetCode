class Solution {
    public int trap(int[] height) {
        int n=height.length;
        int prefix[]=new int[n];
        int suffix[]=new int[n];
        prefix[0]=height[0];
        suffix[n-1]=height[n-1];
        for(int i=1;i<n;i++){
            prefix[i]=Math.max(height[i],prefix[i-1]);
        }
        for(int j=n-2;j>=0;j--){
            suffix[j]=Math.max(suffix[j+1],height[j]);
        }
        int total=0;
        for(int i=0;i<n;i++){
         if(height[i]<prefix[i] && height[i]<suffix[i]){
          total+=Math.min(prefix[i],suffix[i])-height[i];
         }
        }
        return total;
    }
}