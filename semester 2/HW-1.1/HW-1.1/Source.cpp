#include <iostream>
using namespace std;
class Client
{
private:
	string name;
	string address;
	string phone_number;
public:
	Client() :name(""), address(""), phone_number("") {}
	Client(string n, string a, string p) :name(n), address(a), phone_number(p) {}
	Client(const Client& c) :name(c.name), address(c.address), phone_number(c.phone_number) {}
	string GetClientsName() {
		return name;
	}
	string GetClientsAddress() {
		return address;
	}
	string GetClientsNumber() {
		return phone_number;
	}
	friend ostream& operator<<(ostream& os, Client client)
	{
		os << "Name: " << client.GetClientsName() << endl << "Address: " << client.GetClientsAddress() << endl << "Phone:" << client.GetClientsNumber() << endl;
		return os;
	} 
};
class BankAccount
{
private:
	Client client;
	string account_number;
	double balance;
public:
	BankAccount() : client(), account_number("1"), balance(0) {}
	BankAccount(Client cli, string num, double b) :client(cli), account_number(num), balance(b) {}
	BankAccount(const BankAccount& b) :client(b.client), account_number(b.account_number), balance(b.balance) {}

	void AddMoney(double amount) {
		balance += amount;
		cout << "Your balance:" << balance << endl;
	}
	void WithdrawMoney(double amount)
	{
		if (balance < amount)
		{
			cout << "Not enough money on your bank account" << endl;
		}
		else
		{
			balance -= amount;
			cout << "Íou have withdrawn:" << amount << endl;
			cout << "Your balance:" << balance << endl;
		}
	}
	double GetBalance()
	{
		return balance;
	}
	string GetClientName()
	{
		return client.GetClientsName();
	}
	string GetClientAddress()
	{
		return client.GetClientsAddress();
	}
	string GetAccountNumber()
	{
		return account_number;
	}
	friend ostream& operator<<(ostream& os, BankAccount account)
	{
		os << "Client:" <<account.client<<endl<<"Account number:"<<account.account_number<<endl<<"Balance:"<<account.balance;
		return os;
	}
};


int main()
{
	BankAccount* account= new BankAccount[10];
	Client c1("Serhii", "Ivano-Frankivsk", "111");
	Client c2("Max", "Kharkiv", "222");
	Client c3("Bill", "Lviv", "333");
	Client c4("Andrew", "Herson", "444");
	Client c5("Artur", "Dnipro", "555");
	Client c6("Danylo", "Ivano-Frankivsk", "666");
	Client c7("Olexandr", "Rivne", "777");
	Client c8("Max", "Lviv", "888");
	Client c9("Ann", "Ternopil", "999");
	Client c10("Danylo", "Kyiv", "1000");

	BankAccount b1(c1, "1", 453);
	BankAccount b2(c2, "2", 176);
	BankAccount b3(c3, "3", 23);
	BankAccount b4(c4, "4", 1309.9);
	BankAccount b5(c5, "5", 9857);
	BankAccount b6(c6, "6", 550);
	BankAccount b7(c7, "7", 0);
	BankAccount b8(c8, "8", 560);
	BankAccount b9(c9, "9", 333);
	BankAccount b10(c10, "10", 4308);

	account[0] = b1;
	account[1] = b2;
	account[2] = b3;
	account[3] = b4;
	account[4] = b5;
	account[5] = b6;
	account[6] = b7;
	account[7] = b8;
	account[8] = b9;
	account[9] = b10;

	string adress;
	string client_name;
	cout << "----------------------------" << endl;
	cout << "Enter Name:" << endl;
	cin >> client_name;
	cout << "Enter Adress:" << endl;
	cin >> adress;
	int temp=0;
	for (int i = 0; i < 10; i++)
	{
		if (account[i].GetClientName() == client_name&&account[i].GetClientAddress() == adress)
		{
			cout << account[i] << endl;
			break;
		}
		else
		{
			temp++;
		}
	}
	if (temp == 10)
	{
		cout << "Account Not Found" << endl;
	}
	string ac_num;
	cout << "----------------------------" << endl;
	cout << "Enter account number:";
	cin >> ac_num;
	int arr_num;
	for (int i = 0; i < 10; i++)
	{
		if (account[i].GetAccountNumber() == ac_num)
		{
			arr_num = i;
		}
	}
	cout << "----------------------------" << endl;
	cout<< "1 --> Account info" << endl << "2 --> Balance" << endl << "3 --> Add money" << endl << "4 --> Withdraw money" << endl << "Choose option:" << endl;
	int option;
	cin>> option;
	cout << "----------------------------" << endl;
	switch (option)
	{
	case 1:
		cout << account[arr_num];
		break;
	case 2:
		cout << "Your balance:" << account[arr_num].GetBalance()<<endl;
		break;
	case 3:
		cout << "Amount:" << endl;
		int money_to_add;
		cin >> money_to_add;
		account[arr_num].AddMoney(money_to_add);
		break;
	case 4:
		cout << "Your balance:" << account[arr_num].GetBalance() << endl;
		cout << "Amount you want to withdraw:" << endl;
		int money_to_withdraw;
		cin >> money_to_withdraw;
		account[arr_num].WithdrawMoney(money_to_withdraw);
		break;
	default:
		cout << "Operation failed" << endl;
		break;
	}
	return 0;
}
