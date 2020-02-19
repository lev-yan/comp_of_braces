#include <iostream>
#include <vector>

int main()
{
	std::vector<char> braces = {'{','}','[',']','(',')'};
	char arg1, arg2;
	while(std::cin >> arg1 >> arg2){
		for (auto it = 0; it < braces.size(); it += 2){
			if (braces[it] == arg1 && arg2 == braces[it + 1]){
					std::cout << "ok" << std::endl;
					break;
			}
			if(it >= braces.size() - 2){
				std::cout << "error" << std::endl;
			}
		}
	}
	return 0;
}
