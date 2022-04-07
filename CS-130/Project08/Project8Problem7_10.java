//Nic Jones
//Project 8
//Problem 7.10
//CS-130

import java.util.Scanner;

public class Project8Problem7_10
{
   public static void main(String[] args) 
   {
      Scanner scan = new Scanner(System.in);
      
      double[] nums = new double[10];

		System.out.print("Enter Ten Numbers: ");
		for (int i = 0; i < nums.length; i++)
			nums[i] = scan.nextDouble();

		System.out.println("The Minimum Number is " + nums[indexOfSmallestElement(nums)] + " at Index: " + indexOfSmallestElement(nums));
	}

	public static int indexOfSmallestElement(double[] nums)
   {
		if (nums.length <= 1)
			return 0;
		
		double min = nums[0];
		int minIndex = 0;
      
		for (int i = 1; i < nums.length; i++)
      {
			if (nums[i] < min)
         {
				min = nums[i];
				minIndex = i;
			}
		}
		return minIndex;
	}
}