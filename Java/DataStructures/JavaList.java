import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        List<Integer> myList = new ArrayList<Integer>();
        for(int i = 0; i < N; i++){
            int L = scan.nextInt();
            myList.add(L);
        }
        int Q = scan.nextInt();
        for(int i = 0; i < Q; i++){
            String option = scan.next();
            if(option.equals("Insert")){
                int x = scan.nextInt();
                int y = scan.nextInt();
                myList.add(x,y);
            }else if(option.equals("Delete")){
                int d = scan.nextInt();
                myList.remove(d);
            }
        }
        for(int i = 0; i < myList.size(); i++){
            System.out.print(myList.get(i) + " ");
        }
    }
}
