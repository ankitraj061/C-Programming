import java.util.Scanner;

class Prime {
    public boolean isPrime(int a) {
        boolean flag = true;
        for (int i = 2; i <= Math.sqrt(a); i++) {
            if (a % i == 0) {
                flag = false;
                break;
            }
        }
        if (a == 1) {
            flag = false;
        }
        return flag;
    }
    int sumDigit(int a) {
        int sum = 0;
        while (a > 0) {
            sum += a % 10;
            a /= 10;
        }
        return sum;
    }
}
public class Q1 {
    public static void main(String[] args) {
        Prime p = new Prime();
        Scanner s = new Scanner(System.in);
        System.out.println("Enter a number :");
        int n = s.nextInt();
        int sum = 0;
        int digitSum = p.sumDigit(n);

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                if (p.isPrime(i)) {
                    int check = i;
                    while (check > 0) {
                        sum += check % 10;check /= 10;
                    }
                    n /= i;
                    i = 1;
                }
            }
        }
        if (digitSum == sum) System.out.println(1);
        else System.out.println(0);
    }
}
//check the given number is smith number of not 
//google smith number
