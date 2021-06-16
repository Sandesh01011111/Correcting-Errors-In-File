//This program reads an input file character by character.
//The input file has errors and is called activity.dat.
//The the numbers 0-7 need to be replaced by the correct
//characters. Ask the user to input the input file and
//output file names. Read the input character by character
//and write the output to a file called competition.dat.
//The output file needs to contain the corrections from all
//the errors from the input file.


#include <iostream>
#include <fstream>
#include <cstdlib>


using namespace std;


void correct_text(ifstream &inputfile, ofstream &outputfile);
//This function takes the input and output files as parameters,
//then uses a while loop to check for the end of file. While not
//the end of file, the program will read the current character
//and check if any changes need to be made to the character before
//it is written to the output file. The variable current_char will
//be used to keep track of the character being read. The input file
//character will be displayed to the screen to show the input file
//contents has changed in the output file.


int main()
{
    ifstream fin;
    ofstream fout;
    char infile_name[20], outfile_name[20];


    cout << "Enter the name of the input file: ";
    cin >> infile_name;
    cout << endl;
    cout << "Enter the name of the output file: ";
    cin >> outfile_name;
    cout << endl;


    fin.open(infile_name);
    if(fin.fail())
    {
        cout << "The input file " << infile_name << " failed to open.";
        exit(1);
    }

    fout.open(outfile_name);
    if(fout.fail())
    {
        cout << "The output file " << outfile_name << " failed to open.";
        exit(1);
    }


    correct_text(fin, fout);


    fin.close();


    fout.close();
}


void correct_text(ifstream &inputfile, ofstream &outputfile)
{
    char current_char;


    while(! inputfile.eof())
   {
       inputfile.get(current_char);


       cout << current_char;


       if(current_char == '0')
       {
           current_char = 's';
       }

       if(current_char == '1')
       {
           current_char = 'g';
       }
       if(current_char == '2')
       {
           current_char = 'o';
       }
       if(current_char == '3')
       {
           current_char = 'y';
       }
       if(current_char == '4')
       {
           current_char = 'v';
       }
       if(current_char == '5')
       {
           current_char = 'n';
       }
       if(current_char == '6')
       {
           current_char = 'f';
       }
       if(current_char == '7')
       {
           current_char = 'j';
       }


       outputfile << current_char;
   }

}
