#Project04
#Question04

open(DATA, "<question4source.txt") or die "Can't open file";
open(DATA2, ">question4dest.txt") or die "Can't open file";

while(<DATA>)
{
print DATA2 $_;
}
close(DATA);
close(DATA2);
print("File content copied!\n");
