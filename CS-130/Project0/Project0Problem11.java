//Nic Jones
//Project 0
//Problem 1.11
//CS-130

public class Project0Problem11 {
    public static void main(String[] args) {
      
   double birth = 7.0;
   double immigrant = 45.0;
   double death = 13.0;
   double population = 312032486.0;
   
   final double SECONDS = 31536000.0;
   
   double numBirths = SECONDS / birth;
   double numImmigrants = SECONDS / immigrant;
   double numDeaths = SECONDS / death;
   
   for (int i = 1; i <= 5; i++)
   {
   population += numBirths + numImmigrants - numDeaths;
   System.out.println("Year Number " + i + " = " + population);
   }
   
   }
}