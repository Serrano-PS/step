#include <set>
#include <iostream>
#include <ctime>

#include <bus/eventos.h>
#include <bus/evento.h>

using namespace notificador::bus;

bool test1() {
	evento _procurado("", momento(7, 23));

	eventos _eventos;

	_eventos.insert(evento("remedio", momento(12, 45)));
	_eventos.insert(evento("cerveja", momento(18, 50)));
	_eventos.insert(evento("cafe", momento(7, 23)));

	eventos::const_iterator _found = _eventos.find(_procurado);

	if (_found == _eventos.end()) {
		std::cout << "Nao achei evento para "
			<< _procurado.get_alarme().get_hr()
			<< ":"
			<< _procurado.get_alarme().get_mm()
			<< std::endl;
		return false;
	}

	std::cout << "Evento para "
		<< _found->get_alarme().get_hr()
		<< ":"
		<< _found->get_alarme().get_mm()
		<< " econtrado: "
		<< _found->get_desc()
		<< std::endl;
	return true;
}


bool test2() {
	evento _procurado("", momento(2, 24));

	eventos _eventos;

	_eventos.insert(evento("remedio", momento(12, 45)));
	_eventos.insert(evento("cerveja", momento(18, 50)));
	_eventos.insert(evento("cafe", momento(7, 23)));

	eventos::const_iterator _found = _eventos.find(_procurado);

	if (_found == _eventos.end()) {
		std::cout << "Nao achei evento para "
			<< _procurado.get_alarme().get_hr()
			<< ":"
			<< _procurado.get_alarme().get_mm()
			<< std::endl;
		return true;
	}

	std::cout << "Evento para "
		<< _found->get_alarme().get_hr()
		<< ":"
		<< _found->get_alarme().get_mm()
		<< " econtrado: "
		<< _found->get_desc()
		<< std::endl;
	return false;
}

bool test3() {
	// timestamp atual
	time_t _time = time(NULL);

	// converter para struct tm

	// criar uma variável 'momento'

	// loop em eventos
	//     se o momento do evento corrente == ao momento atual
	//         imprime um aviso

	return true;
}

int main(int argc, char **argv) {

	std::cout << "test1 " << (test1() ? "OK" : "FALHOU") << std::endl;
	std::cout << "test2 " << (test2() ? "OK" : "FALHOU") << std::endl;
	//std::cout << "test3 " << (test3() ? "OK" : "FALHOU") << std::endl;

	return 0;
}