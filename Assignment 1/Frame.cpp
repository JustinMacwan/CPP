/************************************************
Filename: Frame.cpp
Version: 1.0
Student Name: Justin Macwan
Student Number: 040752156
Course Name/Number: C++ Programming CST8219
Lab Section: 303
Assignment # : Assignment 1
Assignment Name: Animation Project in C++
Professor's Name: Andrew Tyler
List of Source and Header Files: Frame.cpp and Frame.h
Purpose: to initialize and cleanup all the variables
         in the struct Frame. 
*************************************************/

#include "Frame.h"
using namespace std;

/*****************************************
Function Name: Frame
Purpose: To initialize the variables in the struct Frame.
Function In parameters: N/A
Function Out parameters: N/A
Version: 1.0
Student Name: Justin Macwan
*****************************************/
Frame::Frame() {
	fileName = nullptr;
	pNext = nullptr;
}

/*****************************************
Function Name: ~Frame
Purpose: To cleanup the variables in the struct Frame.
Function In parameters: N/A
Function Out parameters: N/A
Version: 1.0
Student Name: Justin Macwan
*****************************************/
Frame::~Frame() {
	delete this->fileName;
	delete this->pNext;
}