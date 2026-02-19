class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int count = 0;
        int cand = 0;

        for(int i = 0; i < arr.size(); i++)
        {
            if(count == 0)
            {
                cand = arr[i];
            }

            if(arr[i] == cand)
            {
                count++;
            }
            else
            {
                count--;
            }
        }

        return cand;
    }
};
