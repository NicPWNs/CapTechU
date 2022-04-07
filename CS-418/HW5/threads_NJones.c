#include <stdio.h> 
#include <stdlib.h> 
#include <pthread.h>

//Create struct for passing to each thread
typedef struct thread_data
{
	int fullArr[10000];
	int start;
	int end;
	int max;
	int min;
} thread_data;

//Min and max calculation function to be called by each thread
void *minMaxThreads(void *arg)
{
	thread_data *tdata=(thread_data *)arg;;
	int i;
	int min = 10000;
	int max = 0;
	for (i = tdata->start; i < tdata->end; i++)
	{
		if(tdata->fullArr[i] > max)
        {
            max = tdata->fullArr[i];
        }
        
        if(tdata->fullArr[i] < min)
        {
            min = tdata->fullArr[i];
        }
	}
	tdata->max=max;
	tdata->min=min;
	pthread_exit(NULL);
}

int main() 
{ 
	//Create master array of 10000 ints between 0 and 50k
	printf("Generating 10,000 random integer array...");
	time_t start,end;
	int randArr[10000];
	int maxArr[100];
	int minArr[100];
	int freePos = 0;
	int i;
	int max = 0;
	int min = 10000;
	for (i = 0; i < 10000; i++) 
	{
	    randArr[i] = (rand()*rand()) % 50001 + 0;
	}
	size_t arrLen = sizeof(randArr)/sizeof(randArr[0]);
	printf(" Array Generated! Array Length: %d", arrLen);
	
	//Show example first 10 and last 10 values of array
	printf("\nFirst 10 values: ");
	for (i = 0; i < 10; i++) 
	{
	    printf("%d, ", randArr[i]);
	}
	
	printf("\nLast 10 values: ");
	for (i = 9990; i < 10000; i++) 
	{
	    printf("%d, ", randArr[i]);
	}
	
	start=clock();
	//Split processing of min and max accross 100 threads
	printf("\n==========100 Thread Simulation==========");
	thread_data tdata;
	for(i = 0; i < 10000; i++)
  	{
    tdata.fullArr[i] = randArr[i];
  	}
  	tdata.start = 0;
  	tdata.end = 100;
	for (i = 0; i < 100; i++)
	{
		pthread_t thread_id;
	    pthread_create(&thread_id, NULL, minMaxThreads, (void *)&tdata); 
	    pthread_join(thread_id, NULL);
		tdata.start += 100;
		tdata.end += 100;
		maxArr[freePos] = tdata.max;
		minArr[freePos] = tdata.min;
		freePos++;
	}
	
	//Determine min and max of centralized mins and maxs
	for (i = 0; i < 100; i++)
	{
		if(maxArr[i] > max)
        {
            max = maxArr[i];
        }
        
        if(minArr[i] < min)
        {
            min = minArr[i];
        }
	}
	//Calculate time and print
	end=clock();
	int t=(end-start);
	printf("\nTime to complete was: %d ms",t);
	printf("\nMax of array is: %d", max);
	printf("\nMin of array is: %d", min);
	
	//Fresh variables
	int maxArr2[100];
	int minArr2[100];
	int freePos2 = 0;
	int max2 = 0;
	int min2 = 10000;
	i = 0;
	
	start=clock();
	//Split processing of min and max accross 10 threads
	printf("\n==========10 Thread Simulation==========");
	thread_data tdata2;
	for(i = 0; i < 10000; i++)
  	{
    tdata2.fullArr[i] = randArr[i];
  	}
  	tdata2.start = 0;
  	tdata2.end = 1000;
	for (i = 0; i < 10; i++)
	{
		pthread_t thread_id2;
	    pthread_create(&thread_id2, NULL, minMaxThreads, (void *)&tdata2); 
	    pthread_join(thread_id2, NULL);
		tdata2.start += 1000;
		tdata2.end += 1000;
		maxArr2[freePos2] = tdata2.max;
		minArr2[freePos2] = tdata2.min;
		freePos2++;
	}
	
	//Determine min and max of centralized mins and maxs
	for (i = 0; i < 10; i++)
	{
		if(maxArr2[i] > max2)
        {
            max2 = maxArr2[i];
        }
        
        if(minArr2[i] < min2)
        {
            min2 = minArr2[i];
        }
	}
	end=clock();
	int t2=(end-start);
	printf("\nTime to complete was: %d ms",t2);
	printf("\nMax of array is: %d", max2);
	printf("\nMin of array is: %d", min2);

	//Fresh variables
	int maxArr3[100];
	int minArr3[100];
	int freePos3 = 0;
	int max3 = 0;
	int min3 = 10000;
	i = 0;
	
	start=clock();
	//Split processing of min and max accross 2 threads
	printf("\n==========2 Thread Simulation==========");
	thread_data tdata3;
	for(i = 0; i < 10000; i++)
  	{
    tdata3.fullArr[i] = randArr[i];
  	}
  	tdata3.start = 0;
  	tdata3.end = 5000;
	for (i = 0; i < 2; i++)
	{
		pthread_t thread_id3;
	    pthread_create(&thread_id3, NULL, minMaxThreads, (void *)&tdata3); 
	    pthread_join(thread_id3, NULL);
		tdata3.start += 5000;
		tdata3.end += 5000;
		maxArr3[freePos3] = tdata3.max;
		minArr3[freePos3] = tdata3.min;
		freePos3++;
	}
	
	//Determine min and max of centralized mins and maxs
	for (i = 0; i < 2; i++)
	{
		if(maxArr3[i] > max3)
        {
            max3 = maxArr3[i];
        }
        
        if(minArr3[i] < min3)
        {
            min3 = minArr3[i];
        }
	}
	//Calculate time and print
	end=clock();
	int t3=(end-start);
	printf("\nTime to complete was: %d ms",t3);
	printf("\nMax of array is: %d", max3);
	printf("\nMin of array is: %d", min3);

    exit(0); 
}
