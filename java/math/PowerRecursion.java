/// USING ONLY TWO ARGUMENTS:
// a^b = a^(b-1)*a

// a^b = a, for b = 1; (This will be our base condition)
// and a^b = a^(b-1)*a, otherwise;



package math;

public class PowerRecursion {
    public static int printPower(int a, int b) {
        if(b==1) return a;
        return a*printPower(a, b-1);
    }

    public static void main(String s[]) {
        int a = 4, b = 2;
        int power = printPower(a,b);
        System.out.println(power);
    }
}



/// USING THREE ARGUMENTS:

// public class PowerRecursion {
//     public static int printPower(int a, int b, int p) {
//         if(b>0) {
//             return printPower(a, b-1, p*a);
//         }
//         return p;
//     }

//     public static void main(String s[]) {
//         int a = 4, b = 2, product = 1;
//         int power = printPower(a,b,product);
//         System.out.println(power);
//     }
// }


/// USING FOR LOOP:

// public class Power {
//     public static int printPower(int a, int b) {
//         int product = 1;
//         for(int i = 0;i<b;i++)
//             product = product*a;
//         return product;
//     }

//     public static void main(String s[]) {
//         int a = 4, b = 2;
//         int product = printPower(a,b);
//         System.out.println(product);
//     }
// }
