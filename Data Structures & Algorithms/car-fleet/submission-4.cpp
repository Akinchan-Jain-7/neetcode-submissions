class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        int n = position.size();
        vector<pair<int,int>> cars;

        for(int i = 0; i < n; i++)
            cars.push_back({position[i], speed[i]});

        sort(cars.begin(), cars.end(), greater<pair<int,int>>());

        int fleets = 0;
        double prevTime = 0;

        for(auto &[pos, sp] : cars) {
            double time = (double)(target - pos) / sp;

            if(time > prevTime) {
                fleets++;
                prevTime = time;
            }
        }

        return fleets;
    }
};