#Project04
#Question02

my $str = "This is a test string.";
  
open(DATA, ">question2.txt") or die "Can't open file";
print DATA $str;
close(DATA);

print ("Write Successful!\n");