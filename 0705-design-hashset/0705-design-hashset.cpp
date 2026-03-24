class MyHashSet {
private:
    vector<bool> hashSet; // dùng vector<bool> lưu trạng thái key có hay không
    int maxVal = 1000000; // giả sử key trong khoảng [0, 10^6]
    
public:
    // Khởi tạo hash set
    MyHashSet() {
        hashSet.resize(maxVal + 1, false); // tất cả key ban đầu = false
    }
    
    // Thêm key vào set
    void add(int key) {
        hashSet[key] = true; // đánh dấu key đã tồn tại
    }
    
    // Xóa key khỏi set
    void remove(int key) {
        hashSet[key] = false; // đánh dấu key không tồn tại
    }
    
    // Kiểm tra key có tồn tại hay không
    bool contains(int key) {
        return hashSet[key]; // true nếu tồn tại, false nếu không
    }
};

/**
 * Ví dụ sử dụng:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(5);        // thêm 5
 * obj->remove(5);     // xóa 5
 * bool param_3 = obj->contains(5); // kiểm tra 5 → false
 */