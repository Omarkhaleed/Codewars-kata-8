#include <vector>

int sum(std::vector<int> nums) {
int s=0;
for(int i=0;i<nums.size();i++){
 s+=nums[i];
 }
  return s;
}
