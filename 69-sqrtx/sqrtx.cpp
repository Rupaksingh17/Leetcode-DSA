class Solution {
public:
    int mySqrt(int x) {
    int start=1,end=x,mid,ans=0;
    while (start<=end)
    {
        mid=start+(end-start)/2;
                    long long square = 1LL*mid*mid;

        if(square==x)
        {
            ans=mid;
            break;
        }
        else if(square<x)
        {
            ans=mid;
        start=mid+1;
        }
        else
        end=mid-1;
    }
          return ans;

    }
 };