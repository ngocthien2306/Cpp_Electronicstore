#include"ElectroniceStore.h"

int main() {
	char choice;
	ElectroniceStore* store = new ElectroniceStore();
	do {
		cout << "\n\n\n\n\n\t\t\t\t\t        --------MENU--------";
		cout << "\n\n\t\t\t\t\t  |---   1. Add product       ---|";
		cout << "\n\n\t\t\t\t\t  |---   2. Add employee      ---|";
		cout << "\n\n\t\t\t\t\t  |---   3. Display           ---| ";
		cout << "\n\n\t\t\t\t\t  |---   4. Search product    ---|";
		cout << "\n\n\t\t\t\t\t  |---   5. Search employee   ---|";
		cout << "\n\n\t\t\t\t\t  |---   6. Remove product    ---|";
		cout << "\n\n\t\t\t\t\t  |---   7. Remove a employee ---| ";
		cout << "\n\n\t\t\t\t\t  |---   8. Sorting list      ---|";
		cout << "\n\n\t\t\t\t\t  |---   9. Exit!             ---|";
		cout << "\n\n\t\t\t\t\t         Enter your choice: ";
		cin >> choice;
		system("cls");
		switch (choice)
		{
		case '1':
			store->InputProduct();
			store->OutputProduct();
			break;
		case '2': 
			store->InputEmployee();
			store->OutputEmployee();
			break;
		case '3': 
			store->Display();
			break;
		case '4':
			store->SearchNameProduct();
			break;
		case '5':
			store->SearchNameEmployee();
			break;
		case '6':
			store->RemoveProduct();
			break;
		case '7':
			store->RemoveEmployee();
			break;
		case '8':
			store->SortingPriceProduct();
			break;
		case '9':
			break;
		default:
			cout << "\nThe your choice ERROR! Please choice again.";
			break;
		}

	} while (choice != '9');
	

}