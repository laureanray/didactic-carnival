#include <iostream>
#include <string>
using namespace std;

void Header_Menu()
	{
		for (int x=0; x<10; x++)
		cout << "-";
		cout << "Adress Book ";
		for (int t=0; t<10; t++)
		cout << "-";
	}
void Main_Menu()
	{	cout << endl;
		cout << "\n1. Add Contact" << endl;
		cout << "2. Edit Contact" << endl;
		cout << "3. Delete Contact" << endl;
		cout << "4. View Contact" << endl;
		cout << "5. Search Address Book" << endl;
		cout << "6. Exit. " << endl;
		
		cout << "\n Choose an option: ";
		
	}
// Class Adress Book. (Main Class) // ALL DATA TPYES
class AddressBook
	{
		public:
			// Function Declaration
			void AddContact();
			void EditContact();
			void DeleteContact();
			void ViewContacts();
			void SearchAddBook();
			void DisplayContact(int disp);
			// Strucutre (Data Types)
			struct AddressBookStructure	
				{
					string FirstName;
				
					string LastName;
					string Home_Address;
					string Phone_Number;
				};
			unsigned int ctr;
			AddressBookStructure entry[100];
	};
// Functions:
void AddressBook::AddContact()
	{
		char skip;
		cout << "\nEntry #" << (ctr + 1) << endl;
	
		cout << "First Name: ";
		getline(cin,entry[ctr].FirstName);
		cin.ignore();
		cout << "Last Name: ";
		getline(cin,entry[ctr].LastName);
		cin.ignore();
		cout << "Address: ";
		getline(cin,entry[ctr].Home_Address);
		cin.ignore();
		cout << "Phone number: ";
		getline(cin,entry[ctr].Phone_Number);
		cin.ignore();
		++ctr;
		cout << "Saved..";
		cin >> skip;
 	}
void AddressBook::DisplayContact(int disp)
	{
		cout << "Entry #" << disp << endl;
		cout << "\n Full Name: " << entry[disp-1].LastName << ", " << entry[disp-1].FirstName << endl;
		cout << "Adress: " << entry[disp-1].Home_Address << endl;
		cout << "Phone number " << entry[disp-1].Phone_Number << endl;

	}
void AddressBook::SearchAddBook()
	{

		int entry_number;
		cout << "Entry number: ";
		cin >> entry_number;
		
		if (entry_number > 0 && entry_number < 100)
			{
				DisplayContact(entry_number);
			}
		else 
			{
				cout << "Error!";
			}
	}
// Declaration A_Book as class AddressBook
AddressBook A_Book;
int main ()
	{
		
		
		int option;			
		char option_out;
		char opt_out;
		do {
		Header_Menu();
		Main_Menu();	
	
		cin >> option;
	
		switch(option)
			{
				case 1: 
					A_Book.AddContact();
					
					
					break;
				
				case 5:
					A_Book.SearchAddBook();
					break;	
				default:
					cout << "VUBU TANGA SHIFT KA NA! 23(%*&#@(%*&#(!%*&#%(!*#%&)";					
			
			};
	
		cout << "\nPress Y or y to continue: ";
		cin >> opt_out;
		cin.ignore();
		system("cls");
	}
	while (opt_out=='Y' || opt_out=='y');
		return 0;
	}
