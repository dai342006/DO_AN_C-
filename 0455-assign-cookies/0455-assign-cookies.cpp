class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        // sắp xếp độ tham của trẻ
        sort(g.begin(), g.end());

        // sắp xếp kích thước cookie
        sort(s.begin(), s.end());

        int i = 0; // con trỏ trẻ em
        int j = 0; // con trỏ cookie

        // duyệt khi còn trẻ và còn cookie
        while(i < g.size() && j < s.size()){

            // nếu cookie đủ lớn cho trẻ
            if(s[j] >= g[i]){
                i++; // trẻ này được thỏa mãn
            }

            // cookie này đã dùng → chuyển cookie tiếp
            j++;
        }

        // i là số trẻ được thỏa mãn
        return i;
    }
};