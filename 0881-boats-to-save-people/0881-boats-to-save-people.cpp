class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {

        // sắp xếp cân nặng tăng dần
        sort(people.begin(), people.end());

        int left = 0;                         // người nhẹ nhất
        int right = people.size() - 1;        // người nặng nhất
        int boats = 0;                        // số thuyền

        while(left <= right){

            // nếu người nhẹ + người nặng vẫn <= limit
            if(people[left] + people[right] <= limit){
                left++;     // cho người nhẹ lên thuyền
                right--;    // cho người nặng lên thuyền
            }
            else{
                // người nặng phải đi một mình
                right--;
            }

            // mỗi vòng dùng 1 thuyền
            boats++;
        }

        return boats;
    }
};