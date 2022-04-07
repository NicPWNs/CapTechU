my %hash1 = (
	cow => "moo",
	dog => "woof",
	cat => "meow",
	horse => "nay",
	sheep => "bah"
	);
	
$hash1{'frog'} = 'croak';
	
foreach (keys %hash1) {
    print "$_ : $hash1{$_}\n";
  }