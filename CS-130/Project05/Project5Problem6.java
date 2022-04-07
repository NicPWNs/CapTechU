//Nic Jones
//Project 5
//Problem 6.6
//CS-130

import java.util.Scanner;

public class Project5Problem6 {
   public static void main(String[] args) 
   {
    
      Scanner scan = new Scanner(System.in);

      System.out.print("Enter the amount of rows: ");
      int numRows = scan.nextInt();
      
      displayPattern(numRows);
        
   }
   
   public static void displayPattern(int n)
   {
   
      int space = n - 1;
      for(int i = 1; i <= n; i++)
      {
         for (int x = 0; x < space; x++) 
         {
		      System.out.print("  ");
         }
         
         for (int z = i; z > 0; z--) 
         {
				System.out.print(z + " ");
			}
			System.out.println();
			space--;
      }
   
   }
   
}