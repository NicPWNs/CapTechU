//Nic Jones
//Project 1
//Problem 2.1
//CS-130

import java.util.Scanner;

public class Project1Problem1 {
    public static void main(String[] args) {
    
    Scanner scan = new Scanner(System.in);

   System.out.println("Enter a degree in Celsius: ");
   double celsius = scan.nextDouble();
   
   double farenheit = (9.0/5) * celsius + 32;
   
   System.out.println(celsius + " in Celsius is " + farenheit + " in Farenheit.");
   
   
   }
}