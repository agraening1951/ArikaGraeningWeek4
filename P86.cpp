/*Write a program that reads the country data in the file how_to_1/worldpop.txt 
(included with the book’s source code). Do not edit the file. 
Use the following algorithm for processing each line. 
Add characters that are not white space to the country name. 
When you encounter a white space, locate the next non-white space character. 
If it is not a digit, add a space and that character to the country name, and keep adding characters 
until the next white space. If a white space is followed by a digit, unget it and read the number. 
Print the total of all country populations (excepting the entry for “European Union”).*/

/* ---------------------------------------------------------------------------
** I attest that this following code represents my own work and is subject to
** the plagiarism policy found in the course syllabus.
** 
** Class: 	CSC 242
** Assignment #5
** File: 	P86.cpp
** Description: P8.6 
**
** Author: 	Arika Graening
** Date: 	28SEP24
** -------------------------------------------------------------------------*/

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main ()
{
    ifstream file ("worldpop.txt");
    if (!file) 
    {
        cerr << "Error, couldn't open file" << endl;
        return 1;
    }

    string line;
    long long total_population = 0;

    while (getline(file, line))
    {
        string country_name = "";
        string population_str = "";
        bool found_population = false;

        for (size_t i = 0; i < line.length(); ++i) 
        {
            if (isdigit(line[i]))
            {
                found_population = true;
                population_str += line[i];
            }
            else if (found_population)
            {
                if (isdigit(line[i]))
                {
                    population_str += line[i];
                }
                else 
                {
                    break;
                }
            }
            else
            {
                if (!isspace(line[i]))
                {
                    country_name += line[i];       
                }   
                else if (i < line.length() - 1 && !isspace(line[i + 1]) && !isdigit(line[i + 1])) 
                {
                    country_name += ' ';
                }
            }
        }
        if (country_name != "European Union" && !population_str.empty())
        {
            total_population += stoll(population_str);
        }
    }

    file.close();
    cout << "Total population (not including European Union): " << total_population << endl;
    return 0;
}