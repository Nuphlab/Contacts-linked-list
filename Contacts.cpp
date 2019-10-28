#include "Contacts.h"

ContactNode::ContactNode(string name, string phoneNum, ContactNode* newPointer) {
	contactName = name;
	contactPhoneNum = phoneNum;
	nextNodePtr = newPointer;
}
void ContactNode::InsertAfter(ContactNode* newPointer) {
	ContactNode* temp = nullptr;

	temp = nextNodePtr;
	nextNodePtr = newPointer;
	newPointer->nextNodePtr = temp;
}
void ContactNode::GetName() {

}
void ContactNode::GetPhoneNumber() {

}
ContactNode* ContactNode::GetNext() {
	return nextNodePtr;
}
void ContactNode::PrintContactNode() {
	cout << "Name: " << contactName << endl;
	cout << "Phone number: " << contactPhoneNum << endl;
}


ContactNode::~ContactNode() {
	delete nextNodePtr;
}
