print('print leap year between the two given years:')
print('enter start year:')
startYear=int(input())
print('enter last year:')
endYear=int(input())
print('List of leap years:')
for year in range(startYear,endYear):
    if(0==year%4)and(0!=year%100)or(0==year%400):
        print(year)
