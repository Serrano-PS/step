#include <set>
#include <iostream>
#include <ctime>
#include <thread>
#include <chrono>
#include <sstream>

#include <bus\notificador.h>
#include <ent\evento.h>
#include <ent\eventos.h>
#include <ent\momento.h>

using namespace notificador;

class exibidor : public i_exibidor {
public:
	void exibe(const notificador::ent::evento & p_evento) {
		
			using namespace std;
			stringstream _stream;
			_stream << "ALARME: " << p_evento.get_desc()
			<< ", " << p_evento.get_alarme().get_hr()
			<< ":" << p_evento.get_alarme().get_mm() <<  " hrs"
			<< endl;
		cout << _stream.str();
	}
};

bool test1() {
	
	// preencher eventos
	ent::eventos _eventos;
	_eventos.insert(ent::evento("remedio", ent::momento(12, 45)));
	_eventos.insert(ent::evento("fim da aula",ent:: momento(12, 20)));
	_eventos.insert(ent::evento("almoço", ent::momento(12, 00)));

	bus::notificador _notificador(_eventos);
		exibidor _exibidor;
		_notificador.start(&_exibidor);
		return true;
}


int main(int argc, char **argv) {

	std::cout << "test1 " << (test1() ? "OK" : "FALHOU") << std::endl;


	return 0;
}