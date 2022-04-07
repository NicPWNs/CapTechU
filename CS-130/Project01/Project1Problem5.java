//Nic Jones
//Project 1
//Problem 2.5
//CS-130

import java.util.Scanner;

public class Project1Problem5 {
    public static void main(String[] args) {
    
    Scanner scan = new Scanner(System.in);
    
   System.out.print("Enter subtotal and gratuity rate: ");
   double subtotal = scan.nextDouble();
   double gratuity = scan.nextDouble();
   
   double calcGratuity = (gratuity / 100.0) * subtotal;
   double total = subtotal + calcGratuity;
   
   System.out.println("The gratuity is is $" + calcGratuity + " and total is $" + total);
   
   }
}