#include <bus/momento.h>
#include <iostream>

using namespace notificador::bus;

bool test1() {
	try {
		momento _m(12, 35);
	}
	catch (std::exception & _ex) {
		std::cerr << "ERRO test1: " << _ex.what() << std::endl;
		return false;
	}
	return true;
}

bool test2() {
	try {
		momento _m(4512, 35);
	}
	catch (std::exception &) {
		return true;
	}
	return false;
}

bool test3() {
	try {
		momento _m1(12, 35);
		momento _m2(12, 35);
		if (_m1 != _m2) {
			return true;
		}
	}
	catch (std::exception &) {
		return false;
	}
	return false;
}
bool test4() {
	try {
		momento _m1(12, 45);
		momento _m2(12, 35);
		if (_m1 == _m2) {
			return true;
		}
	}
	catch (std::exception &) {
		return false;
	}
	return false;
}
bool test5() {
	time_t _m2;
	
	try {
		momento _m1(16, 05);
		time(&_m2);
		
		
		if (_m1 == _m2) {
			return true;
		}
	}
	catch (std::exception &) {
		return false;
	}
	return false;
}

bool test6() {
	try {
		momento _m1(12, 40);
		momento _m2(12, 35);
		if (_m1 < _m2) {
			return true;
		}
	}
	catch (std::exception &) {
		return false;
	}
	return false;
}

bool test7() {
	try {
		momento _m1(12, 45);
		momento _m2(12, 35);
		if (_m1 <= _m2) {
			return true;
		}
	}
	catch (std::exception &) {
		return true;
	}
	return false;
}

bool test8() {
	try {
		momento _m1(13, 25);
		momento _m2(12, 35);
		if (_m1 > _m2) {
			return true;
		}
	}
	catch (std::exception &) {
		return false;
	}
	return false;
}

bool test9() {
	try {
		momento _m1(12, 25);
		momento _m2(12, 35);
		if (_m1 >= _m2) {
			return true;
		}
	}
	catch (std::exception &) {
		return false;
	}
	return false;
}




int main(int argc , char ** argv) {
	std::cout << "test1 " << (test1() ? "OK" : "FALHOU") << std::endl;
	std::cout << "test2 " << (test2() ? "OK" : "FALHOU") << std::endl;
	std::cout << "test3 " << (test3() ? "OK" : "FALHOU") << std::endl;
	std::cout << "test4 " << (test4() ? "OK" : "FALHOU") << std::endl;
	std::cout << "test5 " << (test5() ? "OK" : "FALHOU") << std::endl;
	std::cout << "test6 " << (test6() ? "OK" : "FALHOU") << std::endl;
	std::cout << "test7 " << (test7() ? "OK" : "FALHOU") << std::endl;
	std::cout << "test8 " << (test8() ? "OK" : "FALHOU") << std::endl;
	std::cout << "test9 " << (test9() ? "OK" : "FALHOU") << std::endl;


}


/*
Severity	Code	Description	Project	File	Line	Suppression State
Error	C4996	'localtime': This function or variable may be unsafe. Consider using localtime_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.	test_momento	c:\users\admin\documents\canellas@itstep.org\step\c++\notificador\bus\momento.cpp	58

*/