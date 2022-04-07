//Nic Jones
//Project 4
//Problem 5.20
//CS-130

import java.util.Scanner;

public class Project4Problem20 {
    public static void main(String[] args) {
    
    Scanner scan = new Scanner(System.in);

   int perLine = 8;
   int count = 0;
   
   for (int i = 2; i <= 1000; i++)
   {
   
      boolean prime = true;
   
      for (int divisor = 2; divisor <= i / 2; divisor++) 
      {
				if (i % divisor == 0)	
            {
				   prime = false;
				   break;
				}
	   }
   
      if (prime)
      {
         count++;
         
         if (count % perLine == 0)
            System.out.println(i);
            
         else
            System.out.print(i + " ");
      }
   }
   
   }
}