//Nic Jones
//Project 2
//Problem 3.8
//CS-130

import java.util.Scanner;

public class Project2Problem8 {
   public static void main(String[] args) {
    
   Scanner scan = new Scanner(System.in);
    
   System.out.print("Enter three integers: ");
	int num1 = scan.nextInt();
	int num2 = scan.nextInt();
	int num3 = scan.nextInt();
   
   int numX;
   
   if (num2 < num1 || num3 < num1)
   {
      if (num2 < num1)
      {
         numX = num1;
         num1 = num2;
         num2 = numX;
      }
      
      if (num3 < num1)
      {
         numX = num1;
         num1 = num3;
         num3 = numX;
      }
   }
   
   if (num3 < num2)
   {
      numX = num2;
      num2 = num3;
      num3 = numX;
   }
   
   System.out.println("Ascending order: " + num1 + " " + num2 + " " + num3);
   
   }
}