class Solution {
    public int compress(char[] chars) {
       int r=0,w=0;
       while(r<chars.length){
        char ch=chars[r];
        int count=0;
        while(r<chars.length && ch==chars[r]){
            r++;
            count++;
        }
        chars[w++]=ch;
        if(count>1){
            String c=String.valueOf(count);
            for(char cc:c.toCharArray()) chars[w++]=cc;
        }
       }
       return w;
    }
}