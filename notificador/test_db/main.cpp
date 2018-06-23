
#include <string>
#include <sstream>
#include <iostream>

#include <ent/eventos.h>
#include <ent/evento.h>
#include <ent/momento.h>
#include <bus/notificador.h>
#include <per/db.h>
#include <algorithm>


using namespace notificador;

#define PATH_DB "./"


bool test1() {

	// preencher eventos
	ent::evento _evento("Churrasco", ent::momento(12, 45));

		
	
	notificador::per::db _db(PATH_DB);

	 return  _db.insere(_evento);;
}



bool test3() {
	using namespace std;
	const string _buffer("Churrasco;12;45;");

	string::const_iterator _begin = _buffer.begin();
	string::const_iterator _end = _buffer.end();

	string::const_iterator _pv1 = std::find(_begin, _end, ';');
	if (_pv1 == _end) {
		return false;
	}

	const string _desc(_begin, _pv1);
	cerr << "desc = " << _desc << endl;

	++_pv1;

	string::const_iterator _pv2 = std::find(_pv1, _end, ';');
	if (_pv2 == _end) {
		return false;
	}

	const string _hh(_pv1, _pv2);
	cerr << "hh = " << _hh << endl;

	++_pv2;

	string::const_iterator _pv3 = std::find(_pv2, _end, ';');
	if (_pv3 == _end) {
		return false;
	}

	const string _mm(_pv2, _pv3);
	cerr << "mm = " << _mm << endl;

	return true;
	


}
bool test4() {
	notificador::per::db _db(PATH_DB);

	ent::eventos _eventos;
	_db.carrega(_eventos);
	


	return 	

}




int main(int argc, char **argv) {

	std::cout << "test1 " << (test1() ? "OK" : "FALHOU") << std::endl;
	/*std::cout << "test2 " << (test2() ? "OK" : "FALHOU") << std::endl;*/
	std::cout << "test3 " << (test3() ? "OK" : "FALHOU") << std::endl;
	std::cout << "test4 " << (test4() ? "OK" : "FALHOU") << std::endl;
}