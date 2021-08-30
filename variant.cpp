#include <iostream>
//c++17标准中引入了variant来作为union的类型安全替代品。
//它可以在任意时间保存模板参数列表中某一类型的值或者空值。
#include <variant>
int main()
{
    std::variant<int, double, std::string> var;
    var = 15;
    std::cout << var.index()<<std::endl;//更具实际类型打印索引
	var = "hello";
	std::cout << var.index()<<std::endl;
	var = 5.0;
	std::cout << var.index()<<std::endl;

	auto var1 = var;//operator=

	std::variant<int, double, std::string> var3;
	var3 = 100;
	var1 = 99;

	if (var3 >= var1) {//operator>=
		std::cout << "var3>=var1";
	}

}

