#include <iostream>
#include <string>
#pragma once

class Credit
{
	std::string age;
	std::string birthplace;
	std::string evidence_number;
	std::string PESEL;

	float monthly_income;
	float monthly_spending;

	std::string pledge_name;
	float pledge_value; 
	
	int instalment_amount;
	float monthly_payment;

	double total_credit;
	float current_oportunity;
	
	float capacity;
	float safety_bufor;
	float reduce_bufor;


public:
	
	int credit_counter;
	int credit_amount;
	bool verification, lack_finalisation = true, read_data = false, pledge = false;
	
	std::string legal_name;

	Credit();
	~Credit();
	virtual void operator++();

	virtual void read_data_file();
	virtual void calculate_credit();
	virtual void calculate_capacity();
	virtual void calculate_instalment(int lending_rate);
	virtual void calculate_current_oportunity(int lending_rate);
	virtual void calculate_reduce_bufor();
	

	virtual bool acceptation_conditions() = 0;       
	virtual void input_specific() = 0;

	virtual void input_universal();
	virtual void input_credit_details();
	virtual void input_pledge_info();

	virtual void check_capacity();
	
	virtual int return_lending_rate() = 0;
	
	virtual std::string type_in_answer(std::string yes, std::string no);
	
	virtual void save_all_data();
	virtual void save_based_data();
	virtual void save_credit_data();
	virtual void save_specific_data() = 0; 

	virtual void feedback();
	virtual void contract();
	virtual void final();

	virtual bool checkpoint();
	virtual bool checkpoint_2();
};
