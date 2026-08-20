class Solution {
    public int[][] spiralMatrix(int m, int n, ListNode head) {

        ListNode temp = head;

        int[][] ans = new int[m][n];

        // Fill matrix with -1
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans[i][j] = -1;
            }
        }

        int top = 0;
        int bottom = m - 1;
        int left = 0;
        int right = n - 1;

        while (temp != null) {

            // TOP: left -> right
            for (int j = left; j <= right && temp != null; j++) {
                ans[top][j] = temp.val;
                temp = temp.next;
            }
            top++;

            // RIGHT: top -> bottom
            for (int i = top; i <= bottom && temp != null; i++) {
                ans[i][right] = temp.val;
                temp = temp.next;
            }
            right--;

            // BOTTOM: right -> left
            for (int j = right; j >= left && temp != null; j--) {
                ans[bottom][j] = temp.val;
                temp = temp.next;
            }
            bottom--;

            // LEFT: bottom -> top
            for (int i = bottom; i >= top && temp != null; i--) {
                ans[i][left] = temp.val;
                temp = temp.next;
            }
            left++;
        }

        return ans;
    }
}