class Solution {
public:
    bool checkIfExist(vector<int>& arr) {

        // Tạo Hash Set để lưu các số đã duyệt
        unordered_set<int> seen;

        // Duyệt từng phần tử trong mảng
        for(int num : arr){

            // Kiểm tra xem num*2 đã xuất hiện chưa
            if(seen.count(num * 2)){
                return true;
            }

            // Kiểm tra xem num có phải gấp đôi số trước không
            // (num phải chia hết cho 2)
            if(num % 2 == 0 && seen.count(num / 2)){
                return true;
            }

            // Nếu chưa thỏa điều kiện thì thêm num vào set
            seen.insert(num);
        }

        // Nếu duyệt hết mà không tìm thấy
        return false;
    }
};