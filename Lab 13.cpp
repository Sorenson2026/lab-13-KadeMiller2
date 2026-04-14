//Kade Miller 4/14/26 Lab 13
//This program fills a vector and then sorts it using bubble sort
#include <iostream>
#include <vector>
#include <iomanip>
#include <utility>
using namespace std;

//Declare functions
void bubbleSort(vector<int>& vector);
void fillVector(vector<int>& vector);

//This function calls bubbleSort and fillVector to create a vector of integers and then sort it
int main()
{
	//create vector
	vector<int> stuff(25);

	//greeting 
	cout << "This program demonstrates the bubble sort on a vector of integers." << endl;

	//call fillVector to give vector values
	fillVector(stuff);

	//call bubbleSort
	bubbleSort(stuff);

	return 0;
}

//This function sorts a vector using bubble sort
void bubbleSort(vector<int>& vector)
{
	//output original vector
	cout << "Original: ";
	for (int i = 0; i < vector.size(); i++)
		cout << setw(3) << vector[i];
	cout << endl;
	
	for (int max = (vector.size() - 1); max > 0; max--)
	{
		for (int i = 0; i < (vector.size() - 1); i++)
		{
			//create an if statement to check if next element is greater than the current
			if (vector[i] > vector[i + 1])
			{
				swap(vector[i], vector[i + 1]);
			}
		}

		//output vector contents after each pass
		cout << "Pass # " << (25 - max) << ": ";

		//create a for loop to output vector contents
		for (int k = 0; k < vector.size(); k++)
			cout << setw(3) << vector[k];

		cout << endl;
	}
}

//This function fills a vector
void fillVector(vector<int>& vector)
{
	//Create a for loop adding random integers to vector
	for (int i = 0; i < vector.size(); i++)
		vector[i] = rand() % 100;
}


