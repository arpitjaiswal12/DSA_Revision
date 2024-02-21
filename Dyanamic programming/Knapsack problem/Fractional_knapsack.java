/**
 * Fractional_knapsack
 */
public class Fractional_knapsack {

    public static void main(String[] args) {
        // initialising the problem
        int n = 4;
        int[] wt = { 2, 3, 4, 5 };
        int[] val = { 3, 4, 5, 6 };
        // knapsack capacity
        int W = 5;

        // top-down approach
        int[][] dp = new int[n + 1][W + 1];

        // first initialization
        for (int i = 0; i < n + 1; i++) {
            for (int j = 0; j < W + 1; j++) {
                if (i == 0 || j == 0) {
                    dp[i][j] = 0;
                }
            }
        }

        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < W + 1; j++) {
                if (wt[i - 1] <= j) {
                    dp[i][j] = Math.max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
                } else if (wt[i - 1] > j) {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        System.out.println("the maximun profit is " + dp[n][W]);
    }
}