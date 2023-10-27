#include <iostream>

int main()
{
	try
	{
		int num = 0;o

		if (!(std::cin >> num)) {
			throw std::invalid_argument("Wrong input");
		}

		double sum = 0; double count = 0; double arf = 0; 
		double sumpol = 0; double countpol = 0; double arfpol = 0;
		double max = 0; double maxnum = 0;
		double min = 0; double minnum = 0;

		while (num != 0)
		{
			count++;
			sum += num;
			if (num > 0) {
				sumpol += num;
				countpol++;
			}
			if (num > max) {
				max = num;
				maxnum = count;
			}
			if (num < max) {
				min = num;
				minnum = count;
			}
			if (!(std::cin >> num)) {
				throw std::invalid_argument("Wrong input");
			}
		}
		arf = sum / count;
		arfpol = sumpol / countpol;
		std::cout << count << '\n';
		std::cout << "1. " << sum << '\n';
		std::cout << "2. " << arf << '\n';
		std::cout << "3. " << arfpol << '\n';
		std::cout << "4. " << "max -> " << max << " count " << maxnum << '\n';
		std::cout << "5. " << "min -> " << min << " count " << minnum << '\n';
		return 0;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what();
		return 1;
	}
}