//Nic Jones
//Project 6
//Problem 9.6
//CS-130

public class StopWatch
{
	private long startTime;
	private long endTime;

	StopWatch()
   {
		startTime = System.currentTimeMillis();
	}

	public void start()
   {
		startTime = System.currentTimeMillis();
	} 

	public void stop()
   {
		endTime = System.currentTimeMillis();
	}

	public long getElapsedTime()
   {
		return getEndTime() - getStartTime();
	}

	public long getStartTime()
   {
		return startTime;
	}

	public long getEndTime()
   {
		return endTime;
	}
}