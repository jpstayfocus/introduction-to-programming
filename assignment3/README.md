# Assignment 3

In this assignment, you have to print the complete 12-month calendar for a particular year.
The user will be asked to enter the year, as well as the day of the week for the 1st of January. The program will then have a loop that executes 12 times, each time calling a function that prints one month. At the end, the program prints the day of the week when the year ends. Note that the day of the week for the first of a particular month will be one following the last day of the week for the previous month. So the complete main() will be like:

```
int main(){
  cout << "which year? ";
  int year;             // needed to decide whether it's a leap year (for February)
  cin >> year;
  cout << "enter the day of the week for the 1st of January (1=Sun, 2=Mon etc) ";
  int first;
  cin >> first;

  for (int month = 1; month <= 12; month++)
    draw_month (first, month, year);
  . . . 
} 
```

In addition, the tasks of :
- Finding the maximum days in a particular month of a particular year 
- Finding the name of a month given the month number
- Finding the name of the day of the week given the day number

are each performed by a separate function, which will be called from within the draw_month function. To help you, here are the signatures for all the functions you need:

```
int find_max_days (int month, int year);
string month_name (int month);
string day_of_week (int pos);
void draw_month (int &first, int month, int year);
```
