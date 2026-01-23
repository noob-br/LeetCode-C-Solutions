/**
 * Problem: 1929. Concatenation of Array
 * Link: https://leetcode.com/problems/concatenation-of-array/
 * Method: Manual memory allocation (malloc) for maximum integrity.
 */
    
    int n = numsSize;
    *returnSize = 2 * n;

    int* ans = malloc(2 * n * sizeof(int));

    for (int i = 0; i < n; i++) {
        ans[i] = nums[i]; 
        ans[i + n] = nums[i];

    }
    return ans;
}
