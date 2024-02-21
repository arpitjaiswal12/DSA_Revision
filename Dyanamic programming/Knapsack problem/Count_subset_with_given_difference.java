import java.util.Scanner;

public class Count_subset_with_given_difference {
    // This problem is same as Target sum problem 
    //Here we need to count subsets combonation who's difference is same as given difference 
    //similarites :: subset sum count 
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter size of Set ");

        int n = sc.nextInt();

        int[] set = new int[n];

        System.out.println("Enter the elements of set ");

        for (int i = 0; i < n; i++) {
            set[i] = sc.nextInt();
        }

        System.out.println("Enter the Difference ");

        int diff = sc.nextInt();

        // let assume the set p which have subsets p1 and p2 who's some is s1 and s2 
        //here given is difference (diff) and Sum of elements of subset (sum)
        // i.e, s1-s2=diff and s1+s2=sum 
        //two variables and two equation  so *** s1=(sum+diff)/2 ***;

        int sum=0;
        for(int i=0;i<n;i++){
            sum+=set[i];
        }

        int s1=(sum+diff)/2;

        int[][] dp = new int[n + 1][s1 + 1];

        for (int i = 0; i < n+1; i++) {
            for (int j = 0; j < s1 + 1; j++) {
                if (j == 0) {
                    dp[i][j] = 1; // exist an empty subset
                } else {
                    dp[i][j] = 0;
                }
            }
        }

        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < s1 + 1; j++) {
                if (set[i - 1] <= j) {
                    dp[i][j] = (dp[i - 1][j - set[i - 1]] + dp[i - 1][j]);

                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        int count = dp[n][s1];

        System.out.println("The total number of subset exist are " + count);
        
    }
}
