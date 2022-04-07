//Nic Jones
//Project 8
//Problem 7.5
//CS-130

import java.util.Scanner;

public class Project8Problem7_5
{
   public static void main(String[] args) 
   {
      Scanner scan = new Scanner(System.in);
      
      int[] distinct = new int[10];
      int input;
      int num = 0;
      
      System.out.print("Enter 10 numbers: ");
      
      for(int i=0; i<10; i++)
      {
         input = scan.nextInt();
         if(isDistinct(distinct, input))
         {
            distinct[num] = input;
            num++;
         }
      }
      
      System.out.println("Number of Distinct Numbers: " + num);
      System.out.print("Distinct Numbers are: ");
      for(int j=0; j<distinct.length; j++)
      {
         if(distinct[j] > 0)
            System.out.print(" " + distinct[j]);
      }
   }
   
   public static boolean isDistinct(int[] distinct, int input)
   {
		for(int i = 0; i < distinct.length; i++)
      {
			if (input == distinct[i]) 
				return false;
		}
		return true;
	}
}