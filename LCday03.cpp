//55. Jump Game
class Solution {
    public:
        bool canJump(vector<int>& nums) {
          int k= nums.size();
          int head=0;
          for(int i=0;i<k;i++)
          {
                if(head<i)
                {
                    return false;
    
                }
                head= max(head,i+nums[i]);
          }
          
          return true;
        }
    };