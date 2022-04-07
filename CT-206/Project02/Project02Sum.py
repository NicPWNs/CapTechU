#CT-206
#Project02 
#Nicholas Jones
#One subroutine/function which takes in a list of integers and returns the sum of the list of integers.

def sumList(integers):
    sumInt = sum(integers)
    print("\nSum of list has been calculated within function.")
    return sumInt

integers = [1, 2, 3, 4]
print ("List of integers: ")
print (integers)

sumInt = sumList(integers)
  
print ("\nSum of integers: ")
print (sumInt)