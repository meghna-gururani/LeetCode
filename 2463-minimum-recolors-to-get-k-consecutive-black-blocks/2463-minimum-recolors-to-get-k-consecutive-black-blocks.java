class Solution {
    public int minimumRecolors(String blocks, int k) {
        int min_count=Integer.MAX_VALUE;
        for(int i=0;i<blocks.length()-k+1;i++){
            int count=0;
            for(int j=i;j<i+k;j++){
                if(blocks.charAt(j)=='W')
                  count++;
            }
            if(count<min_count)
              min_count=count;
        }
        return min_count;
    }
}