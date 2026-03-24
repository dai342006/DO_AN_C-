class Solution {
public:
    bool judgeCircle(string moves) {

        int x = 0; // vị trí trái phải
        int y = 0; // vị trí lên xuống

        for(char c : moves){   // duyệt từng ký tự trong chuỗi

            if(c == 'U')
                y++;           // đi lên
            else if(c == 'D')
                y--;           // đi xuống
            else if(c == 'L')
                x--;           // sang trái
            else if(c == 'R')
                x++;           // sang phải
        }

        // nếu quay lại vị trí ban đầu
        if(x == 0 && y == 0)
            return true;

        return false;
    }
};