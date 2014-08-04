//Israt Khan
//Lab4 - Calculate Military Time



#ifndef MILTIME
#define MILTIME
#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;


class Time {
protected:
	int hour;
	int min;
	int sec;

public:
	//Default constructor
	Time()
	{ hour = 0; min = 0; sec = 0; }

	//Constructor
	Time (int h, int m, int s)
	{ hour = h; min = m; sec = s; }

	//Accesor functions
	int getHour() const;
	int getMin() const;
	int getSec() const;

	//Set functions
	void setHour (int);
	void setMin (int);
	void setSec (int);
	bool setTime (int, int, int);

	//Output the hours, mins and seconds
	void print() const;
	void calculate (int,double);

};

class MilTime: public Time
{
private:
	int milHours;
	int milMinutes;
	int milSeconds;

public:
	//Constructor
	MilTime (int mH, int mM, int mS)
	{
		milHours = mH; milMinutes = mM; milSeconds = mS;
	}
};
#endif