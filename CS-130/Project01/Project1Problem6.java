//Nic Jones
//Project 1
//Problem 2.6
//CS-130

import java.util.Scanner;

public class Project1Problem6 {
   public static void main(String[] args) {
    
   Scanner scan = new Scanner(System.in);
    
   System.out.print("Enter a number between 0 and 1000: ");
   int num = scan.nextInt();
   
   int digit = num % 10;
   num /= 10;
   
   int tens = num % 10;
   num /= 10;
   
   int hunds = num % 10;
   num /= 10;
   
   int sum = hunds + tens + digit;
   
   System.out.println("The sum of the digits is " + sum); 
   
   }
}