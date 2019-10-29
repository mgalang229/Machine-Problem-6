#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	int choice ,r, c, large, small, temp;
	int given[100][100];
	temp = given[0][0];
	char choice2;
	
	while(1){
	
	cout << "MENU" << endl;
	cout << "1. Problem #1" << endl;
	cout << "2. Problem #2" << endl;
	cout << "Choose a problem: ";
	cin >> choice;
	if(choice == 1){
		cout << "\nPROBLEM #1" << endl;
		cout << "Enter order of matrix - ";
		cin >> r >> c;
		cout << "Enter " << r << "x" << c << " matrix" << endl;
		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				cin >> given[i][j];
			}
		}
		
		cout << "\nGiven Matrix is" << endl;
		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				cout << given[i][j] << " ";
			}
			cout << endl;
		}
		
		small = given[0][0];
		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				if(small > given[i][j]){
					small = given[i][j];
				}
			}
		}
		
		cout << "\nSmallest is " << small;
		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				if(small == given[i][j]){
					cout << " - the number " << small << " is present at position " << i + 1 << "," << j + 1;
				}
			}
		}
		
		large = given[0][0];
		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				if(large < given[i][j]){
					large = given[i][j];
				}
			}
		}
		
		cout << "\nLargest is " << large;
		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				if(large == given[i][j]){
					cout << " - the number " << large << " is present at position " << i + 1 << "," << j + 1;
				}
			}
		}
		
	} else if(choice == 2){
		cout << "\nPROBLEM #2" << endl;
		cout << "Enter order of matrix - ";
		cin >> r >> c;
		cout << "Enter " << r << "x" << c << " matrix" << endl;
		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				cin >> given[i][j];
			}
		}
		
		cout << "\nGiven Matrix is" << endl;
		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				cout << given[i][j];
				if(given[i][j] < 10){
					cout << "  ";
				} else{
					cout << " ";
				}
			}
			cout << endl;
		}
		
		cout << "Matrix after arranging row-wise" << endl;
		for(int i = 0; i < r; i++){
			for(int i = 0; i < r; i++){
				for(int j = 0; j < c; j++){
					if(given[i][j] < given[i][j+1]){
						temp = given[i][j];
						given[i][j] = given[i][j+1];
						given[i][j+1] = temp;
					}
				}
			}
		}
		
		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				cout << given[i][j];
				if(given[i][j] < 10){
					cout << "  ";
				} else{
					cout << " ";
				}
			}
			cout << endl;
		}
		
		cout << "Matrix after arranging column-wise" << endl;
		for(int i = 0; i < r; i++){
			for(int i = 0; i < r; i++){
				for(int j = 0; j < c; j++){
					if(given[i][j] < given[i+1][j]){
						temp = given[i][j];
						given[i][j] = given[i+1][j];
						given[i+1][j] = temp;
					}
				}
			}
		}
		
		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				cout << given[i][j];
				if(given[i][j] < 10){
					cout << "  ";
				} else{
					cout << " ";
				}
			}
			cout << endl;
		}
		
	} else{
		cout << "Invalid Choice" << endl;
	}
	
	cout << "\n\nTry Again? (Y/N): ";
	cin >> choice2;
	if(choice2 == 'Y' || choice2 == 'y'){
		system("cls");
	} else if(choice2 == 'N' || choice2 == 'n'){
		cout << "Exiting...";
		exit(1);
	} else{
		cout << "Invalid" << endl;
		exit(1);
	}
	
	}	
	
	return 0;
	
}
