import java.util.*;
class leetCode50 {

    public double myPow(long x, int n) {
      if(x == 1) return 1.0;
      if(x == 0) return 0;
      if(n == 0) return 1.0;
      if(x == -1 && n%2 == 0) return 1.0;
      if(x == -1 && n%2 != 0) return -1.0;


      long  binaryForm = n;
      double ans = 1;
      
      if(n < 0) {
        x = 1/x;
        binaryForm  = - binaryForm;
      }

      while(binaryForm > 0) {
        if(binaryForm % 2 == 1) {
            ans *= x;
        }
        x *= x;
        binaryForm /= 2;
      }
      System.out.println("The Result Is : " + ans);
      return 0;
    }
    public static void main(String[] arg) {
        Scanner sc = new  Scanner(System.in);
        
        System.out.println("Enter Value Of X :");
        long x = sc.nextLong();
        System.out.println("Enter Value Of n : ");
        int n = sc.nextInt();
        
        leetCode50 obj = new leetCode50();
        obj.myPow(x, n);

        sc.close();
        
    }
}

/* 
LeetCode 50. Pow(x, n)

Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

Example 1:

Input: x = 2.00000, n = 10
Output: 1024.00000
Example 2:

Input: x = 2.10000, n = 3
Output: 9.26100
Example 3:

Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25
 

Constraints:

-100.0 < x < 100.0
-231 <= n <= 231-1
n is an integer.
Either x is not zero or n > 0.
-104 <= xn <= 104 */