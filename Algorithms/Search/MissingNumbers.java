import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        HashMap<Integer,Integer> list1 = new HashMap<Integer,Integer>();
        HashMap<Integer,Integer> list2 = new HashMap<Integer,Integer>();
        int[] arrayA = new int[n];
        for(int i = 0; i < n; i++){
            arrayA[i] = scan.nextInt();
        }
        int m = scan.nextInt();
        int[] arrayB = new int[m];
        for(int i = 0; i < m; i++){
            arrayB[i] = scan.nextInt();
        }
        for(int j : arrayA){
            if(list1.containsKey(j)){
                list1.put(j,list1.get(j)+1);
            }else{
                list1.put(j,1);
            }
        }
        for(int j : arrayB){
            if(list2.containsKey(j)){
                list2.put(j,list2.get(j)+1);
            }else{
                list2.put(j,1);
            }
        }
        ArrayList<Integer> diff = new ArrayList<Integer>();
        for(Integer j : list2.keySet()){
            if(list1.get(j) == null || list1.get(j) < list2.get(j)){
                diff.add(j);
            }
        }
        Integer[] result = new Integer[diff.size()];
        diff.toArray(result);
        Arrays.sort(result);
        for(int i : result){
            System.out.print(i + " ");
        }
        
                
    }
}