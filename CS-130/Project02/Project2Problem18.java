//Nic Jones
//Project 2
//Problem 3.18
//CS-130

import java.util.Scanner;

public class Project2Problem18 {
   public static void main(String[] args) {
    
   Scanner scan = new Scanner(System.in);
    
   System.out.print("Enter the weight: ");
   double weight = scan.nextDouble();
   
   if (weight <= 0 || weight > 20)
      System.out.println("The package cannot be shipped.");
      
   else
   {
      double cost;
      
      if (weight > 0 && weight <= 1)
         cost = 3.5;
      else if (weight <= 3)
         cost = 5.5;
      else if (weight <= 10)
         cost = 8.5;
      else
         cost = 10.5;
         
      System.out.println("Shipping cost is: $" + cost * weight);
   }
   
   }
}