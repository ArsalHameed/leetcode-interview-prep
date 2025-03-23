//274. H-Index
class Solution {
    public:
        int hIndex(vector<int>& citations) {
            ios::sync_with_stdio(0);
            cin.tie(NULL);
            sort(citations.begin(),citations.end());
            int n=citations.size();
            int l=0,h=n-1,mid;
            while(l<=h){
                mid=(l+h)/2;
                if(citations[mid]==(n-mid))
                return citations[mid];
                else if(citations[mid]>(n-mid))
                {
                    h=mid-1;
                }
                else
                l=mid+1;
            }
            return n-l;
        }
    };