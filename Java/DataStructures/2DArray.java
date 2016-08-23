import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int arr[][] = new int[6][6];
        int i, j, p, q, temp, sum, final_sum = -99999;
        for( i=0; i < 6; i++){
            for( j=0; j < 6; j++){
                arr[i][j] = in.nextInt();
               
            }
        }
        
         for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++) {
                sum = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
                final_sum = Math.max(sum, final_sum);
            }
        }
        System.out.println(final_sum);
    }
}
