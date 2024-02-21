import java.util.Scanner;

public class Subset_sum_problem {
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
        boolean[][] dp = new boolean[n + 1][sum + 1];

        for (int i = 0; i < n + 1; i++) {
            for (int j = 0; j < sum + 1; j++) {
                if (i == 0) {
                    dp[i][j] = false;
                }
                if (j == 0) {
                    dp[i][j] = true;
                }
            }
        }

        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < sum + 1; j++) {
                if (set[i - 1] <= j) {
                    dp[i][j] = (dp[i - 1][j - set[i - 1]] || dp[i - 1][j]);

                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        if (dp[n][sum]) {
            System.out.println("Subset Exist !! ");
        } else {
            System.out.println("Not exist !!");
        }

        for (int i = 0; i < n + 1; i++) {
            for (int j = 0; j < sum + 1; j++) {
                System.out.print(dp[i][j] + "  ");
            }
            System.out.println();
        }
    }
}
