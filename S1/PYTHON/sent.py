sentance=input("Enter a sentence")
pos=0
neg=0
str=sentance.split()
poslist=["Good","Nice","Happy","Great"]
neglist=["Bad","Wrong","Sad","Unhappy"]
for string in str:
	if string in poslist:
		
