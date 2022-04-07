//Nic Jones
//Project 3
//Problem 4.11
//CS-130

import java.util.Scanner;

public class Project3Problem11 {
    public static void main(String[] args) {
    
    Scanner scan = new Scanner(System.in);

   System.out.print("Enter a decimal value (0 to 15): ");
   int decNum = scan.nextInt();
   
   if (decNum >= 0 && decNum <=9)
      System.out.println("The hex value is: " + decNum);
   else if (decNum >= 10 && decNum <=15)
      System.out.println("The hex value is: " + (char)(decNum + 'A' - 10));
   else
      System.out.println(decNum + "is an invalid input");
   }
}