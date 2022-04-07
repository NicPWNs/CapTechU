//Nic Jones
//Project 6
//Problem 9.9
//CS-130

import java.util.Scanner;

public class Project6Problem9 
{
   public static void main(String[] args)
   {
		RegularPolygon rp1 = new RegularPolygon();
		RegularPolygon rp2 = new RegularPolygon(6, 4);
		RegularPolygon rp3 = new RegularPolygon(10, 4, 5.6, 7.8);

		System.out.printf( "\nRegular Polygon Object #1: \nPerimeter: " + rp1.getPerimeter() + "\nArea: " + rp1.getArea() + "\n");
      
		System.out.printf( "\nRegular Polygon Object #2: \nPerimeter: " + rp2.getPerimeter() + "\nArea: " + rp2.getArea() + "\n");
      
		System.out.printf( "\nRegular Polygon Object #3: \nPerimeter: " + rp3.getPerimeter() + "\nArea: " + rp3.getArea() + "\n");
   }
}