#CT-206
#Project02 
#Nicholas Jones
#One subroutine/function which takes in a list of words and returns the same list but in reverse order. 

def reverseList(animals):
    animals.reverse()
    print("\nList has been reversed within function.")
    return animals

animals = ["dog", "cat", "cow", "horse", "bird"]
print ("List of animals: ")
print (animals)

reverseList(animals)
  
print ("\nNew list of animals: ")
print (animals) 

      