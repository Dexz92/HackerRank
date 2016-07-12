import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int k = scan.nextInt();
        int index = 1;
        int special = 0;
        for(int j = 0; j < n; j++){
            int t = scan.nextInt();
            for(int i = 1; i <= t; i++){
                if(i == index){
                    special++;
                }
                if((i != t) && (i % k == 0)){
                    index++;
                }
            }
            index++;
        }
        System.out.println(special);
    }
}