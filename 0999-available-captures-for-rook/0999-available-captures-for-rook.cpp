class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {

        // biến lưu vị trí của quân xe R
        int rookRow = -1;
        int rookCol = -1;

        // ===============================
        // BƯỚC 1: TÌM VỊ TRÍ QUÂN XE R
        // ===============================

        // duyệt toàn bộ bàn cờ 8x8
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){

                // nếu ô hiện tại là quân xe
                if(board[i][j] == 'R'){
                    rookRow = i;   // lưu hàng
                    rookCol = j;   // lưu cột
                }
            }
        }

        // biến đếm số quân tốt có thể ăn
        int count = 0;


        // =====================================
        // BƯỚC 2: KIỂM TRA HƯỚNG LÊN (UP)
        // =====================================

        // bắt đầu từ ô phía trên quân xe
        for(int i = rookRow - 1; i >= 0; i--){

            // nếu gặp quân tượng B thì bị chặn
            if(board[i][rookCol] == 'B'){
                break; // dừng lại
            }

            // nếu gặp quân tốt p thì ăn được
            if(board[i][rookCol] == 'p'){
                count++; // tăng số quân ăn được
                break;   // ăn xong thì dừng hướng này
            }
        }


        // =====================================
        // BƯỚC 3: KIỂM TRA HƯỚNG XUỐNG (DOWN)
        // =====================================

        // bắt đầu từ ô phía dưới quân xe
        for(int i = rookRow + 1; i < 8; i++){

            if(board[i][rookCol] == 'B'){
                break;
            }

            if(board[i][rookCol] == 'p'){
                count++;
                break;
            }
        }


        // =====================================
        // BƯỚC 4: KIỂM TRA HƯỚNG TRÁI (LEFT)
        // =====================================

        for(int j = rookCol - 1; j >= 0; j--){

            if(board[rookRow][j] == 'B'){
                break;
            }

            if(board[rookRow][j] == 'p'){
                count++;
                break;
            }
        }


        // =====================================
        // BƯỚC 5: KIỂM TRA HƯỚNG PHẢI (RIGHT)
        // =====================================

        for(int j = rookCol + 1; j < 8; j++){

            if(board[rookRow][j] == 'B'){
                break;
            }

            if(board[rookRow][j] == 'p'){
                count++;
                break;
            }
        }


        // =====================================
        // TRẢ VỀ KẾT QUẢ
        // =====================================

        return count;
    }
};