//Nic Jones
//Project 2
//Problem 3.26
//CS-130

import java.util.Scanner;

public class Project2Problem26 {
   public static void main(String[] args) {
    
   Scanner scan = new Scanner(System.in);
    
   System.out.print("Enter an integer: ");
   int num = scan.nextInt();
   
   System.out.println("Is " + num + " divisible by 5 AND 6? " +
	   ((num % 5 == 0) && (num % 6 == 0)));
	System.out.println("Is " + num + " divisible by 5 OR 6? " +
		((num % 5 == 0) || (num % 6 == 0)));
	System.out.println("Is " + num + " divisible by 5 or 6, but not both? " +
		((num % 5 == 0) ^ (num % 6 == 0)));
   
   }
}