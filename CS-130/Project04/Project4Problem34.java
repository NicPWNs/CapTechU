//Nic Jones
//Project 4
//Problem 5.34
//CS-130

import java.util.Scanner;

public class Project4Problem34 {
    public static void main(String[] args) {
    
    Scanner scan = new Scanner(System.in);

   int compWins = 0;
   int userWins = 0;
   
   do
   {
      int comp = (int)(Math.random() * 3);
      
      System.out.print("Rock(0), Paper(1), Scissors(2): ");
      int user = scan.nextInt();
      
      System.out.print("The computer chose: ");
      switch(comp)
      {
         case 0: System.out.print("Rock");
            break;
         case 1: System.out.print("Paper");
            break;
         case 2: System.out.print("Scissors");
            break;
      }
      
      System.out.print("\nYou chose: ");
      switch(user)
      {
         case 0: System.out.print("Rock");
            break;
         case 1: System.out.print("Paper");
            break;
         case 2: System.out.print("Scissors");
            break;
         default: System.out.println("Invalid Option.");
                  System.exit(1);
      }
      
      if (comp == user)
         System.out.println("\nIt's a draw!");
         
      else
      {
         boolean win = (user == 2 && comp == 1) || (user == 0 && comp == 2) || (user == 1 && comp == 0);
         
         if(win)
         {
            System.out.println("\nYou won!");
            userWins++;
         }
         
         else
         {
            System.out.println("\nYou lose.");
            compWins++;
         }
         
      }
      
      System.out.println("Computer wins: " + compWins + "\nUser wins: " + userWins);
   
   } while(Math.abs(compWins - userWins) <= 2);
   
   }
}