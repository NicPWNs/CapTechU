//Nic Jones
//Project 1
//Problem 2.13
//CS-130

import java.util.Scanner;

public class Project1Problem13 {
   public static void main(String[] args) {
    
   Scanner scan = new Scanner(System.in);
    
   System.out.print("Enter the monthly saving amount: ");
   double save = scan.nextDouble();
   
   double total = save * (1 + 0.00417);
	total = (save + total) * (1 + 0.00417);
	total = (save + total) * (1 + 0.00417);
	total = (save + total) * (1 + 0.00417);
	total = (save + total) * (1 + 0.00417);
	total = (save + total) * (1 + 0.00417);
   
   System.out.println("After the sixth month, the account value is $" + total);
   
   }
}