import java.util.*;

public class Palindrome {
    
    public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter String and Find Given Word is Palindrome or Not !");
    String str = sc.nextLine();
    int left = 0;
    int right = str.length() - 1;
    boolean isPalindrome = true;

    while (left < right) {
        if (str.charAt(left) != str.charAt(right)) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
      System.out.println("Given String Palindrome is: "+ isPalindrome); 
      sc.close(); 
    }
}