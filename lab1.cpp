#include <cstdlib>
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
  
{
    //Abrindo o arquivo texto 
   	string line;
	ifstream myfile ("dictionary.txt");
	if (myfile.is_open()){
		while (getline (myfile,line)){
			cout << line << '\n';
		}
		myfile.close();
	}
	else cout << "Unable to open file";
	
	
	
	cout << "Procurar palavra: ";
	

	system("PAUSE");
	return 0;
	

}
