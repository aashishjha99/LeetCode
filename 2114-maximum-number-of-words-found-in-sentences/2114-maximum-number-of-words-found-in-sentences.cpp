class Solution {
public:
    
    int countWords(string str) {
        
        int  ans = 1;
        for(int i = 0 ;i <str.size();i++) {
            
            if(str[i]==' ') {
                
                ans++;
            }
        }
        
        return ans;
        
    }
    
    int mostWordsFound(vector<string>& sentences) {
        
        int finalans = 0;
        
        for(int i = 0;i <sentences.size();i++){
            
            finalans = max(finalans,countWords(sentences[i]));
            
           
        }
        
        return finalans;
    }
};