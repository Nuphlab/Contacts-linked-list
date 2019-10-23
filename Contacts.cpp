//
//  Contacts.cpp
//  Contacts
//
//  Created by Westley Holden on 10/23/19.
//  Copyright © 2019 Westley Holden. All rights reserved.
//

#include "Contacts.h"

ContactNode::ContactNode(string name, string phoneNum, ContactNode* next) {
    this->contactName = name;
    this->contactPhoneNum = phoneNum;
    this->nextNodePtr = next;
}
void ContactNode::InsertAfter(ContactNode* nodeLoc) {
    ContactNode* temp = nullptr;
    
    temp = this->nextNodePtr;
    this->nextNodePtr = nodeLoc;
    nodeLoc->nextNodePtr = temp;
    
}
string ContactNode::GetName() {
    return this->contactName;
}
string ContactNode::GetPhoneNumber() {
    return this->contactPhoneNum;
}
ContactNode* ContactNode::GetNext() {
    return this->nextNodePtr;
}
void PrintContactNode() {
    
}
