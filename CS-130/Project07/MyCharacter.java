public class MyCharacter {

    private char ch;

    public MyCharacter(char chct)
    {
        ch = chct;
    }
    
    public char getChar()
    {
        return ch;
    }

    public boolean isDigit() 
    {
        return ch <= '9' && ch >= '0';
    }

    public boolean isLetter()
    {
        return (ch <= 'z' && ch >= 'a') || (ch <= 'Z' && ch >= 'A');
    }

}