#include <iostream>

int main()
{
	float rubPay, rub, usd = 92.86f, euro = 103.41f, yuan = 13.22f, farit = 37, yen = 0.646223f, currency, tryLoop, refill;
	bool trueBank = true;
	std::cout << "Enter the number of rubles: ";
	std::cin >> rub;
	while (trueBank)
	{
		while (true)
		{

			std::cout << "Select the currency(number): 1.Dollar, 2.Euro, 3.Yuan, 4.Farit, 5.Yen: ";
			std::cin >> currency;
			if (currency <= 5 && currency >= 1)
			{
				break;
			}
			std::cout << "Error!\n";
		}
		
		while (true)
		{
			std::cout << "You have: " << rub;
			std::cout << "\nHow many rubles do you want to buy for?";
			std::cin >> rubPay;

			if (rubPay <= rub)
			{
				rub = rub - rubPay;
				break;
			}
			else
			{
				std::cout << "Lack!";
			}
		}

		if (currency == 1)
		{
			std::cout << "You will receive: " << (rubPay - rubPay * 0.05) / usd << "usd\n" << "\nCommission: " << rubPay * 0.05;
		}
		else if (currency == 2)
		{
			std::cout << "You will receive: " << (rubPay - rubPay * 0.05) / euro << "euro" << "\nCommission: " << rubPay * 0.05;
		}
		else if (currency == 3)
		{
			std::cout << "You will receive: " << (rubPay - rubPay * 0.05) / yuan << "yuan" << "\nCommission: " << rubPay * 0.05;
		}
		else if (currency == 4)
		{
			std::cout << "You will receive: " << (rubPay - rubPay * 0.05) / farit << "farit" << "\nCommission: " << rubPay * 0.05;
		}
		else if (currency == 5)
		{
			std::cout << "You will receive: " << (rubPay - rubPay * 0.05) / yen << "yen" << "\nCommission: " << rubPay * 0.05;
		}
		std::cout << "\nTo complete, enter 0: ";
		std::cin >> tryLoop;
		if (tryLoop == 0)
		{
			break;
		}
		std::cout << "Do you want to top up your balance? If yes, enter how many rubles to top up the balance, otherwise enter 0: ";
		std::cin >> refill;
		rub += refill;
		refill = 0;
		
	}
	

}