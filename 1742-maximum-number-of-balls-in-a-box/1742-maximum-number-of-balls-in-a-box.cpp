class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        std::unordered_map<int, int> box_ball_count;

        for (int i = lowLimit; i<=highLimit; i++) {
            int box_number = BoxNumber(i);
            box_ball_count[box_number]++;
        }

        int max_count = 0;
        for (const auto values : box_ball_count) {
            max_count = std::max(max_count, values.second);
        }

        return max_count;
    }

private:
    int BoxNumber(int number) {
        int total_sum = 0;
        while (number > 0) {
            int remainder = number % 10;
            total_sum += remainder;
            number /= 10;
        }
        return total_sum;
    }
};