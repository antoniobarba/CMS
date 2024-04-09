#include "contact.h"
#include "phonebook.h"
#include "userinterface.h"

void Phonebook::addContact(const Contact& contact)
{
    m_phonebook.push_back(contact);
}

Contact Phonebook::findContact(const std::string& name, const std::string& surname)
{
    for (const auto& contact : m_phonebook)
    {
        if (contact.getName() == name && contact.getSurname() == surname)
        {
            return contact;
        }
    }

    return Contact("", "");
}

bool Phonebook::deleteContact(const std::string& name, const std::string& surname)
{
    for (auto& contact : m_phonebook)       
    {
        if (contact.getName() == name && contact.getSurname() == surname) 
        {
            std::vector<Contact>::iterator i;
            *i = contact;
            m_phonebook.erase(i);
            return true;   
        }    
    }

    // Not found
    return false;               
}
            
bool Phonebook::editContact(const std::string& name, const std::string& surname, const Contact& newData)
{
    for (auto& contact : m_phonebook)
    //Probably this for-loop with if-statement will also be wrapped into a function
    {            
        if (contact.getName() == name && contact.getSurname() == surname)
        {
            contact = newData;     
            return true;
        }
    }

    // Not found
    return false;
}        