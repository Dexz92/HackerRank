import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int testCases = scan.nextInt();
        for(int i = 0; i < testCases; i++){
            int M = scan.nextInt();
            int N = scan.nextInt();
            int[] list = new int[N];
            for(int j = 0; j < N; j++){
                list[j] = scan.nextInt();
            }
            boolean done = false;
            int firstIndex = 0;
            int lastIndex = 0;
            for(int j = 0; j < N; j++){
                for(int k = 0; k < N; k++){
                    if(list[j] + list[k] == M && j != k){
                        firstIndex = j + 1;
                        lastIndex = k + 1;
                        done = true;
                        break;
                    }
                }
                if(done){
                    break;
                }
            }
            if(firstIndex < lastIndex){
                System.out.println(firstIndex + " " + lastIndex);
            }else{
                System.out.println(lastIndex + " " + firstIndex);
            }
        }
        
    }
}