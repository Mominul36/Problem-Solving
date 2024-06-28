class Solution {
public:
    int maxArea(vector<int>& h) {
        int n=h.size();
        int start=0, end=n-1;
        int max_area=0;
        
        while(start<end)
        {
           int area= min(h[start],h[end]) * (end-start);
           if(area>max_area)
           max_area=area;
           if(h[start]==h[end])
          {
              start++;end--;
          }
           else if(h[start]<h[end])
           start++;
           else 
           end--;
        }

        return max_area;
    }
};