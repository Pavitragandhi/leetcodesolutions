class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string merge1;
        string merge2;
        
        for(int i = 0; i<word1.size(); i++){
            merge1 += word1[i];
        }
        
        for(int i = 0; i<word2.size(); i++){
            merge2 += word2[i];
        }
        
        if(merge1 == merge2){
            return true;
        }
        else{
            return false;
        }
    }
};