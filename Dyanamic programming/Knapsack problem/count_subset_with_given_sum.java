import java.util.Scanner;

public class count_subset_with_given_sum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter size of subset ");

        int n = sc.nextInt();

        int[] set = new int[n];

        System.out.println("enter the element of subsets ");

        for (int i = 0; i < n; i++) {
            set[i] = sc.nextInt();
        }

        System.out.println("enter the sum ");

        int sum = sc.nextInt();

        int[][] dp = new int[n + 1][sum + 1];

        for (int i = 0; i < n+1; i++) {
            for (int j = 0; j < sum + 1; j++) {
                if (j == 0) {
                    dp[i][j] = 1; // exist an empty subset
                } else {
                    dp[i][j] = 0;
                }
            }
        }

        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < sum + 1; j++) {
                if (set[i - 1] <= j) {
                    dp[i][j] = (dp[i - 1][j - set[i - 1]] + dp[i - 1][j]);

                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        int count = dp[n][sum];

        System.out.println("The total number of subset exist are " + count);
    }
}
