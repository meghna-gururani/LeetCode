class Solution {
    public int maxOperations(int[] nums, int k) {
        HashMap<Integer,Integer>freq=new HashMap<>();
        int operations=0;
        for(int num:nums){
            int com=k-num;
            if(freq.getOrDefault(com,0)>0){
               operations++;
               freq.put(com,freq.getOrDefault(com,0)-1);
            }
            else{
              freq.put(num,freq.getOrDefault(num,0)+1);
            }
        }
        return operations;
    }
}