//Nic Jones
//Project 2
//Problem 3.4
//CS-130

import java.util.Scanner;

public class Project2Problem4 {
   public static void main(String[] args) {
    
   Scanner scan = new Scanner(System.in);
    
   int month = (int)((Math.random() * 12) + 1);
   
   
   System.out.println("Randomly generated month: ");
   
   switch(month)
   {
      case 1: System.out.println(month + ": January"); 
         break;
      case 2: System.out.println(month + ": February"); 
         break;
      case 3: System.out.println(month + ": March"); 
         break;
      case 4: System.out.println(month + ": April"); 
         break;
      case 5: System.out.println(month + ": May"); 
         break;
      case 6: System.out.println(month + ": June"); 
         break;
      case 7: System.out.println(month + ": July"); 
         break;
      case 8: System.out.println(month + ": August"); 
         break;
      case 9: System.out.println(month + ": September"); 
         break;
      case 10: System.out.println(month + ": October"); 
         break;
      case 11: System.out.println(month + ": November"); 
         break;
      case 12: System.out.println(month + ": December"); 
   }
   
   }
}