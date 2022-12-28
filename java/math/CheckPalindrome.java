package math;

public class CheckPalindrome {
    public static String isPalindrome(String s) {
        int size = s.length();
        for(int i = 0;i<size/2;i++) {
            if(s.charAt(i)!=s.charAt(size-1-i))
                return "NO";
        }
        return "YES";
    }

    public static void main(String a[]) {
        String s = "racecar";
        String outcome = isPalindrome(s);
        System.out.println(outcome);
    }
}
