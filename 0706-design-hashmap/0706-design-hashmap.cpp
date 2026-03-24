class MyHashMap {
private:
    vector<int> hashMap;      // dùng vector để lưu value
    int maxVal = 1000000;     // giả sử key trong khoảng [0, 10^6]
    
public:
    // Khởi tạo hashmap
    MyHashMap() {
        hashMap.resize(maxVal + 1, -1); // -1 nghĩa là key chưa tồn tại
    }
    
    // Thêm hoặc cập nhật giá trị cho key
    void put(int key, int value) {
        hashMap[key] = value;  // gán value cho key
    }
    
    // Lấy giá trị của key
    int get(int key) {
        return hashMap[key];   // trả về -1 nếu key chưa tồn tại
    }
    
    // Xóa key khỏi hashmap
    void remove(int key) {
        hashMap[key] = -1;     // đánh dấu key không tồn tại
    }
};

/**
 * Ví dụ sử dụng:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(1, 100);       // thêm key=1, value=100
 * int val = obj->get(1);  // trả về 100
 * obj->remove(1);          // xóa key=1
 * val = obj->get(1);      // trả về -1
 */