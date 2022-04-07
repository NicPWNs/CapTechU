//Nic Jones
//Project 7
//Problem 10.17
//CS-130

import java.util.Scanner;
import java.math.BigInteger;

public class Project7Problem17
{
   public static void main(String[] args) 
   {
      BigInteger max = new BigInteger(Long.MAX_VALUE + "");
      long start = (long) Math.sqrt(Long.MAX_VALUE);
      BigInteger int1 = new BigInteger("10");
      int count = 0;


      while (count < 10)
      {
         BigInteger squared = int1.multiply(int1);
         
         if (squared.compareTo(max) > 0)
         {
            count++;
            System.out.println(count+": " + int1 + " squared = " + squared);
         }
            int1 = int1.add(BigInteger.ONE);
      }
   }
}