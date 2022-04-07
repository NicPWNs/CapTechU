//Nic Jones
//Project 6
//Problem 9.3
//CS-130

import java.util.Scanner;

public class Project6Problem3 
{
   public static void main(String[] args) 
   {
      java.util.Date date = new java.util.Date();
      
		for (long i = 10000; i <= 1e11; i *= 10)
      {
		   date.setTime(i);
			System.out.println("Date and time for: " + i + " : "  + date.toString());
		}
   }
}