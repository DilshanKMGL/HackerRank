#include <iostream>
#include <string>

using namespace std;

string timeConversion(string s) {
	string pm_s = s.substr(8);
	int hour = stoi(s.substr(0, 2));
	if (pm_s == "PM")
	{
		if (hour < 12)
			hour += 12;
		s = to_string(hour) + s.substr(2,6);
	}
	else
	{
		if (hour == 12)
			s = "00" + s.substr(2, 6);
		else
			s = s.substr(0, 8);
	}
	return s;
}

int main(void)
{
	string s = "12:01:00PM";
	cout << timeConversion(s) << endl;
	s = "12:01:00AM";
	cout << timeConversion(s) << endl;
	s = "01:01:00PM";
	cout << timeConversion(s) << endl;
	s = "01:01:00AM";
	cout << timeConversion(s) << endl;
	s = "11:01:00PM";
	cout << timeConversion(s) << endl;
	s = "11:01:00AM";
	cout << timeConversion(s) << endl;
}