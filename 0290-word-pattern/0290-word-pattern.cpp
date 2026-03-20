class Solution {
public:
    bool wordPattern(string pattern, string s) {

        // tách các từ trong chuỗi s
        vector<string> words;
        string word;
        stringstream ss(s);

        while(ss >> word){
            words.push_back(word);
        }

        // nếu số ký tự pattern khác số từ thì sai
        if(pattern.size() != words.size())
            return false;

        // map pattern → word
        unordered_map<char,string> p2w;

        // map word → pattern
        unordered_map<string,char> w2p;

        for(int i = 0; i < pattern.size(); i++){

            char p = pattern[i];
            string w = words[i];

            // nếu pattern đã tồn tại
            if(p2w.count(p)){

                // kiểm tra mapping có giống không
                if(p2w[p] != w)
                    return false;
            }
            else{
                p2w[p] = w;
            }

            // kiểm tra mapping ngược
            if(w2p.count(w)){

                if(w2p[w] != p)
                    return false;
            }
            else{
                w2p[w] = p;
            }
        }

        return true;
    }
};