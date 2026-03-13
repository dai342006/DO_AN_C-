class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = INT_MAX;  // giá thấp nhất
        int maxProfit = 0;       // lợi nhuận lớn nhất

        for(int price : prices){

            // cập nhật giá thấp nhất
            if(price < minPrice){
                minPrice = price;
            }

            // tính lợi nhuận nếu bán hôm nay
            int profit = price - minPrice;

            // cập nhật lợi nhuận lớn nhất
            if(profit > maxProfit){
                maxProfit = profit;
            }
        }

        return maxProfit;
    }
};
