class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<int> lpCount(26,0); // count chữ cái trong licensePlate

        // đếm chữ cái trong licensePlate (ignore số, ignore space)
        for(char c : licensePlate){
            if(isalpha(c)){
                lpCount[tolower(c) - 'a']++;
            }
        }

        string ans = "";
        for(string &word : words){
            vector<int> wCount(26,0);
            for(char c : word){
                wCount[tolower(c) - 'a']++;
            }

            // kiểm tra word có thỏa licensePlate không
            bool ok = true;
            for(int i = 0; i < 26; i++){
                if(lpCount[i] > wCount[i]){
                    ok = false;
                    break;
                }
            }

            // cập nhật answer nếu thỏa và ngắn hơn
            if(ok){
                if(ans == "" || word.size() < ans.size())
                    ans = word;
            }
        }

        return ans;
    }
};