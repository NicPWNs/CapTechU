//Nic Jones
//Project 1
//Problem 2.8
//CS-130

import java.util.Scanner;

public class Project1Problem8 {
   public static void main(String[] args) {
    
   Scanner scan = new Scanner(System.in);
    
   System.out.print("Enter the time zone offset to GMT: ");
	int zone = scan.nextInt();

	long millis = System.currentTimeMillis();

	long secs = millis / 1000;
   long secsNow = secs % 60;

	long mins = secs / 60;
   long minsNow = mins % 60;

	long hours = mins / 60;
   long hoursNow = hours % 24;
	hoursNow += zone;
   
   
   System.out.println("Current time is " + hoursNow + ":" + minsNow + ":" + secsNow);
   
   }
}