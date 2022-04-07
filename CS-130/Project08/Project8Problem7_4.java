//Nic Jones
//Project 8
//Problem 7.4
//CS-130

import java.util.Scanner;

public class Project8Problem7_4
{
   public static void main(String[] args) 
   {
      Scanner scan = new Scanner(System.in);
      
      int[] scores = new int[100];
      int input;
      int num = 0;
      int avg = 0; 
      int above = 0;
      int below = 0;     
      
      System.out.print("Enter scores and negative number when finished: ");
      
      for(int i=0; i<100; i++)
      {
         input = scan.nextInt();
         if(input<0)
            break;
         scores[i] = input;
         avg += input;
         num++;
      }
      
      avg /= num;
      
      for(int j=0; j<num; j++)
      {
         if(scores[j] >= avg)
            above++;
         else
            below++;
      }
      
      System.out.println("\nAverage: " + avg);
      System.out.println("Number of Scores Above/Equal to Average: " + above);
      System.out.println("Number of Scores Below Average: " + below);
   }
}