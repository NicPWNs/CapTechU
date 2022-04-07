#Project04
#Question05

open(DATA, "<question5.txt") or die "Can't open file";
seek DATA, 20, 0;
while(<DATA>)
{
print "$_";
}
close(DATA);
print("\n");