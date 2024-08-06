class Solution {
public:
    int minimumPushes(string word) {
        int k=0;
        int arr[26]={0};
        for(int i=0;i<word.size();i++){
            if(word[i]==-1){
                continue;
            }
            char ch=word[i];
            arr[k]=1;
            for(int j=i+1;j<word.size();j++){
                if(word[j]==ch){
                    arr[k]+=1;
                    word[j]=-1;
                }
            }
            k++;
        }
        int sum=0;
        int n=k;
        if(n==0){
            return 0;
        }
        sort(arr, arr + n, greater<int>());
        for(int i=0;i<n;i++){
            if(i<8){
                sum+=arr[i];
            }
            else if(i<16){
                sum+=2*arr[i];
            }
            else if(i<24){
                sum+=3*arr[i];
            }
            else{
                sum+=4*arr[i];
            }
        }
    return sum;
        
    }
};