/**
 * Problem: 27. Remove Element
 * Link: https://leetcode.com/problems/remove-element/
 * Method: O(n) In-place pointer manipulation.
 * Date: 2026-01-28
 */

int removeElement(int* nums, int numsSize, int val) {
    int k = 0;
    for(int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}
