my %hash1 = (
	cow => "moo",
	dog => "woof",
	cat => "meow",
	horse => "nay",
	sheep => "bah"
	);

while( my( $key, $value ) = each %hash1 ){
		print "$key $value\n";
}

