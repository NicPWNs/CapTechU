//Nic Jones
//Project 3
//Problem 4.21
//CS-130

import java.util.Scanner;

public class Project3Problem21 {
    public static void main(String[] args) {
    
    Scanner scan = new Scanner(System.in);

   System.out.print("Enter a SSN: ");
   String ssn = scan.nextLine();
   
   boolean valid = (ssn.length() == 11) &&
                   (Character.isDigit(ssn.charAt(0))) &&
                   (Character.isDigit(ssn.charAt(1))) &&
                   (Character.isDigit(ssn.charAt(2))) &&
                   (ssn.charAt(3) == '-') &&
                   (Character.isDigit(ssn.charAt(4))) &&
                   (Character.isDigit(ssn.charAt(5))) &&
                   (ssn.charAt(6) == '-') &&
                   (Character.isDigit(ssn.charAt(7))) &&
                   (Character.isDigit(ssn.charAt(8))) &&
                   (Character.isDigit(ssn.charAt(9))) &&
                   (Character.isDigit(ssn.charAt(10)));
   
   if (valid)                
      System.out.println(ssn + " is a valid social security number");
      
   else
      System.out.println(ssn + " is an invalid social security number");
                      
   }
}