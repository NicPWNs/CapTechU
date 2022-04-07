//Nic Jones
//Project 6
//Problem 9.6
//CS-130

import java.util.Scanner;

public class Project6Problem6 
{
   public static void main(String[] args) 
   {
		StopWatch stopWatch = new StopWatch();
		int[] randomArray = getArray();
		stopWatch.start();
      System.out.println("Processing...\n");
		selectionSort(randomArray);
		stopWatch.stop();

		System.out.println("Sorting 100,000 numbers using selection sort time: " + stopWatch.getElapsedTime() + " milliseconds");
	}

	public static int[] getArray()
   {
		int[] array = new int[100000];
		for (int i = 0; i < array.length; i++)
      {
			array[i] = (int)(Math.random() * 100000);
		}
		return array;
	}

	public static void selectionSort(int[] array)
   {
		for (int i = 0; i < array.length - 1; i++)
      {
			int min = array[i];
			int minIndex = i;

			for (int j = i + 1; j < array.length; j++)
         {
				if (array[j] < min)
            {
					min = array[j];
					minIndex = j;
				}
			}

			if (i != minIndex)
         {
				array[minIndex] = array[i];
				array[i] = min;
			}
		}
   }
}