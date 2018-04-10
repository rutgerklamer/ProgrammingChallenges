#include <iostream>

int main()
{
	int sunday_count = 0;
	int day = 1;
	for (int year = 1901; year < 2001; year++)
		for (int month = 1; month < 13; month++)
		{
			int month_days = 31;
			if (month == 4 || month == 6 || month == 9 || month == 11) 
				month_days = 30;
			else if (month == 2) {
				if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
					month_days = 29;
				else
					month_days = 28;
			}
			for (int day_of_month = 0; day_of_month < month_days; day_of_month++) {
				day++;
				if (day > 7)
					day = 1;
				else if (day == 7 && day_of_month == 1)
					sunday_count++;
			}
		}
	std::cout << sunday_count << std::endl;
	return 0;
}
