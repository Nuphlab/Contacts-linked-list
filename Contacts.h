//
//  Contacts.hpp
//  Contacts
//
//  Created by Westley Holden on 10/23/19.
//  Copyright © 2019 Westley Holden. All rights reserved.
//

#ifndef Contacts_hpp
#define Contacts_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class ContactNode {
public:
    ContactNode(string name = "none", string phoneNum = "867-5309", ContactNode* next = nullptr);
    void InsertAfter(ContactNode* nodeLoc);
    string GetName();
    string GetPhoneNumber();
    ContactNode* GetNext();
    void PrintContactNode();
private:
    string contactName;
    string contactPhoneNum;
    ContactNode* nextNodePtr;
};
#endif /* Contacts_hpp */
