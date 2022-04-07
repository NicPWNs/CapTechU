#Project04
#Question01

my $str;
print ("Enter text to write: \n");
print ("Type 'exit' when finished.\n");

while($str ne "exit")
{
  print(">");       
  chomp($str = <STDIN>);  
  
  open(DATA, ">>question1.txt") or die "Can't open file";
  if($str ne "exit")
	{print DATA $str;}
  close(DATA);
}

print ("Write Successful!\n");