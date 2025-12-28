import java.util.*;

class leetCode53 {
    public static int maxSubArray (int[] arr) {
      int currentSum = arr[0];
      int maxSum = arr[0];

      for(int i = 1 ;  i < arr.length; i++) {
       currentSum = Math.max(arr[i], currentSum + arr[i]);

         maxSum = Math.max(maxSum,currentSum);
      }
     return maxSum;
    }
    
    public static void main(String[] arg) {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter Nth How Many Elements you use : ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        
        System.out.println("Enter Integer Numbers : ");
        for (int i = 0 ; i < n ; i++ ) {
            arr[i] = sc.nextInt();
        }
        
        int result = maxSubArray(arr);
        System.out.println("Max Sum Of Subarray :" + result);
        sc.close();
    }
}