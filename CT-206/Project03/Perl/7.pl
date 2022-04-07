my %hash1 = (
	cow => "moo",
	dog => "woof",
	cat => "meow",
	horse => "nay",
	sheep => "bah"
	);
	
if (exists $hash1{'cow'}){
	print("True\n");
}
else {
	print ("False\n");
}

if (exists $hash1{'dog'}){
	print("True\n");
}
else {
	print ("False\n");
}

if (exists $hash1{'frog'}){
	print("True\n");
}
else {
	print ("False\n");
}