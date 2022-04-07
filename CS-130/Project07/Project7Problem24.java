//Nic Jones
//Project 7
//Problem 10.24
//CS-130

public class Project7Problem24
{
    public static void main(String[] args)
    {
        MyCharacter ch1 = new MyCharacter('N');
        System.out.println("Your character: " + ch1.getChar());
        System.out.println("Is the characer a letter?: " + ch1.isLetter());
        System.out.println("Is the character a digit?: " + ch1.isDigit());
    }
}