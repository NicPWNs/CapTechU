//Nic Jones
//Project 8
//Problem 8.10
//CS-130

import java.util.Scanner;

public class Project8Problem8_10
{
   public static void main(String[] args) 
   { 
      int[][] matrix = new int[4][4];
 
		for (int i = 0; i < matrix.length; i++)
      {
			for (int j = 0; j < matrix[i].length; j++)
         {
				matrix[i][j] = (int)(Math.random() * 2);
			}
		}

		for (int i = 0; i < matrix.length; i++)
      {
			for (int j = 0; j < matrix[i].length; j++)
         {
				System.out.print(matrix[i][j]);
			}
			System.out.println();
		}

		
		System.out.println("Largest Row Index: " + largestRow(matrix));
		System.out.println("largest Column Index: " + largestCol(matrix));

	}

	public static int largestRow(int[][] matrix)
   {
		int maxIndex = 0;
		int max = 0;
      int count = 0;
      
		for (int i = 0; i < matrix.length; i++)
      {
			for (int j = 0; j < matrix[i].length; j++)
         {
				if (matrix[i][j] == 1)
					count++;
			}
			if (count > max) {
				max = count;
				maxIndex = i;
			}
		}
		return maxIndex;
	}

	public static int largestCol(int[][] matrix)
   {
		int maxIndex = 0;
		int max = 0;
      int count = 0;
              
		for (int i = 0; i < matrix[0].length; i++)
      {
			for (int j = 0; j < matrix.length; j++)
         {
				if (matrix[i][j] == 1)
					count++;
			}
			if (count > max) {
				max = count;
				maxIndex = i;
			}
		}
		return maxIndex;
	}
}