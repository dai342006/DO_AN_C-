class Solution {
public:
    int distributeCandies(vector<int>& candyType) {

        // set dùng để lưu các loại kẹo khác nhau
        unordered_set<int> types;

        // duyệt mảng và đưa từng loại kẹo vào set
        for(int candy : candyType){
            types.insert(candy);
        }

        // số loại kẹo khác nhau
        int uniqueTypes = types.size();

        // tổng số kẹo / 2 (số kẹo được ăn)
        int maxEat = candyType.size() / 2;

        // kết quả là giá trị nhỏ hơn giữa hai số
        return min(uniqueTypes, maxEat);
    }
};