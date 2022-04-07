#Project04
#Question03

open(DATA, "<question3.txt") or die "Can't open file";
while(<DATA>)
{
print "$_";
}
close(DATA);
print("\n");
