#include <iostream>
#include<iomanip>
using namespace std;
int dp();									//Display Menu
void CM(int**& arr, int& rs, int& cs);     // Create Matrix
void DP(int** arr, int rs, int cs);        // Display Matrix
char SOAVM();                              // (Sum of All Values of Matrix)
char POAVM();                              // (Product of All Values of Matrix)
char AOWM();                               // (Average of Whole Matrix)
char SCMA();                               // (Scalar Matrix Addition)
char AOTM();                               // (Addition of Two Matrices)
char SCMS();                               // (Scalar Matrix Subtraction)
char SOTM();                               // (Subtraction of Two Matrices)
char SMM();                                // (Scalar Matrix Multiplication)
char MOTM();                               // (Multiplication of Two Matrices)
char MT();                                 // (Matrix Transpose)
char MD();                                 // (Matrix Determinant)

int main()
{
	
	menu:
int num;

do
{
	cout << endl << endl;
cout << "	 _____________________________" << endl;
cout << "	|                                                                                           |" << endl;
cout << "	|:::::::::::|***********************|:::::::::::|" << endl;
cout << "	|:::::::::::|                                                                   |:::::::::::|" << endl;
cout << "	|:::::::::::|             MATRIX OPERATIONS AND ADVANCED FUNCTIONS              |:::::::::::|" << endl;
cout << "	|:::::::::::|                                                                   |:::::::::::|" << endl;
cout << "	|:::::::::::|***********************|:::::::::::|" << endl;
cout << "	|_______________________________|" << endl;
cout << "	 _____________________________" << endl;
cout << "        |                                                                                           |" << endl;
cout << "	|~ Press = 1                Sum of Matrix (Sum of All Values)                            |" << endl;
cout << "	|_______________________________|" << endl;
cout << "	|~ Press = 2                Product of Matrix (Product of All Values)                    |" << endl;
cout << "	|_______________________________|" << endl;
cout << "	|~ Press = 3                Average of Whole Matrix                                          |" << endl;
cout << "	|_______________________________|" << endl;
cout << "	|~ Press = 4                Scalar Matrix Addition                                           |" << endl;
cout << "	|_______________________________|" << endl;
cout << "	|~ Press = 5                Addition of Two Matrices                                         |" << endl;
cout << "	|_______________________________|" << endl;
cout << "	|~ Press = 6                Subtraction of Two Matrices                                      |" << endl;
cout << "	|_______________________________|" << endl;
cout << "	|~ Press = 7                Scalar Matrix Subtraction                                        |" << endl;
cout << "	|_______________________________|" << endl;
cout << "	|~ Press = 8                Scalar Matrix Multiplication                                     |" << endl;
cout << "	|_______________________________|" << endl;
cout << "	|~ Press = 9                Multiplication of Two Matrices                                   |" << endl;
cout << "	|_______________________________|" << endl;
cout << "	|~ Press = 10               Matrix Transpose                                                 |" << endl;
cout << "	|_______________________________|" << endl;
cout << "	|~ Press = 11               Matrix Determinant                                               |" << endl;
cout << "	|_______________________________|" << endl;
cout << "	|~ Press = 12               Matrix Inversion                                                |" << endl;
cout << "	|_______________________________|" << endl;
cout << "	|~ Press = 13               Eigenvalue and Eigenvector Computation                           |" << endl;
cout << "	|_______________________________|" << endl;
cout << "	|~ Press = 14               Singular Value Decomposition (SVD)                                |" << endl;
cout << "	|_______________________________|" << endl;
cout << "	|~ Press = 15               To end                                                           |" << endl;
cout << "        |_______________________________|" << endl << endl;
cout << endl << "	Enter Your Number            =   ";
cin >> num;
cout << "	_________________________________";

	
    if (num == 1)
    {
       char answer = SOAVM();
        
        	//		menu again showing part		//
			if(answer == 'Y' || answer == 'y'){
			system("cls");
			goto menu;
			}
			else if(answer == 'N' || answer == 'n'){
			system("cls");
			goto exit;

			}
        
    }
    else if (num == 2)
    {
       char answer = POAVM();
    //		menu again showing part		//
			if(answer == 'Y' || answer == 'y'){
			system("cls");
			goto menu;
			}
			else if(answer == 'N' || answer == 'n'){
			system("cls");
			goto exit;

			}
	}
    else if (num == 3)
    {
        char answer = AOWM();
    //		menu again showing part		//
			if(answer == 'Y' || answer == 'y'){
			system("cls");
			goto menu;
			}
			else if(answer == 'N' || answer == 'n'){
			system("cls");
			goto exit;

			}
	}
    else if (num == 4)
    {
        char answer = SCMA();
    //		menu again showing part		//
			if(answer == 'Y' || answer == 'y'){
			system("cls");
			goto menu;
			}
			else if(answer == 'N' || answer == 'n'){
			system("cls");
			goto exit;

			}
	}
    else if (num == 5)
    {
        char answer = AOTM();
    //		menu again showing part		//
			if(answer == 'Y' || answer == 'y'){
			system("cls");
			goto menu;
			}
			else if(answer == 'N' || answer == 'n'){
			system("cls");
			goto exit;

			}
	}
    else if (num == 6)
    {
        char answer = SOTM();
   //		menu again showing part		//
			if(answer == 'Y' || answer == 'y'){
			system("cls");
			goto menu;
			}
			else if(answer == 'N' || answer == 'n'){
			system("cls");
			goto exit;

			}
    }
    
    else if (num == 7)
    {
        char answer = SCMS();
    //		menu again showing part		//
			if(answer == 'Y' || answer == 'y'){
			system("cls");
			goto menu;
			}
			else if(answer == 'N' || answer == 'n'){
			system("cls");
			goto exit;

			}
	}
    else if (num == 8)
    {
        char answer = SMM();
    //		menu again showing part		//
			if(answer == 'Y' || answer == 'y'){
			system("cls");
			goto menu;
			}
			else if(answer == 'N' || answer == 'n'){
			system("cls");
			goto exit;

			}
	}
    else if (num == 9)
    {
        char answer = MOTM();
    //		menu again showing part		//
			if(answer == 'Y' || answer == 'y'){
			system("cls");
			goto menu;
			}
			else if(answer == 'N' || answer == 'n'){
			system("cls");
			goto exit;

			}
	}
    else if (num == 10)
    {
        char answer = MT();
    //		menu again showing part		//
			if(answer == 'Y' || answer == 'y'){
			system("cls");
			goto menu;
			}
			else if(answer == 'N' || answer == 'n'){
			system("cls");
			goto exit;

			}
	}
    else if (num == 11)
    {
        char answer = MD();
    //		menu again showing part		//
			if(answer == 'Y' || answer == 'y'){
			system("cls");
			goto menu;
			}
			else if(answer == 'N' || answer == 'n'){
			system("cls");
			goto exit;

			}
	}
    else if (num == 12)
    {
    	exit:
        system("cls");
        
        cout << endl << endl << endl;
        cout << "     ____________________________" << endl;
        cout << "    |                                                                                      |" << endl;
        cout << "    |:::::::::::|**********************|:::::::::::|" << endl;
        cout << "    |:::::::::::|                                                              |:::::::::::|" << endl;
        cout << "    |:::::::::::|                    PROGRAM ENDED                             |:::::::::::|" << endl;
        cout << "    |:::::::::::|                                                              |:::::::::::|" << endl;
        cout << "    |:::::::::::|**********************|:::::::::::|" << endl;
        cout << "    |______________________________|" << endl;
        break;
        return 0;
    }
    else
    {
        cout << "Invalid input. Please try again.";
    }
}while (num < 12);


	system("pause");
	return 0;
}


void CM(int**& arr, int& rs, int& cs)
{
	cout << endl << endl << "	" << "Enter The Rows Of Matrix    = ";
	cin >> rs;
	cout << "	" << "Enter The Cols Of Matrix    = ";
	cin >> cs;
	cout << endl << endl;
	arr = new int*[rs];
	for (int i = 0; i < rs; i++)
	{
		arr[i] = new int[cs];
	}

	for (int i = 0; i < rs; i++)
	{
		for (int j = 0; j < cs; j++)
		{
			cout <<"	" << "Enter element at index [" << i << "][" << j << "]: ";
			cin >> arr[i][j];
		}
	}
}

void DP(int** arr, int rs, int cs)
{
	cout << endl << endl;
	cout << "           _____" << endl;
	cout << "          |                 |" << endl;
	cout << "          |    ::Matrix::   |" << endl;
	cout << "          |_______|" << endl;
	cout << endl << endl;
	for (int i = 0; i < rs; i++)
	{
		cout << "           |";
		for (int j = 0; j < cs; j++)
		{
			cout << " " << arr[i][j] << " ";
		}
		cout << "|";
		cout << endl;
	}
	
}

char SOAVM()		//Sum of Al Values of Matrix
{
	system("cls");
	while (true)
	{
		int** arr;
		int rs, cs;
		cout << endl << endl << endl;
		cout << "           ______" << endl;
		cout << "          |                      |" << endl;
		cout << "          |    ::SUM OPERATOR::  |" << endl;
		cout << "          |________|" << endl;
		cout << endl << "	______________________";
		CM(arr, rs, cs);
		int sum = 0;

		DP(arr, rs, cs);

		cout << endl << endl;
		for (int i = 0; i < rs; i++)
		{
			for (int j = 0; j < cs; j++)
			{
				sum = arr[i][j] + sum;
			}
		}

		cout << "	Sum of All Values of Matrix = " << sum << endl;
		cout << "	__________" << endl << endl;

		// Deallocate memory
		for (int i = 0; i < rs; i++)
		{
			delete[] arr[i];
		}
		delete[] arr;

		cout << endl << endl << "		Do you want to perform matrix addition again? (Yes	||	No)	=  ";
		char op;		//Option
		cin >> op;
		if (op == 'n' || op == 'N')
		{
			break;
		}
	}

		system("cls");
	//		return to menu		//
	char choiceMenu;
	cout << endl <<"	Do you want to see Menu Again(Press [:Y:] for YES and [:N:] to Exit)"<<endl;
	cout << endl << "	Enter Your Choice = ";
	cin >> choiceMenu;
	return choiceMenu;
}


char POAVM() {
	system("cls");
	while (true) 
	{
		system("cls");
		int** arr, rs, cs;
		cout << endl << endl;
		cout << "           _______" << endl;
		cout << "          |                           |" << endl;
		cout << "          |    ::PRODUCT  OPERATOR::   |" << endl;
		cout << "          |_________|" << endl;
		cout << endl << "    ______________________" << endl;

		CM(arr, rs, cs);
		DP(arr, rs, cs);

		int Multiply = 1;

		for (int i = 0; i < rs; i++)
		{
			for (int j = 0; j < cs; j++)
			{
				Multiply = arr[i][j] * Multiply;
			}
		}

		cout << endl << "    Product of All Values of Matrix = " << Multiply << endl;
		cout << "    ___________" << endl << endl;

		// Deallocate memory
		for (int i = 0; i < rs; i++) {
			delete[] arr[i];
		}
		delete[] arr;

		cout << endl << endl << "    Do you want to perform matrix addition again? (Yes || No) = ";
		char op;   // Option
		cin >> op;
		if (op == 'n' || op == 'N') {
			break;
		}
	}

		system("cls");
	//		return to menu		//
	char choiceMenu;
	cout << endl <<"	Do you want to see Menu Again(Press [:Y:] for YES and [:N:] to Exit)"<<endl;
	cout << endl << "	Enter Your Choice = ";
	cin >> choiceMenu;
	return choiceMenu;


}

char AOWM()
{
	system("cls");
	while (true)
	{
		system("cls");
		int**arr, rs, cs;
		int sum = 0;
		int counter = 0;
		float average;
		cout << endl << endl << endl;
		cout << "           _______" << endl;
		cout << "          |                           |" << endl;
		cout << "          |    ::AVERAGE  OERATOR::   |" << endl;
		cout << "          |_________|" << endl;
		cout << endl << "	______________________";

		CM(arr, rs, cs);		//Create Matrix
		DP(arr, rs, cs);		//Display Matrix Function

		for (int r = 0; r < rs; r++)
		{
			for (int c = 0; c < cs; c++) {
				sum = sum + arr[r][c];
				counter++;
			}
		}

		average = float(sum) / counter;

		cout << endl << "	Average of All Values of Matrix = " << average << endl;
		cout << "	___________" << endl << endl;

		// Deallocate memory
		for (int i = 0; i < rs; i++)
		{
			delete[] arr[i];
		}
		delete[] arr;
		cout << endl << endl << "    Do you want to perform matrix addition again? (Yes || No) = ";
		char op;   // Option
		cin >> op;
		if (op == 'n' || op == 'N') {
			break;
		}
	}

		system("cls");
	//		return to menu		//
	char choiceMenu;
	cout << endl <<"	Do you want to see Menu Again(Press [:Y:] for YES and [:N:] to Exit)"<<endl;
	cout << endl << "	Enter Your Choice = ";
	cin >> choiceMenu;
	return choiceMenu;


}


char SCMA()
{
	system("cls");
	while (true)
	{
		system("cls");
		int** arr, rs, cs;
		cout << endl << endl << endl;
		cout << "           _________" << endl;
		cout << "          |                                 |" << endl;
		cout << "          |  ::SCALAR ADDITION  OERATOR::   |" << endl;
		cout << "          |___________|" << endl;
		cout << endl << "	______________________";

		CM(arr, rs, cs);
		int scalar;
		DP(arr, rs, cs);
		cout << endl << endl << "	Enter The Scalar Value =  ";
		cin >> scalar;

		for (int i = 0; i < rs; i++)
		{
			for (int j = 0; j < cs; j++)
			{
				arr[i][j] = arr[i][j] + scalar;
			}
		}

		cout << endl << endl << "	::After Scalar Matrix Addition:: ";
		DP(arr, rs, cs);

		// Deallocate memory
		for (int i = 0; i < rs; i++)
		{
			delete[] arr[i];
		}
		delete[] arr;
		cout << endl << endl << "    Do you want to perform matrix addition again? (Yes || No) = ";
		char op;   // Option
		cin >> op;
		if (op == 'n' || op == 'N') {
			break;
		}
	}

		system("cls");
	//		return to menu		//
	char choiceMenu;
	cout << endl <<"	Do you want to see Menu Again(Press [:Y:] for YES and [:N:] to Exit)"<<endl;
	cout << endl << "	Enter Your Choice = ";
	cin >> choiceMenu;
	return choiceMenu;

}


char AOTM() //(Addition of Two Matrices)
{
	system("cls");
	bool repeat = true;
	while (repeat)
	{
		int rs, cs;
		int** arr1;
		int** arr2;

		system("cls");
		cout << endl << endl << endl;
		cout << "           ________" << endl;
		cout << "          |                              |" << endl;
		cout << "          |      ::ADDER   OERATOR::     |" << endl;
		cout << "          |__________|" << endl;
		cout << endl << "	______________________";


		cout << endl << endl << endl << "        'To ADD Two Matrices, Rows & Columns should be the same in both Matrices.'" << endl;
		cout << "        ______________________";

		// Create first matrix

		cout << endl << endl << "        Enter details for the first matrix:" << endl;
		CM(arr1, rs, cs); // Create Matrix


		// Create second matrix

		cout << endl << endl << "        Enter details for the second matrix:" << endl;
		CM(arr2, rs, cs); // Create Matrix
		system("cls");

		if (rs == cs)  // check 
		{
			cout << endl << "        ::::First Matrix::::" << endl;
			cout << "        _____";
			DP(arr1, rs, cs); // Display Matrix


			cout << endl << "        ::::Second Matrix::::" << endl;
			cout << "        _____";
			DP(arr2, rs, cs); // Display Matrix

			cout << endl << endl;
			cout << "        ____________";
			cout << endl << endl;
			cout << "           _______" << endl;
			cout << "          |                       |" << endl;
			cout << "          |    ::ADDER MATRIX::   |" << endl;
			cout << "          |_________|" << endl << endl;

			for (int r = 0; r < rs; r++)
			{
				cout << "        |";
				for (int c = 0; c < cs; c++)
				{
					cout << " " << arr1[r][c] - arr2[r][c] << " ";

				}
				cout << "|";
				cout << endl;
			}
		}

		else
		{
			cout << endl << "        Both matrices do not have the same number of rows and columns, so they cannot be Added." << endl << endl;

			cout << "        First Matrix:";
			DP(arr1, rs, cs); // Display Matrix
			cout << endl << endl;
			cout << "        Second Matrix:";
			DP(arr2, rs, cs); // Display Matrix
		}

		// Deallocate memory for the first matrix
		for (int i = 0; i < rs; i++)
		{
			delete[] arr1[i];
		}
		delete[] arr1;

		// Deallocate memory for the second matrix
		for (int i = 0; i < rs; i++)
		{
			delete[] arr2[i];
		}
		delete[] arr2;

		cout << endl << endl << "		Do you want to perform matrix Addition again? (Yes	||	No)	=  ";
		char op;		//Option
		cin >> op;
		if (op == 'n' || op == 'N')
		{
			repeat = false;  // Exit the loop
		}
	}
	
	system("cls");
	//		return to menu		//
	char choiceMenu;
	cout << endl <<"	Do you want to see Menu Again(Press [:Y:] for YES and [:N:] to Exit)"<<endl;
	cout << endl << "	Enter Your Choice = ";
	cin >> choiceMenu;
	return choiceMenu;

}

char SCMS() //(Scalar Matrix Subtraction)
{
	system("cls");
	while (true)
	{
		system("cls");
		int** arr, rs, cs;
		cout << endl << endl << endl;
		cout << "           _________" << endl;
		cout << "          |                                 |" << endl;
		cout << "          |  ::SCALAR SUBTRACTION  OERATOR::   |" << endl;
		cout << "          |___________|" << endl;
		cout << endl << "	______________________";

		CM(arr, rs, cs);
		int scalar;
		DP(arr, rs, cs);
		cout << endl << endl << "	Enter The Scalar Value =  ";
		cin >> scalar;

		for (int i = 0; i < rs; i++)
		{
			for (int j = 0; j < cs; j++)
			{
				arr[i][j] = arr[i][j] - scalar;
			}
		}

		cout << endl << endl << "	::After Scalar Matrix Subtraction:: ";
		DP(arr, rs, cs);

		// Deallocate memory
		for (int i = 0; i < rs; i++)
		{
			delete[] arr[i];
		}
		delete[] arr;
		cout << endl << endl << "    Do you want to perform matrix Subtraction again? (Yes || No) = ";
		char op;   // Option
		cin >> op;
		if (op == 'n' || op == 'N') {
			break;
		}
	}
	
	system("cls");
	//		return to menu		//
	char choiceMenu;
	cout << endl <<"	Do you want to see Menu Again(Press [:Y:] for YES and [:N:] to Exit)"<<endl;
	cout << endl << "	Enter Your Choice = ";
	cin >> choiceMenu;
	return choiceMenu;

}

char SOTM()		// Subtraction of two Matrices 
{
	system("cls");
	bool repeat = true;
	while (repeat)
	{
		int rs, cs;
		int** arr1;
		int** arr2;

		system("cls");
		cout << endl << endl << endl;
		cout << "           ________" << endl;
		cout << "          |                              |" << endl;
		cout << "          |    ::SUBTRACT   OERATOR::    |" << endl;
		cout << "          |__________|" << endl;
		cout << endl << "	______________________";


		cout << endl << endl << endl << "        'To Subtract Two Matrices, Rows & Columns should be the same in both Matrices.'" << endl;
		cout << "        ______________________";

		// Create first matrix

		cout << endl << endl << "        Enter details for the first matrix:" << endl;
		CM(arr1, rs, cs); // Create Matrix


		// Create second matrix

		cout << endl << endl << "        Enter details for the second matrix:" << endl;
		CM(arr2, rs, cs); // Create Matrix
		system("cls");

		if (rs == cs)  // check 
		{
			cout << endl << "        ::::First Matrix::::" << endl;
			cout << "        _____";
			DP(arr1, rs, cs); // Display Matrix


			cout << endl << "        ::::Second Matrix::::" << endl;
			cout << "        _____";
			DP(arr2, rs, cs); // Display Matrix

			cout << endl << endl;
			cout << "        ____________";
			cout << endl << endl;
			cout << "           _______" << endl;
			cout << "          |                       |" << endl;
			cout << "          |    ::MINUS MATRIX::   |" << endl;
			cout << "          |_________|" << endl << endl;

			for (int r = 0; r < rs; r++)
			{
				cout << "        |";
				for (int c = 0; c < cs; c++)
				{
					cout << " " << arr1[r][c] - arr2[r][c] << " ";

				}
				cout << "|";
				cout << endl;
			}
		}

		else
		{
			cout << endl << "        Both matrices do not have the same number of rows and columns, so they cannot be subtracted." << endl << endl;

			cout << "        First Matrix:";
			DP(arr1, rs, cs); // Display Matrix
			cout << endl << endl;
			cout << "        Second Matrix:";
			DP(arr2, rs, cs); // Display Matrix
		}

		// Deallocate memory for the first matrix
		for (int i = 0; i < rs; i++)
		{
			delete[] arr1[i];
		}
		delete[] arr1;

		// Deallocate memory for the second matrix
		for (int i = 0; i < rs; i++)
		{
			delete[] arr2[i];
		}
		delete[] arr2;

		cout << endl << endl << "		Do you want to perform matrix subtraction again? (Yes	||	No)	=  ";
		char op;		//Option
		cin >> op;
		if (op == 'n' || op == 'N')
		{
			repeat = false;  // Exit the loop
		}
	}

	system("cls");
	//		return to menu		//
	char choiceMenu;
	cout << endl <<"	Do you want to see Menu Again(Press [:Y:] for YES and [:N:] to Exit)"<<endl;
	cout << endl << "	Enter Your Choice = ";
	cin >> choiceMenu;
	return choiceMenu;

}


char SMM() {
	system("cls");
	while (true)
	{
		system("cls");
		int** arr, rs, cs;
		cout << endl << endl << endl;
		cout << "           ____________" << endl;
		cout << "          |                                      |" << endl;
		cout << "          |  ::SCALAR MULTIPLACTION  OERATOR::   |" << endl;
		cout << "          |______________|" << endl;
		cout << endl << "	______________________";

		CM(arr, rs, cs);
		int scalar;
		DP(arr, rs, cs);
		cout << endl << endl << "	Enter The Scalar Value =  ";
		cin >> scalar;

		for (int i = 0; i < rs; i++)
		{
			for (int j = 0; j < cs; j++)
			{
				arr[i][j] = arr[i][j] * scalar;
			}
		}

		cout << endl << endl << "	::After Scalar Matrix Multiplaction:: ";
		DP(arr, rs, cs);

		// Deallocate memory
		for (int i = 0; i < rs; i++)
		{
			delete[] arr[i];
		}
		delete[] arr;
		cout << endl << endl << "    Do you want to perform matrix Multiplaction again? (Yes || No) = ";
		char op;   // Option
		cin >> op;
		if (op == 'n' || op == 'N') {
			break;
		}
	}

	system("cls");
	//		return to menu		//
	char choiceMenu;
	cout << endl <<"	Do you want to see Menu Again(Press [:Y:] for YES and [:N:] to Exit)"<<endl;
	cout << endl << "	Enter Your Choice = ";
	cin >> choiceMenu;
	return choiceMenu;

}

char MOTM() // Multiplication of two Matrices
{
	while (true) {
		int rs1, cs1; // Dimensions of the first matrix
		int rs2, cs2; // Dimensions of the second matrix
		int** arr1;
		int** arr2;

		system("cls");
		cout << endl << endl << endl;
		cout << "           ________" << endl;
		cout << "          |                              |" << endl;
		cout << "          |  ::MULTIPLACTE   OERATOR::   |" << endl;
		cout << "          |__________|" << endl;
		cout << endl << "	______________________";
		cout << endl << endl << endl;
		cout << "    For Multiplication, the number of columns in the first matrix should be equal to the number of rows in the second matrix." << endl << endl;
		cout << "    ___________________________________" << endl << endl;

		// Create first matrix
		cout << "    Enter Details for the 1st Matrix:" << endl;
		CM(arr1, rs1, cs1);  // Call the function to create the first matrix 

		// Create second matrix
		cout << endl << "    Enter Details for the 2nd Matrix:" << endl;
		CM(arr2, rs2, cs2);   // Call the function to create the second matrix 

		// Check if matrices can be multiplied
		if (cs1 == rs2)
		{
			system("cls");
			cout << endl << "    ::::First Matrix::::" << endl;
			DP(arr1, rs1, cs1);  // Display the first matrix 

			cout << endl <<  "    ::::Second Matrix::::";
			DP(arr2, rs2, cs2);   // Display the second matrix 

			int** arr0 = new int*[rs1];
			for (int i = 0; i < rs1; i++)
			{
				arr0[i] = new int[cs2];
			}

			// Multiply the matrices
			for (int i = 0; i < rs1; i++)
			{
				for (int j = 0; j < cs2; j++)
				{
					arr0[i][j] = 0;
					for (int k = 0; k < cs1; k++)
					{
						arr0[i][j] = arr0[i][j] + arr1[i][k] * arr2[k][j];
					}
				}
			}

			// Display the result matrix
			cout << endl << endl;
			cout << "           _______" << endl;
			cout << "          |                         |" << endl;
			cout << "          |    ::Multiply Matrix::  |" << endl;
			cout << "          |_________|" << endl;
			cout << endl << endl;
			for (int i = 0; i < rs1; i++)
			{
				cout << "		|";
				for (int j = 0; j < cs2; j++)
				{
					cout << " " << arr0[i][j] << " ";
				}
				cout << "|";
				cout << endl;
			}

			// Deallocate memory for the result matrix
			for (int i = 0; i < rs1; i++)
			{
				delete[] arr0[i];
			}
			delete[] arr0;
		}
		else
		{
			system("cls");
			cout << endl << endl << endl << endl;
			cout << endl << "    ::::First Matrix::::" << endl;
			DP(arr1, rs1, cs1);  // Display the first matrix 

			cout << endl << "    ::::Second Matrix::::";
			DP(arr2, rs2, cs2);   // Display the second matrix 

			cout << endl << endl << "	No. of columns in the first matrix is not equal to the number of rows in the second matrix. They can't be multiplied." << endl << endl;
			cout << "	________________________________________"<<endl;
			cout << "	________________________________________" << endl;
		}

		// Deallocate memory for the first matrix
		for (int i = 0; i < rs1; i++)
		{
			delete[] arr1[i];
		}
		delete[] arr1;

		// Deallocate memory for the second matrix
		for (int i = 0; i < rs2; i++)
		{
			delete[] arr2[i];
		}
		delete[] arr2;
		
		cout << endl << endl << "		Do you want to perform matrix multiplication again? (Yes	||	No)	=  ";
		char op;		//Option
		cin >> op;
		if (op == 'n' || op == 'N')
		{
			break;
		}
	}

	system("cls");
	//		return to menu		//
	char choiceMenu;
	cout << endl <<"	Do you want to see Menu Again(Press [:Y:] for YES and [:N:] to Exit)"<<endl;
	cout << endl << "	Enter Your Choice = ";
	cin >> choiceMenu;
	return choiceMenu;

}



char MT()	//(Matrix Transpose)
{
	system("cls");
	while (true)
	{
		system("cls");
		int** arr, rs, cs;
		cout << "           ________" << endl;
		cout << "          |                              |" << endl;
		cout << "          | ::MATRIX TRANSPOSE  OPERATOR: |" << endl;
		cout << "          |__________|" << endl;
		cout << endl << "    ____________________";

		CM(arr, rs, cs);
		DP(arr, rs, cs);

		if (rs == cs)
		{
			for (int i = 0; i < rs; i++)
			{
				for (int j = i + 1; j < cs; j++)
				{
					int temp = arr[i][j];
					arr[i][j] = arr[j][i];
					arr[j][i] = temp;
				}
			}

			cout << endl << endl << "    ::Transpose Matrix :: ";
			DP(arr, rs, cs);

		}
		else
		{
			cout << "    Error: The matrix is not square. Transpose is not possible." << endl << endl;

			DP(arr, rs, cs);		//Display Matrix Function
		}

		// Deallocate memory
		for (int i = 0; i < rs; i++)
		{
			delete[] arr[i];
		}
		delete[] arr;
		cout << endl << endl << "    Do you want to perform matrix multiplication again? (Yes || No) =  ";
		char op;		//Option
		cin >> op;
		if (op == 'n' || op == 'N')
		{
			break;
		}
	}

	system("cls");

	//		return to menu		//
	char choiceMenu;
	cout << endl <<"	Do you want to see Menu Again(Press [:Y:] for YES and [:N:] to Exit)"<<endl;
	cout << endl << "	Enter Your Choice = ";
	cin >> choiceMenu;
	return choiceMenu;

}


char MD() //(Matrix Determinant)
{
	int numm;
	system("cls");
	do{
		
		cout << endl << endl;
		cout << "           ________" << endl;
		cout << "          |                              |" << endl;
		cout << "          |   ::DETERMINANT OPERATOR::   |" << endl;
		cout << "          |__________|" << endl;
		cout << endl << "    ____________________" << endl << endl;

		cout << "    _________" << endl;
		cout << "    |                               |" << endl;
		cout << "    | Press 1    for 2x2 Matrix    |" << endl;
		cout << "    |___________|" << endl;
		cout << "    | Press 2    for 3x3 Matrix    |" << endl;
		cout << "    |___________|" << endl;
		cout << "    | Press 3    for 4x4 Matrix    |" << endl;
		cout << "    |___________|" << endl;
		cout << "    | Press 4    for 5x5 Matrix    |" << endl;
		cout << "    |___________|" << endl;
		cout << "    | Press 5    for Display Menu  |" << endl;
		cout << "    |___________|" << endl;
			cout << "    Enter your Number   = ";
		cin >> numm;

		if (numm == 1)
		{
			int arr[2][2];
			int deter = 0;

			cout << "    Enter the elements of the matrix:" << endl;
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					cout << "    Enter element at index [" << i << "][" << j << "]: ";
					cin >> arr[i][j];
				}
			}

			cout << endl << endl;
			cout << "           _____" << endl;
			cout << "          |                 |" << endl;
			cout << "          |    ::Matrix::   |" << endl;
			cout << "          |_______|" << endl;
			cout << endl << endl;
			for (int i = 0; i < 2; i++)
			{
				cout << "           |";
				for (int j = 0; j < 2; j++)
				{
					cout << " " << arr[i][j] << " ";
				}
				cout << "|";
				cout << endl;
			}

			deter = arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];

			cout << endl << "    Determinant of Matrix = " << deter << endl;
		}

		else if (numm == 2)
		{
			int arr1[3][3];
			int deter = 0;

			cout << "    Enter the elements of the matrix:" << endl;
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					cout << "    Enter element at index [" << i << "][" << j << "]: ";
					cin >> arr1[i][j];
				}
			}

			cout << endl << endl;
			cout << "           _____" << endl;
			cout << "          |                 |" << endl;
			cout << "          |    ::Matrix::   |" << endl;
			cout << "          |_______|" << endl;
			cout << endl << endl;
			for (int i = 0; i < 3; i++)
			{
				cout << "           |";
				for (int j = 0; j < 3; j++)
				{
					cout << " " << arr1[i][j] << " ";
				}
				cout << "|";
				cout << endl;
			}

			deter = arr1[0][0] * (arr1[1][1] * arr1[2][2] - arr1[1][2] * arr1[2][1]) - arr1[0][1] * (arr1[1][0] * arr1[2][2] - arr1[1][2] * arr1[2][0]) + arr1[0][2] * (arr1[1][0] * arr1[2][1] - arr1[1][1] * arr1[2][0]);

			cout << endl << "    Determinant of 3x3 Matrix is = " << deter << endl;
		}
		else if (numm == 3)
		{
			int arr2[4][4];
			int deter = 0;

			cout << "    Enter the elements of the matrix:" << endl;
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					cout << "    Enter element at index [" << i << "][" << j << "]: ";
					cin >> arr2[i][j];
				}
			}

			cout << endl << endl;
			cout << "           _____" << endl;
			cout << "          |                 |" << endl;
			cout << "          |    ::Matrix::   |" << endl;
			cout << "          |_______|" << endl;
			cout << endl << endl;
			for (int i = 0; i < 4; i++)
			{
				cout << "           |";
				for (int j = 0; j < 4; j++)
				{
					cout << " " << arr2[i][j] << " ";
				}
				cout << "|";
				cout << endl;
			}

			deter = arr2[0][0] * (arr2[1][1] * (arr2[2][2] * arr2[3][3] - arr2[2][3] * arr2[3][2]) - arr2[1][2] * (arr2[2][1] * arr2[3][3] - arr2[2][3] * arr2[3][1]) + arr2[1][3] * (arr2[2][1] * arr2[3][2] - arr2[2][2] * arr2[3][1]));

			cout << endl << "    Determinant of 4x4 Matrix is = " << deter << endl;
		}

		else if (numm == 4)
		{
			int arr3[5][5];
			int deter = 0;

			cout << endl << "    Enter the elements of the matrix:" << endl;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					cout << "    Enter element at index [" << i << "][" << j << "]: ";
					cin >> arr3[i][j];
				}
			}

			cout << endl << endl;
			cout << "           _____" << endl;
			cout << "          |                 |" << endl;
			cout << "          |    ::Matrix::   |" << endl;
			cout << "          |_______|" << endl;
			cout << endl << endl;
			for (int i = 0; i < 5; i++)
			{
				cout << "           |";
				for (int j = 0; j < 5; j++)
				{
					cout << " " << arr3[i][j] << " ";
				}
				cout << "|";
				cout << endl;
			}


			//For Determinant Of 5x5 matrix 
			deter = arr3[0][0] * (arr3[1][1] * (arr3[2][2] * (arr3[3][3] * arr3[4][4] - arr3[3][4] * arr3[4][3]) - arr3[2][3] * (arr3[3][2] * arr3[4][4] - arr3[3][4] * arr3[4][2]) + arr3[2][4] * (arr3[3][2] * arr3[4][3] - arr3[3][3] * arr3[4][2]))) - arr3[0][1] * (arr3[1][0] * (arr3[2][2] * (arr3[3][3] * arr3[4][4] - arr3[3][4] * arr3[4][3]) - arr3[2][3] * (arr3[3][0] * arr3[4][4] - arr3[3][4] * arr3[4][0]) + arr3[2][4] * (arr3[3][0] * arr3[4][3] - arr3[3][3] * arr3[4][0]))) - arr3[0][2] * (arr3[1][0] * (arr3[2][1] * (arr3[3][3] * arr3[4][4] - arr3[3][4] * arr3[4][3]) - arr3[2][3] * (arr3[3][0] * arr3[4][4] - arr3[3][4] * arr3[4][0]) + arr3[2][4] * (arr3[3][0] * arr3[4][1] - arr3[3][1] * arr3[4][0]))) + arr3[0][3] * (arr3[1][0] * (arr3[2][1] * (arr3[3][2] * arr3[4][4] - arr3[3][4] * arr3[4][2]) - arr3[2][2] * (arr3[3][0] * arr3[4][4] - arr3[3][4] * arr3[4][0]) + arr3[2][4] * (arr3[3][0] * arr3[4][2] - arr3[3][2] * arr3[4][0]))) - arr3[0][4] * (arr3[1][0] * (arr3[2][1] * (arr3[3][2] * arr3[4][3] - arr3[3][3] * arr3[4][2]) - arr3[2][2] * (arr3[3][0] * arr3[4][3] - arr3[3][3] * arr3[4][0]) + arr3[2][3] * (arr3[3][0] * arr3[4][2] - arr3[3][2] * arr3[4][0])));

			cout << endl << "    Determinant of 5x5 Matrix is = " << deter << endl;
		}

		else
		{
			cout << endl << "    !!! Invalid Input !!!" << endl << endl;

			cout << endl << endl << "    Do you want to perform matrix multiplication again? (Yes || No) =  ";
			char op;		//Option
			cin >> op;
			if (op == 'n' || op == 'N')
			{
				break;
			}
		}
		}while (numm != 5);
		
	//		return to menu		//
	char choiceMenu;
	cout << endl <<"	Do you want to see Menu Again(Press [:Y:] for YES and [:N:] to Exit)"<<endl;
	cout << endl << "	Enter Your Choice = ";
	cin >> choiceMenu;
	return choiceMenu;


}
