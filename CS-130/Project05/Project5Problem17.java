//Nic Jones
//Project 5
//Problem 6.17
//CS-130

import java.util.Scanner;

public class Project5Problem17 {
   public static void main(String[] args) 
   {
    
      Scanner scan = new Scanner(System.in);
      
      System.out.print("Enter n: ");
      int n = scan.nextInt();
      
      printMatrix(n);
   
   }
   
   public static void printMatrix(int n)
   {
   
      for (int rows = 0; rows < n; rows++)
      {
			for (int clms = 0; clms < n; clms ++)
         {
				System.out.print((int)(Math.random() * 2));
			}
         
			System.out.println();
      }
	}  
   
}