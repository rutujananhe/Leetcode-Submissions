class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0, i=s.size()-1;
        while(s[i]==' '){
            i--;
        }
        for(int j=i;j>=0;j--){
            if(s[j]==' '){
                return count;
            }
            else { count++;}
        }
        return count;
    }
};