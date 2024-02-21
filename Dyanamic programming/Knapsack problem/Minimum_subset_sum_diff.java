import java.util.Scanner;

public class Minimum_subset_sum_diff {
    public static void main(String[] args) {

        System.out.println("Enter the size of set");
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();

        int[] arr = new int[n];
        System.out.println("Enter the Elements of set ");

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }

        /// Subset Sum Concept
        sum = Math.abs(sum);

        System.out.println("the sum value is " + sum);

        boolean[][] dp = new boolean[n + 1][sum + 1];

        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= sum; j++) {
                if (i == 0) {
                    dp[i][j] = false;
                }
                if (j == 0) {
                    dp[i][j] = true;
                }
            }
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= sum; j++) {
                if (arr[i - 1] <= j) {
                    dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        System.out.println("The matrix is ");
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= sum; j++) {
                System.out.print(dp[i][j] + "  ");
            }
            System.out.println();
        }

        int row = n; // the last row
        int minDiff = Integer.MAX_VALUE;
        for (int i = 0; i <= sum / 2; i++) {
            if (dp[row][i]) {
                minDiff = Math.min(minDiff, sum - 2 * i);
            }
        }

        System.err.println("The Minimum difference is " + minDiff);
    }
}
