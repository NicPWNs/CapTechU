//Nic Jones
//Project 3
//Problem 4.1
//CS-130

import java.util.Scanner;

public class Project3Problem1 {
    public static void main(String[] args) {
    
    Scanner scan = new Scanner(System.in);

   System.out.print("Enter the length from the center of a pentagon to a vertex: ");
   double len = scan.nextDouble();
   
   double side = (2 * len) * Math.sin(Math.PI / 5);
   double area = (5 * Math.pow(side, 2)) / (4 * Math.tan(Math.PI / 5));
   
   System.out.printf("The area of the pentagon is: %.2f", area); 
   
   }
}