import java.util.Scanner;

public class Unbounded_knapsack {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of items ");
        int n = sc.nextInt();

        int[] wt = new int[n];
        int[] val = new int[n];

        System.out.println("Enter the weights of items ");
        for (int i = 0; i < n; i++) {
            wt[i] = sc.nextInt();
        }

        System.out.println("Enter the values of items");
        for (int i = 0; i < n; i++) {
            val[i] = sc.nextInt();
        }

        int C;
        System.out.println("Enter the capacity of knapsack ");
        C = sc.nextInt();

        int[][] dp = new int[n + 1][C + 1];

        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= C; j++) {
                if (i == 0 || j == 0) {
                    dp[i][j] = 0;
                }
            }
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= C; j++) {
                if (wt[i - 1] <= j) {
                    dp[i][j] = Math.max(val[i - 1] + dp[i][j - wt[i - 1]], dp[i - 1][j]);
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        System.out.println("The profit is " + dp[n][C]);
    }
}
