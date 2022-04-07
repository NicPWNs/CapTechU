#CT-206
#Project02
#Nicholas Jones
#One subroutine/function which takes in a list of words and returns the same list but in reverse order. 

my @animals = qw(Cat Dog Cow Horse Bird);
print "List of animals: \n";
print join " ", @animals, "\n";

print "\nNew list of animals: \n";
@animals = reverseList();
print join " ", @animals, "\n";

sub reverseList
{
	reverse @animals;
}