/*Write a program that reads each line in a file, reverses its characters,
and writes the resulting line to another file. Suppose the user specifies
input.txt and output.txt when prompted for the file names, and input.txt
contains the lines
   Mary had a little lamb
   Its fleece was white as snow
   And everywhere that Mary went
   The lamb was sure to go.
 After the program is finished, output.txt should contains
   bmal elttil a dah yraM
   wons sa etihw saw eceelf stI
   tnew yraM taht erehwyreve dnA
   .og ot erus saw bmal ehT*/

/* ---------------------------------------------------------------------------
** I attest that this following code represents my own work and is subject to
** the plagiarism policy found in the course syllabus.
** 
** Class: 	CSC 242
** Assignment #5
** File: 	E85.cpp
** Description: E8.5
**
** Author: 	Arika Graening
** Date: 	28SEP24
** -------------------------------------------------------------------------*/

#include <iostream>
#include <string>
#include <algorithm>
#include <fstream> 
using namespace std;

int main()
{
    string input_file_name;
    string output_file_name;

    cout << "Input file name: ";
    cin >> input_file_name;
    input_file_name = "/Users/graeninghousehold/Documents/Intro to Programming/Assignments/A4/E85/" + input_file_name;

    ifstream input_file(input_file_name);
    if(!input_file)
        {
         cout << "error opening file: " << input_file_name << endl;
         return 1;
        }   

    cout << "Output file name: ";
    cin >> output_file_name;
    output_file_name = "/Users/graeninghousehold/Documents/Intro to Programming/Assignments/A4/E85/" + output_file_name;

    ofstream output_file(output_file_name);
    if (!output_file)
        {
         cout << "error opening output file: " << output_file_name << endl;
         return 1;
        }
string line;

while (getline(input_file, line))
    {
    cout << "read line: " <<line <<endl;
     reverse(line.begin(), line.end());
     output_file << line << endl;
    }
input_file.close();
output_file.close();

cout << "lines have been reversed and written to " << output_file_name << endl;

return 0;
}