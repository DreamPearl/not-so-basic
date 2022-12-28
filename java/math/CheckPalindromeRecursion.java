package math;

public class CheckPalindromeRecursion {
    /*
     *  isPalindromeString returns if S[i to size-1-i] is palindrome.
     */
    public static boolean isPalindromeString(String s, int i) {
        if(i>=s.length()/2) return true;
        if(s.charAt(i)==s.charAt(s.length()-1-i) && isPalindromeString(s, i+1))
            return true;
        else
            return false;
    }

    /*
     * isPalindromeSubstring returns if S[i..j] substring is palindrome.
     */
    public static boolean isPalindromeSubstring(String s, int i, int j) {
        if(i>=j) return true;
        return (s.charAt(i)==s.charAt(j) && isPalindromeSubstring(s, i+1, j-i));
    }

    public static void main(String a[]) {

        // Check if a given string is Palindrome.
        System.out.println("Is given string Palindrome?: " + isPalindromeString("racecar", 0));
        System.out.println("Is given string Palindrome?: " + isPalindromeString("racecaaar", 0));


        // Check if the substring of the given string is Palindrome.

        System.out.println("Is given substring Palindrome?: " + isPalindromeSubstring("123HeH45", 3, 5));
    }
}
