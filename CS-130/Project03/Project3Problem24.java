//Nic Jones
//Project 3
//Problem 4.24
//CS-130

import java.util.Scanner;

public class Project3Problem24 {
    public static void main(String[] args) {
    
    Scanner scan = new Scanner(System.in);

	System.out.print("Enter the first city: ");
	String city1 = scan.nextLine();
	System.out.print("Enter the second city: ");
	String city2 = scan.nextLine();
	System.out.print("Enter the third city: ");
	String city3 = scan.nextLine();

	String x;
	if ((city2.compareTo(city1) < 0) && (city2.compareTo(city3) < 0))
	{
		x = city1;
		city1 = city2;
		city2 = x;	
	}
	else if ((city3.compareTo(city1) < 0) && (city3.compareTo(city2) < 0))
	{
		x = city1;
		city1 = city3;
		city3 = x;
		
	}
	if (city3.compareTo(city2) < 0)
	{
		x = city2;
		city2 = city3;
		city3 = x;
	}

	System.out.println("The three cities in alphabetical order are: \n" + city1 + " \n" + city2 + " \n" + city3);
   
   }
}