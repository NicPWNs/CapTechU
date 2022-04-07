//Nic Jones
//Project 6
//Problem 9.8
//CS-130

import java.util.Scanner;

public class Project6Problem8 
{
   public static void main(String[] args) 
   {
      final int SLOW = 1;
		final int MEDIUM = 2;
		final int FAST = 3;

		Fan f1 = new Fan();
		Fan f2 = new Fan();

		f1.setSpeed(FAST);
		f1.setRadius(10);
		f1.setColor("yellow");
		f1.turnOn();

		f2.setSpeed(MEDIUM);
		f2.setRadius(5);
		f2.setColor("blue");
		f2.turnOff();

		System.out.println(f1.toString());
		System.out.println(f2.toString());
   }
}