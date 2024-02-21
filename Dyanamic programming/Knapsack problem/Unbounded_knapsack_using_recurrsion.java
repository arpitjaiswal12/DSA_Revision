import java.util.Scanner;

public class Unbounded_knapsack_using_recurrsion {

    public static int unboundedKnapsack(int[] wt, int[] val, int n, int W) {
        if (W == 0 || n == 0)
            return 0;

        if (wt[n - 1] <= W) {
            return Math.max(val[n - 1] + unboundedKnapsack(wt, val, n, W - wt[n - 1]),
                    unboundedKnapsack(wt, val, n - 1, W));
        }

        return unboundedKnapsack(wt, val, n - 1, W);
    }

    public static void main(String[] args) {
        // The unbounded knapsack problem is a variation of the knapsack problem where
        // we are allowed to take an unlimited number of copies of each item.

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

        int ans = unboundedKnapsack(wt, val, n, C);

        System.out.println("The profit is " + ans);

    }
}
