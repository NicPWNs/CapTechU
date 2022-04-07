//Nic Jones
//Project 5
//Problem 6.18
//CS-130

import java.util.Scanner;

public class Project5Problem18 {
   public static void main(String[] args) 
   {
    
      Scanner scan = new Scanner(System.in);
      
		System.out.print("Enter a password: ");
		String password = scan.nextLine();

		System.out.println((isValid(password) ? "Valid " : "Invalid ") + "Password");
	}

	public static boolean isValid(String password)
   {
		final int LENGTH = 8;
	   final int DIGITS = 2;

		boolean validPassword = 
			validLength(password, LENGTH) && 
			validLettersDigits(password) &&
			validDigits(password, DIGITS);

		return validPassword;
	}

	public static boolean validLength(String password, int validLength)
   {
		return password.length() >= validLength;
	}

	public static boolean validLettersDigits(String password)
   {
		for (int i = 0; i < password.length(); i++)
      {
			if (!Character.isLetterOrDigit(password.charAt(i)))
         {
				return false;
			}
		}
		return true;
	}

	public static boolean validDigits(String password, int n)
   {
		int numDigits = 0;
		for (int i = 0; i < password.length(); i++)
      {
			if (Character.isDigit(password.charAt(i)))
         {
				numDigits++;
			}
			if (numDigits >= n)
         {
				return true;
			}
		}
      
		return false;
	}  
   
}