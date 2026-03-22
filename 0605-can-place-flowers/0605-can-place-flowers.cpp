class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        for(int i = 0; i < flowerbed.size(); i++){

            // kiểm tra ô hiện tại có trống không
            if(flowerbed[i] == 0){

                // kiểm tra bên trái
                bool left = (i == 0) || (flowerbed[i-1] == 0);

                // kiểm tra bên phải
                bool right = (i == flowerbed.size()-1) || (flowerbed[i+1] == 0);

                // nếu cả hai bên đều trống thì trồng được
                if(left && right){
                    flowerbed[i] = 1; // trồng hoa
                    n--;              // giảm số hoa cần trồng
                }
            }

            // nếu đã trồng đủ
            if(n <= 0){
                return true;
            }
        }

        return false;
    }
};