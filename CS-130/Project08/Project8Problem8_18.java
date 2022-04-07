//Nic Jones
//Project 8
//Problem 8.18
//CS-130

import java.util.Scanner;

public class Project8Problem8_18
{
   public static void main(String[] args) 
   { 
      int[][] m = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
      
      System.out.println("Original Array: ");
		for (int i = 0; i < m.length; i++)
      {
			for (int j = 0; j < m[i].length; j++)
         {
				System.out.print(m[i][j] + " ");
			}
			System.out.println();
		}
      
		shuffle(m);
      
      System.out.println("\nShuffled Array: ");
		for (int i = 0; i < m.length; i++)
      {
			for (int j = 0; j < m[i].length; j++)
         {
				System.out.print(m[i][j] + " ");
			}
			System.out.println();
		}
	}

	public static void shuffle(int[][] m)
   {
		int[] x = new int[2];

		for (int i = 0; i < m.length; i++)
      {
			int i1 = (int)(Math.random() * m.length);

			x[0] = m[i][0];
			x[1] = m[i][1];
			m[i][0] = m[i1][0];
			m[i][1] = m[i1][1];
			m[i1][0] = x[0];
			m[i1][1] = x[1];
		}
	}
}