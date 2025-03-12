# Assignment 2

Your objective is to write a program that outputs a calendar for a given month in a given year, given the day of the week on which the 1st of the month fell. The user enters these 3 pieces of information in numeric format (months are: 1=Jan, 2=Feb, etc …, and days are 1=Sun, 2=Mon, etc …). The program outputs that month’s calendar, followed by a sentence indicating on which day the month ended.

For example, if the user enters 2 (for the month), 2012, and 4 (for the first of the month), your program outputs something like:

```
Here is the calendar for February of 2012:
         
  Sun  Mon  Tue  Wed  Thu  Fri  Sat
  ---------------------------------
                  1    2    3    4
   5    6    7    8    9   10   11
  12   13   14   15   16   17   18  
  19   20   21   22   23   24   25
  26   27   28   29      
   
 The month ends on a Wednesday.
```

As you can see, for the month of February, your program has to decide if the year is leap (29 days) or not.  Important: Your program MUST be simple. Points will be deducted for unnecessary complications! Other than i/o statements, all you need to use is some conditional  statements (if  & switch), and one loop. 
