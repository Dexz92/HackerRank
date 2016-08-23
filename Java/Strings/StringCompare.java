import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String input = scan.next();
        //System.out.println(input);
        int k = scan.nextInt();
        SortedSet<String> mySet = new TreeSet<String>();
        for(int i = 0; i <= input.length() - k; i++){
            mySet.add(input.substring(i,i+k));
        }
        System.out.println(mySet.first());
        System.out.println(mySet.last());

                      
    }
}