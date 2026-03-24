class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> scores; // lưu điểm hợp lệ

        for(const string &op : operations){

            if(op == "C"){               // xóa điểm gần nhất
                if(!scores.empty())
                    scores.pop_back();
            } 
            else if(op == "D"){          // gấp đôi điểm gần nhất
                if(!scores.empty())
                    scores.push_back(2 * scores.back());
            } 
            else if(op == "+"){          // tổng 2 điểm gần nhất
                int n = scores.size();
                if(n >= 2)
                    scores.push_back(scores[n-1] + scores[n-2]);
                else if(n == 1)
                    scores.push_back(scores[0]);
            } 
            else {                       // số nguyên
                scores.push_back(stoi(op));
            }
        }

        // tính tổng điểm
        int total = 0;
        for(int s : scores)
            total += s;

        return total;
    }
};