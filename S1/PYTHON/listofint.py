list1=input("Enter the first list:")
list2=input("Enter the second list:")
if len(list1) == len(list2):
  print("The two list are not of the same length.")
else:
  print("The two list are not of the same length")
  
sum1=sum(list1)
sum2=sum(list2)

if sum1 == sum2:
   print("the two lists sum to the same value.")
else:
   print("the two lists do not sum to the same value.")
set1=set(list1)
set2=set(list2)
intersection=set1 & set2

if intersection:
   print("The two lists have atleast one value in common.")
else:
   print("The two lists have no values in common.")
