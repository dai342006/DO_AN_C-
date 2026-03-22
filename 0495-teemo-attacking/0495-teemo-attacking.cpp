class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {

        int total = 0;

        // duyệt các lần tấn công
        for(int i = 0; i < timeSeries.size() - 1; i++){

            int diff = timeSeries[i+1] - timeSeries[i];

            // nếu không bị chồng độc
            if(diff >= duration){
                total += duration;
            }
            else{
                // bị chồng độc
                total += diff;
            }
        }

        // cộng duration của lần tấn công cuối
        total += duration;

        return total;
    }
};