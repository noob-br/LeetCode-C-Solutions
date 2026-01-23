/**
 * Problem: 1108. Defanging an IP Address
 * Link: https://leetcode.com/problems/defanging-an-ip-address/
 * Method: O(n) String reconstruction with manual memory allocation.
 */

char * defangIPaddr(char * address){
char * ans = malloc(22 * sizeof(char));

int j = 0;

for(int i = 0; address[i] != '\0'; i++){
    if (address[i] == '.') {
        ans[j++] = '[';
        ans[j++] = '.';
        ans[j++] = ']';
    } else {
        ans[j++] = address[i];
    }
    }
    ans[j] = '\0';
    return ans;
}
