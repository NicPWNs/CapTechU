//Nic Jones
//Project 5
//Problem 6.5
//CS-130

import java.util.Scanner;

public class Project5Problem5 {
   public static void main(String[] args) 
   {
    
      Scanner scan = new Scanner(System.in);

      System.out.print("Enter three numbers: ");
      double num1 = scan.nextDouble();
      double num2 = scan.nextDouble();
      double num3 = scan.nextDouble();
   
      displaySortedNumbers(num1, num2, num3);
   
   }
   
   public static void displaySortedNumbers(double num1, double num2, double num3)
   {
   
      double x;
      
      if (num2 < num1 && num2 < num3)
      {
			x = num1;
			num1 = num2;
			num2 = x;
		}
      
		else if (num3 < num1 && num3 < num2)
      {
			x = num1; 
			num1 = num3;
			num3 = x;
		}
      
		if (num3 < num2)
      {
			x = num2;
			num2 = num3;
			num3 = x;
		}
   
      System.out.println(num1 + " " + num2 + " " + num3);
   
   }
}