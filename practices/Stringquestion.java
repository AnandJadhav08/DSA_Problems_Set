import java.util.*;

class Stringquestion {

    public static void main(String[] args) {
        System.out.println("zzzzzzzzzzzzzzzzzz Count String With Space zzzzzzzzzzzzzzzzz");
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string:");
        String str = sc.nextLine();

        int count = str.length();

        System.out.println("Number of Characters: " + count);
        System.out.println();



        System.out.println("zzzzzzzzzzzzzzzzzz Count String Without Space zzzzzzzzzzzzzzzzz");
        System.out.println("Enter a string:");
        String str1 = sc.nextLine();

        int count1 = 0;
        for (int i = 0; i < str1.length(); i++) {
            if (str1.charAt(i) != 32) {
                count1++;
            }
        }
        System.out.println("Number of Characters: " + count1);
        System.out.println();
       

        System.out.println("zzzzzzzzzzzzzzzzzz Count Consonant in String zzzzzzzzzzzzzzzzz");
        boolean[] isVowel = new boolean[256];
        isVowel['a'] = isVowel['e'] = isVowel['i'] = isVowel['o'] = isVowel['u'] = true;
        isVowel['A'] = isVowel['E'] = isVowel['I'] = isVowel['O'] = isVowel['U'] = true;

        System.out.println("Enter a string:");
        String str2 = sc.nextLine();


        int count2 = 0;

        for (int i = 0; i < str2.length(); i++) {
            
            if (isVowel[str2.charAt(i)] == false && str2.charAt(i) != 32) {
               count2++;
            
            }
        }
        System.out.println("Number of Characters: " + count2);
        System.out.println();


         System.out.println("zzzzzzzzzzzzzzzzzz Count Vowels in String zzzzzzzzzzzzzzzzz");
        boolean[] isVowel1 = new boolean[256];
        isVowel1['a'] = isVowel1['e'] = isVowel1['i'] = isVowel1['o'] = isVowel1['u'] = true;
        isVowel1['A'] = isVowel1['E'] = isVowel1['I'] = isVowel1['O'] = isVowel1['U'] = true;

        System.out.println("Enter a string:");
        String str3 = sc.nextLine();


        int count3 = 0;

        for (int i = 0; i < str3.length(); i++) {
            
            if (isVowel[str3.charAt(i)]) {
               count3++;
            
            }
        }
        System.out.println("Number of Characters: " + count3);
        System.out.println();

      
    }
}
