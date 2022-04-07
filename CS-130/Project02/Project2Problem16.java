//Nic Jones
//Project 2
//Problem 3.16
//CS-130

import java.util.Scanner;

public class Project2Problem16 {
   public static void main(String[] args) {
    
   Scanner scan = new Scanner(System.in);
    
   int w = (int)((Math.random() * 100) - 50);
   int h = (int)((Math.random() * 200) - 100);
   
   
   System.out.println("The rectangles is centered at (0,0) with width 100 and height 200.");
   System.out.println("Random coordinate is: (" + w + ", " + h + ")");
   
   }
}