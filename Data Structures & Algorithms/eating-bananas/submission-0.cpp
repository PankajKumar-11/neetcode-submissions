class Solution {
public:
     int hours(vector<int> &piles , int k , int h){
        int hrs = 0;
        for(int &p : piles){
            hrs += p/k;
        if(p%k!=0) hrs+=1;
        }
        return hrs;
     }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int high = *max_element(piles.begin() , piles.end());
        while(low<=high){
            int k = low + (high-low)/2;
            int hr = hours(piles , k , h);
            if(hr>h) low = k+1;
            else high = k-1;
        }
        return low;
    }
};
