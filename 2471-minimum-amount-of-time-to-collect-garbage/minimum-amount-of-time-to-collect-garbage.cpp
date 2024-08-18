class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int pickP = 0, pickM = 0, pickG = 0;
        int lastP = 0, lastM = 0, lastG = 0;

        for (int i = 0; i < garbage.size(); ++i) {
            for (char ch : garbage[i]) {
                if (ch == 'P') {
                    pickP++;
                    lastP = i;
                } else if (ch == 'M') {
                    pickM++;
                    lastM = i;
                } else if (ch == 'G') {
                    pickG++;
                    lastG = i;
                }
            }
        }

        int travelP = 0, travelM = 0, travelG = 0;
        for (int i = 0; i < travel.size(); ++i) {
            if (i < lastP) travelP += travel[i];
            if (i < lastM) travelM += travel[i];
            if (i < lastG) travelG += travel[i];
        }

        int totalTime = (pickP + travelP) + (pickM + travelM) + (pickG + travelG);
        return totalTime;
    }
};
