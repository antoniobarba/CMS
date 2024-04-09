#pragma once

#include <string>
//class Contact declaretion file 

class Contact 
{
public:
    Contact (const std::string& name, 
            const std::string& surname, 
            const std::string& number);
    Contact (const std::string& name, 
            const std::string& surname);
                
    void setName(const std::string& name);
    const std::string& getName() const;

    void setSurname(const std::string& surname);
    const std::string& getSurname() const;

    void setNumber(const std::string& number);
    const std::string& getNumber() const;
                        
    bool isValid() const;
   
    private:
    std::string m_name;
    std::string m_surname;
    std::string m_number;

};
