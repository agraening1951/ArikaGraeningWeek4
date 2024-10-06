/* Write a function that returns a pointer to the maximum value of an array of floating-point data: 
double * maximum(double * a, int size)
If size is 0, return nullptr.*/

/* ---------------------------------------------------------------------------
** I attest that this following code represents my own work and is subject to
** the plagiarism policy found in the course syllabus.
** 
** Class: 	CSC 242
** Assignment #5
** File: 	GraeningArikaAssignmentE7.cpp
** Description: E7.3
**
** Author: 	Arika Graening
** Date: 	28SEP24
** -------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

// Find the max value
double* maximum(double* a, int size)
{
    if (size == 0)
    {
        return nullptr;  // If the array is empty, return nullptr 
    }
    double* largest = &a[0];
    for (int i = 1; i < size; i++) 
    {
        if (a[i] > *largest) 
        {
            largest = &a[i];
        }
    }

    return largest;
}

int main()
{
    double values[] = {2.5, 4.0, 18.0, 37.0};
    int size = 4;

    // Call the max value and store the result
    double* max_value = maximum(values, size);

    if (max_value != nullptr)
    {
        cout << "Maximum value: " << *max_value << endl;
    }
    else
    {
        cout << "The array is empty." << endl;
    }

    return 0;
}