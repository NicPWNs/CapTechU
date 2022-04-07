//Nic Jones
//Project 3
//Problem 4.13
//CS-130

import java.util.Scanner;

public class Project3Problem13 {
    public static void main(String[] args) {
    
    Scanner scan = new Scanner(System.in);

   System.out.print("Enter a letter: ");
   String str = scan.nextLine();
   char chr = str.charAt(0);
   chr = Character.toUpperCase(chr);
   
   if (Character.isLetter(chr))
   {
      switch(chr)
      {
         case 'A': System.out.println(chr + " is a vowel");
            break;
         case 'E': System.out.println(chr + " is a vowel");
            break;
         case 'I': System.out.println(chr + " is a vowel");
            break;
         case 'O': System.out.println(chr + " is a vowel");
            break;
         case 'U': System.out.println(chr + " is a vowel");
            break;
         default : System.out.println(chr + " is a consonant");
      }
   }
   else
      System.out.println(chr + " is an invalid input");
   }
}