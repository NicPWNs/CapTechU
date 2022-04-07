//Nic Jones
//Project 4
//Problem 5.10
//CS-130

import java.util.Scanner;

public class Project4Problem10 {
    public static void main(String[] args){
    
    Scanner scan = new Scanner(System.in);

   int perLine = 10;
   int count = 0;
   
   for (int i = 100; i <= 1000; i++)
   {
      if (i % 5 == 0 && i % 6 == 0)
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