
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
//         vector<int> out;
        
//          map<int,int> table;
        
//         for(int i=0;i<nums.size();i++)
//         {
//             pair<int,int> p1;
//             p1.first=i;
//             p1.second=nums[i];
//             table.insert(p1);
//         }
        
   
        
        
//         sort(nums.begin(),nums.end());
        
//         int start=0,end=(nums.end()-nums.begin()-1);
        
//         while(start<end)
//         {
//             if(nums[start]+nums[end]==target && nums[start]!=nums[end])
//             {
               
                
//                 for(auto& it: table)
//                 {
//                     if((it.second)==nums[start])
//                     {
//                         out.push_back(it.first);
//                     }
//                     else if(it.second == nums[end])
//                     {
//                         out.push_back(it.first);
//                     }
//                 }
                
//                 return out;
                
//             }
//             else if(nums[start]+nums[end]==target)
//             {
                
                
//                 for(auto& it: table)
//                 {
//                     if(2*(it.second)==target)
//                     {
//                         out.push_back(it.first);
//                     }
//                 }
                
//                 return out;
//             }
            
//             else if(nums[start]+nums[end]>target)
//             {
//                 end--;
//             }
//             else
//             {
//                 start++;
//             }
//         }
        
//         return out;
        
        
        vector<int>out;
        
        unordered_map<int,int> table;
        
        for(int i=0;i<nums.size();i++)
        {
            if(table.count(target-nums[i])>0)
               {
                   out.push_back(i);
                   out.push_back(table[target-nums[i]]);
                   
                   return out;
               }
               else
               {
                   table[nums[i]]=i;
               }
        }
               
               return out;
        
        
    }
};