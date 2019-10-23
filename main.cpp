//
//  main.cpp
//  Contacts
//
//  Created by Westley Holden on 10/23/19.
//  Copyright © 2019 Westley Holden. All rights reserved.
//
#include "Contacts.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string number;
    
    ContactNode* head = nullptr;
    ContactNode* tail = nullptr;
    ContactNode* cur = nullptr;
    
    cout << "Person 1" << endl;
    cout << "Enter name:" << endl;
    getline(cin, name);
    cout << "Enter phone number:" << endl;
    getline(cin, number);
    head = new ContactNode(name, number);
    cout << "You entered: " << head->GetName() << ", " << head->GetPhoneNumber() << endl;
    
    
    
    return 0;
}
