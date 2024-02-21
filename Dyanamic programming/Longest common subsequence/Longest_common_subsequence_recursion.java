import java.util.Scanner;

public class Longest_common_subsequence_recursion {

    public static int LCS(String s1,String s2,int m,int n){
        if(n==0 || m==0) return 0;

        if(s1.charAt(m-1) == s2.charAt(n-1)){
            return 1+ LCS(s1,s2,m-1,n-1);
        }

        return Math.max(LCS(s1,s2,m-1,n),LCS(s1,s2,m,n-1));
    }

    public static void main(String[] args) {
        System.out.println("Enter The two String ");
        String s1;
        String s2;

        Scanner sc=new Scanner(System.in);
        s1=sc.nextLine();
        s2=sc.nextLine();

        int ans=LCS(s1,s2,s1.length(),s2.length());

        System.out.println("The longest subsequence of length is "+ ans);

        
        
    }

}