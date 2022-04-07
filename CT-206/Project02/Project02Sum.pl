#CT-206
#Project02
#Nicholas Jones
#One subroutine/function which takes in a list of integers and returns the sum of the list of integers.

my @integers = (1, 2, 3, 4);
print "List of integers: \n";
print join " ", @integers, "\n";

$sum = sumList();
print "\nSum of integers: \n";
print $sum, "\n";

sub sumList
{
	foreach (@integers) 
	{
	$sum += $_;
	}
	print "\nSum of integers calculated within function.\n";
	return $sum;
}