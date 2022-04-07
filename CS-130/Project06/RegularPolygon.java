public class RegularPolygon
{
	private int n;
	private double side;
	private double x;
	private double y;

	RegularPolygon()
   {
		n = 3;
		side = 1;
		x = 0;
      y = 0;
	}

	RegularPolygon(int newNum, double newSide)
   {
		n = newNum;
		side = newSide;
		x = 0;
      y = 0;
	}

	RegularPolygon(int newNum, double newSide, double newX, double newY)
   {
		n = newNum;
		side = newSide;
		x = newX;
		y = newY;
	}

	public void setNum(int newNum)
   {
		n = newNum;
	}

	public void setSide(double newSide)
   {
		side = newSide;
	}

	public void setX(double newX)
   {
		x = newX;
	}

	public void setY(double newY)
   {
		y = newY;
	}

	public int getNum()
   {
		return n;
	}

	public double getSide()
   {
		return side;
	}

	public double getX()
   {
		return x;
	}

	public double getY()
   {
		return y;
	}

	public double getPerimeter()
   {
		return side * n;
	}

	public double getArea()
   {
		return (n * Math.pow(side, 2)) / (4 * Math.tan(Math.PI / n));
	}
}