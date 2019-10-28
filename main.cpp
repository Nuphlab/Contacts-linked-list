#include "Contacts.h"
#include <string>
#include <iostream>

using namespace std;

int main() {
	string name;
	string number;
	ContactNode* person1 = nullptr;
	ContactNode* person2 = nullptr;
	ContactNode* person3 = nullptr;
	ContactNode* cur = nullptr;

	cout << "Person 1" << endl;
	cout << "Enter name:" << endl;
	getline(cin, name);
	cout << "Enter phone number:" << endl;
	getline(cin,number);
	person1 = new ContactNode(name, number);
	cout << "You entered:" << endl;
	person1->PrintContactNode();
	cur = person1;

	cout << "Person 2" << endl;
	cout << "Enter name:" << endl;
	getline(cin, name);
	cout << "Enter phone number:" << endl;
	getline(cin, number);
	person2 = new ContactNode(name, number);
	person1->InsertAfter(person2);
	cout << "You entered:" << endl;
	person2->PrintContactNode();

	cout << "Person 3" << endl;
	cout << "Enter name:" << endl;
	getline(cin, name);
	cout << "Enter phone number:" << endl;
	getline(cin, number);
	person3 = new ContactNode(name, number);
	person2->InsertAfter(person3);
	cout << "You entered:" << endl;
	person3->PrintContactNode();
	cout << endl;

	cout << "CONTACT LIST" << endl;
	while (cur != nullptr) {
		cur->PrintContactNode();
		cout << endl;
		cur = cur->GetNext();
	}

	return 0;
}