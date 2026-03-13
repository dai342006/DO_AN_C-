class Solution {
public:
    int convertTime(string current, string correct) {

        // chuyển current sang phút
        int cur = stoi(current.substr(0,2)) * 60 + stoi(current.substr(3,2));

        // chuyển correct sang phút
        int cor = stoi(correct.substr(0,2)) * 60 + stoi(correct.substr(3,2));

        int diff = cor - cur;

        int count = 0;

        count += diff / 60;
        diff %= 60;

        count += diff / 15;
        diff %= 15;

        count += diff / 5;
        diff %= 5;

        count += diff;

        return count;
    }
};