#CT-206
#Project02 
#Nicholas Jones
#One subroutine/function which takes in two lists and returns a dictionary 
#with the keys being the first list and the values being the second list. 
#Recall that dictionary is a group of unordered key-value pairs. 

def dictionaryFromLists(animals, sounds):
    dictionary = dict(zip(animals, sounds))
    print("\nDictionary has been created within function.")
    return dictionary

animals = ["dog", "cat", "cow", "horse"]
sounds = ["woof", "meow", "moo", "nay"]
print ("List of animals: ")
print (animals)
print ("List of sounds: ")
print (sounds)

dictionary = dictionaryFromLists(animals, sounds)
  
print ("\nDictionary: ")
print (dictionary)