#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
	
	// check if there are enough arguments
	if((argc < 3)||(argc > 3)){
        cerr << "Error: Three command line arguments required" << endl;
    }
    else if(argc == 3){
	
	// open the first file
 	ifstream inputFile(argv[1]);//2nd value in argv[]
    
	char c;

 	if (inputFile.fail()) // check if it is successful 
 	{
 		cerr << " Cannot open the input file!" << endl;
 		return 1;
 	}
 	

	// open the second file
	ofstream outputFile(argv[2]);//3rd value in argv[]
 	if (outputFile.fail())
 	{
 		cerr << " Cannot open the output file!" << endl;
 		return 1;
 	}
 	
 	while(inputFile.get(c)) 
	{
		outputFile << c;
	}
    }
 	

 	 return 0;

 } 