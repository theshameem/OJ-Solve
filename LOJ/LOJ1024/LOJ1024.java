/*
	Solved!
	Time: 11:36:23 PM
	Date: 14-03-2020
*/
import java.lang.*;
import java.util.Scanner;
import java.math.BigInteger;

public class Main{
    public static void main(String args[]){
        BigInteger ans, x;
        Scanner input = new Scanner(System.in);
        
        int tc = input.nextInt();
        for(int cs = 1; cs <= tc; cs++){
            ans = BigInteger.valueOf(1);
            int n = input.nextInt();
            for(int i = 0; i < n; i++){
                x = input.nextBigInteger();
                ans = (ans.multiply(x)).divide(ans.gcd(x));
            }
            System.out.println("Case " + cs + ": " + ans);
            System.gc();
        }
    }
}
