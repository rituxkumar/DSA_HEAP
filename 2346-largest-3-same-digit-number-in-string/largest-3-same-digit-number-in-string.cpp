class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.size();
        char maxCh = ' ';
        for(int i = 2;i<n;i++){
            if(num[i] == num[i-1] && num[i] == num[i-2]){
                maxCh = max(maxCh,num[i]);
            }
        }
        if(maxCh == ' '){
            return "";
        }
        return string(3,maxCh);
    }
};