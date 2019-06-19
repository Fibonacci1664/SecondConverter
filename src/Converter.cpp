/*
 * Converter.cpp
 *
 *  Created on: 17 Jun 2019
 *      Author: Dave
 */

#include<iostream>
#include "Converter.h"

using namespace std;

Converter::Converter()
{
	// TODO Auto-generated constructor stub

}

Converter::~Converter()
{
	// TODO Auto-generated destructor stub
}

void Converter::secondsConverter(double seconds)
{
	double mins = seconds / 60;
	double hrs = mins / 60;
	//double days = hrs / 24;

	int actualDays = hrs / 24;
	int actualHours = (int)hrs % 24;
	int actualMins = (int)mins % 60;
	int actualSecs = (int)seconds % 60;



	cout << actualDays <<  " Days " << actualHours << ":" << actualMins << ":" << actualSecs << endl;

}

