/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class lapindromes {
    public static void main(String[] args) throws Exception {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            String str = sc.next();
//            int strLength = 0;
//            strLength = str.length();

            char[] arr = str.toCharArray();
            int start = 0, end = arr.length-1;
            int[] check = new int[40];

            while(start < end)
            {
                check[arr[start]-97]++;
                check[arr[end]-97]--;
                start++;
                end--;
            }

            String s = "YES";
            for(int i = 0;i<30;i++){
                if (check[i] !=0){
                    s = "NO";
                    break;
                }
            }
            System.out.println(s);
        }
    }
}
