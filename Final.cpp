#include<iostream>
using namespace std;

//Initail Data
int arr1[5];
int arr2[7];
int arr3[13];
int temp = 0;

//Merge Function
void merge()
{
	//First 5 Indexes
	for (int i = 0; i < 5; i++)
	{
		temp = arr1[i];
		for (int j = i; j <= 12; j++)
		{
			arr3[j] = temp;
		}
	}
	//Last 7 indexes
	for (int i = 0; i < 7; i++)
	{
		temp = arr2[i];
		for (int j = i + 5; j <= 12; j++)
		{
			arr3[j] = temp;
		}
	}
	//Bubble Sort Method (For Ascending Order)
	for (int i = 0; i < 13; i++)
	{
		for (int j = i + 1; j < 13; j++)
		{
			if (arr3[i] > arr3[j])
			{
				temp = arr3[i];
				arr3[i] = arr3[j];
				arr3[j] = temp;
			}
		}
	}
}

int main()
{
	//Get Array 1
	cout << "Array 1" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr1[i];
	}
	//Get Array 2
	cout << "Array 2" << endl;
	for (int i = 0; i < 7; i++)
	{
		cin >> arr2[i];
	}
	//Merge Function Call
	merge();
	//Display Final Array
	cout << "Merged and Sorted Array:" << endl;
	for (int i = 0; i < 13; i++)
	{
		cout << arr3[i] << "\t";
	}
	cout << endl;

	cout << endl;
	char string[100];
	int length = 0;
	bool isPalindrome = false;
	cout << "Enter a sentence: ";
	cin >> string;
	length = strlen(string);
	for (int i = 0; i < length; i++)
	{
		if (string[i] = string[length - i - 1])
		{
			isPalindrome = true;
		}
	}
	if (isPalindrome)
	{
		cout << "\nSentence is a Palindrome" << endl;
	}
	if (!isPalindrome)
	{
		cout << "\nSentence is not a Palindrome" << endl;
	}
	return 0;
}