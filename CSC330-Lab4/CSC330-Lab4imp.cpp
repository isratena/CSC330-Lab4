#include "stdafx.h"
#include "CSC330-Lab4.h"

//Accesor functions
int Time::getHour() const
{ return hour; }

int Time::getMin() const
{ return min; }

int Time::getSec() const
{ return sec; }

//Set functions
void Time::setHour (int h)
{
	if (0 <= h && h < 12)
		hour = h;
	else
		hour = 0;
}

void Time::setMin (int m)
{
	if (0 <= m && m < 60)
		min = m;
	else
		min = 0;
}

void Time::setSec (int s)
{
	if (0 <= s && s < 60)
		sec = s;
	else
		sec = 0;
}

bool Time::setTime (int h, int m, int s)
{

	////int hs = h;
	if (h >= 0 && h <= 12 && m >= 0 && m <= 60 && s >= 0 && s <= 60)
		return true;
	else
		return false;

}
void calculate(int& h, double& m)
{
    if(h<=12)
    {
        h=h-0;
        m=m-0;
    }

    if(h>12 && h<=24)
    {
        h=h-12;
        m=m-0;
    }
//void display(int h, double m)
//{    if(h<=12)
//    {
//        cout<<"The time in 12 hour format is:"<<h<<":"<<m<<"AM."<<endl;
//    }
//
//    if(h>12 && h<=24)
//    {
//        cout<<"The time in 12 hour format is:"<<h<<":"<<m<<"PM."<<endl;
//    }


