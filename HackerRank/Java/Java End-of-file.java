import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
       Scanner input = new Scanner(System.in);
       String s=new String();
       int n=1;
       while(input.hasNext())
       {
           s= input.nextLine();
           System.out.println(n + " "+ s);
           n++;
       }
    }
}
