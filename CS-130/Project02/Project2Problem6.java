//Nic Jones
//Project 2
//Problem 3.6
//CS-130

import java.util.Scanner;

public class Project2Problem6 {
   public static void main(String[] args) {
    
   Scanner scan = new Scanner(System.in);
    
   System.out.print("Enter weight in pounds: ");
   double weight = scan.nextDouble();
   
   System.out.print("Enter feet: ");
   double feet = scan.nextDouble();
   
   System.out.print("Enter inches: ");
   double inches = scan.nextDouble();
   
   final double KILOGRAMS_PER_POUND = 0.45359237;
	final double METERS_PER_INCH = 0.0254;
	final double FEET_PER_INCH = 0.0833333;
   
   weight *= KILOGRAMS_PER_POUND;
   double height = (inches += (feet / FEET_PER_INCH)) * METERS_PER_INCH;
   double bmi = weight / (Math.pow(height, 2));
   
   System.out.println("BMI is " + bmi);
   if (bmi < 18.5)
      System.out.println("Underweight");
   else if (bmi < 25)
      System.out.println("Normal");
   else if (bmi < 30)
      System.out.println("Overweight");
   else
      System.out.println("Obese");
   }
}