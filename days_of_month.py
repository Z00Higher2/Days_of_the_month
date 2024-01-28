#This program prints out the number of days in the selected taking the leap year into consideration


year = int(input('Enter the year: ')) #User inputs the year
month = int(input('Enter the month: ')) #User inputs the month

if year % 4 == 0 and year % 100 != 0 :
     
     if month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12: #January, March, June, July, August, October, December
        print("31 days")
     elif month == 2:
        print("29 days") #February
     else:
         print("30 days") # Rest of month which has 30 days      

elif year % 4 != 0 and year % 100 == 0 or year % 400 != 0:
     if month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12: #January, March, June, July, August, October, December
        print("31 days")
        print("31 days")
     elif month == 2: #February
        print("28 days")
     else:
         print("30 days") # Rest of month which has 30 days       
else:
     if month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12: #January, March, June, July, August, October, December
        print("31 days")
        print("31 days")
     elif month == 2: #February
        print("29 days")
     else:
         print("30 days") # Rest of month which has 30 days    