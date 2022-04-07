//Nic Jones
//Project 1
//Problem 2.7
//CS-130

import java.util.Scanner;

public class Project1Problem7 {
   public static void main(String[] args) {
    
   Scanner scan = new Scanner(System.in);
    
   System.out.print("Enter the number of minutes: ");
   int mins = scan.nextInt();
   
   int years = mins / 525600;
   int days = (mins % 525600) / 1440;
   
   System.out.println(mins + " minutes is approximately " + years + " years and " + days + " days.");
   
   }
}