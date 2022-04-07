//Nic Jones
//Project 4
//Problem 5.7
//CS-130

import java.util.Scanner;

public class Project4Problem7 {
    public static void main(String[] args) {
    
    Scanner scan = new Scanner(System.in);

   int fourCost = 0;
   int tenCost = 0;
   int tuition = 10000;
   
   for (int i = 1; i <= 14; i++)
   {
      tuition += (tuition * 0.05);
               
      if (i == 10)
         tenCost = tuition;
      
      if (i > 10 )
         fourCost += tuition;
   }
   
   System.out.println("Tuition cost in ten years: $" + tenCost);
   System.out.println("Tuition cost for four years: $" + fourCost);
   
   }
}