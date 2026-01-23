**
 * Problem: 1: Two Sum
 * Link: https://leetcode.com/problems/two-sum/
 * Method: O(n^2) Brute Force with nested loops and manual malloc.
 */
    
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    int * result = malloc(2 * sizeof(int));
    *returnSize = 2;

for (int i = 0; i < numsSize; i++) {
    for (int j = i + 1; j < numsSize; j++) {
        if (nums[i] + nums[j] == target) {
            result[0] = i;
            result[1] = j;
            return result;
        }
    }
}
return NULL;

}
