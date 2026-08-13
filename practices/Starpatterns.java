import java.util.*;

public class Starpatterns {

    public static void main(String[] args) {

        System.out.println("zzzzzzzzzzzzzz Star Pyramid - Inverted Triangle zzzzzzzzzzzzz");
        for (int i = 0; i < 5; i++) {

            for (int j = 5; j > i; j--) {

                System.out.print("*");
            }
            System.out.println();
        }

        System.out.println("zzzzzzzzzzzzzz Star Pyramid - Right Triangle zzzzzzzzzzzzz");
        for (int i = 0; i < 5; i++) {

            for (int j = 0; j <= i; j++) {

                System.out.print("*");
            }
            System.out.println();
        }

        System.out.println("zzzzzzzzzzzzzz Star - Square zzzzzzzzzzzzz");
        for (int i = 0; i < 5; i++) {

            for (int j = 0; j < 5; j++) {

                System.out.print("*");
            }
            System.out.println();
        }

        System.out.println("zzzzzzzzzzzzzz Number Triangle zzzzzzzzzzzzz");
         for (int i = 1 ; i <= 5 ; i++){
            for (int j = 1 ; j <= i ; j++){
                System.out.print(j);
            }
      System.out.println();
         }

         System.out.println("zzzzzzzzzzzzzz Double Number Triangle zzzzzzzzzzzzz");
         for (int i = 1 ; i <= 5 ; i++){
            for (int j = 1 ; j <= i ; j++){
                System.out.print(i);
            }
      System.out.println();
         }
    }
}



/* zzzzzzzzzzzzzz Star Pyramid - Inverted Triangle zzzzzzzzzzzzz
*****
****
***
**
*
zzzzzzzzzzzzzz Star Pyramid - Right Triangle zzzzzzzzzzzzz
*
**
***
****
*****
zzzzzzzzzzzzzz Star - Square zzzzzzzzzzzzz
*****
*****
*****
*****
*****
zzzzzzzzzzzzzz Number Triangle zzzzzzzzzzzzz
1
12
123
1234
12345
zzzzzzzzzzzzzz Double Number Triangle zzzzzzzzzzzzz
1
22
333
4444
55555 */