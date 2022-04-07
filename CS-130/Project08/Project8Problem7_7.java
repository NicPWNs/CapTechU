//Nic Jones
//Project 8
//Problem 7.7
//CS-130

import java.util.Scanner;

public class Project8Problem7_7
{
   public static void main(String[] args) 
   {
      Scanner scan = new Scanner(System.in);
      
      int[] counts = new int[10];
      
      for(int i=1; i<=100; i++)
      {
         counts[(int)(Math.random() * 10)]++;
      }
      
      System.out.println("Counts for each Number 0-9: ");
      for(int j=0; j<counts.length; j++)
      {
         System.out.println(j + "'s: " + counts[j]);
      }
	}
}