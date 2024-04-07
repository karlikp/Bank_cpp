#include <iostream>
#include <ctype.h>
#include <regex>

#include "FormValidation.h"

using namespace std;

string get_fullname()
{
    string name;
    cout << "Enter your full name: ";
    getline(std::cin, name);

    regex reg("[A-Z]{1}[a-z]{2,19}\\s[A-Z]{1}[a-z]{2,19}");

    if (regex_match(name, reg)) 
        return name;
    else 
	{
        std::cout << "Wrong full name.\n";
        get_fullname();
    }
	return "";
}

 string get_age()
 {
	string age;
    cout << "Enter your age: ";
    getline(std::cin, age);

    regex reg("\\d{2}");

    if (regex_match(age, reg) and stoi(age) >= 18) 
        return age;

	else if(stoi(age) < 18)
	{
		cout << "\nYou have previously declared that you are of legal age\n";
		get_age();
	}
	else 
	{
		std::cout << "Wrong age.\n";
		get_age();
	}
	return "";
 }

 string get_birthplace()
{
    string name;
    cout << "Enter your birthplace (with a capital letter): ";
    getline(std::cin, name);

    regex reg("[A-Z]{1}[a-z]{2,19}");

    if (regex_match(name, reg)) 
        return name;
        
    else 
	{
        std::cout << "Wrong answer.\n";
        get_birthplace();
    }
	return "";
}

 string get_evidence_number()
 {
	string number;
    cout << "Enter your evidence number (3 letters and 6 digits): ";
    getline(std::cin, number);

    regex reg("[A-Za-z]{3}\\d{6}");

    if (regex_match(number, reg)) 
        return number;
        
    else 
	{
        std::cout << "Wrong answer.\n";
        get_evidence_number();
    }
	return "";
 }

 string get_PESEL()
 {

	string number;
    cout << "Enter in your PESEL(it should include 11 digits): ";
    getline(std::cin, number);

    regex reg("\\d{11}");

    if (regex_match(number, reg)) 
        return number;
        
    else 
	{
        std::cout << "Wrong answer.\n";
        get_PESEL();
    }
	return "";
 }


 int get_number(string desire_info)
 {
	string number;
    cout << "\nEnter your " << desire_info << ": "; 
    getline(std::cin, number);

    regex reg("\\d+");

    if (regex_match(number, reg)) 
        return stoi(number);
        
    else 
	{
        std::cout << "Wrong answer.\n";
        get_number(desire_info);
    }
	return 0;
 }


 string get_letter_answer(std::string desire_info)
 {
	string name;
    cout << "Enter  " << desire_info << ": ";
    getline(std::cin, name);

    regex reg("[A-Za-z]+[ ]*[A-Za-z]*[ ]*[A-Za-z]*");

    if (regex_match(name, reg)) 
        return name;
        
    else 
	{
        std::cout << "Wrong answer.\n";
        get_letter_answer(desire_info);
    }
	return "";
 }


 string get_account_number()
 {
	string number;
    cout << "\nEnter your bank account number (XX-XXXX-XXXX-XXXX-XXXX-XXXX-XXXX): "; 
    getline(std::cin, number);

    regex reg("\\d{2}-\\d{4}-\\d{4}-\\d{4}-\\d{4}-\\d{4}-\\d{4}");

    if (regex_match(number, reg)) 
        return number;
        
    else 
	{
        std::cout << "Wrong answer.\n";
         get_account_number();

    }
	return "";
 }

 string get_NIP()
 {
string number;
    cout << "\nEnter NIP number of your company (XXX-XXX-XX-XX): "; 
    getline(std::cin, number);

    regex reg("\\d{3}-\\d{3}-\\d{2}-\\d{2}");

    if (regex_match(number, reg)) 
        return number;
        
    else 
	{
        std::cout << "Wrong answer.\n";
         get_NIP();

    }
	return "";
 }

string type_in_answer(string yes, string no)
{
	string answer;
	getline(cin >> ws, answer);

	if (answer == yes || answer == no)
	{
		return answer;
	}
	else
	{
		do
		{
			cout << "\nWrong answer.";
			cout << "\nCorrect it: ";
			getline(cin >> ws, answer);
		} while (!(answer == yes or answer == no)); 
	}
		return answer;
}