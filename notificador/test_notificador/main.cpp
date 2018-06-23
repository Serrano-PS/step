
#include <string>
#include <sstream>
#include <iostream>

#include <ent/eventos.h>
#include <ent/evento.h>
#include <ent/momento.h>
#include <bus/notificador.h>


using namespace notificador;

class exibidor : public i_exibidor {
public:
	void exibe(const notificador::ent::evento & p_evento) {
		using namespace std;
		stringstream _stream;
		_stream << "ALARME: '" << p_evento.get_desc()
			<< "', " << p_evento.get_alarme().get_hr()
			<< ":" << p_evento.get_alarme().get_mm() << " hs"
			<< endl;
		cout << _stream.str();
	}
};


bool test1() {

	// preencher eventos
	ent::eventos _eventos;
	_eventos.insert(ent::evento("remedio", ent::momento(10, 36)));
	_eventos.insert(ent::evento("cerveja", ent::momento(11, 9)));
	_eventos.insert(ent::evento("cafe", ent::momento(7, 23)));

	bus::notificador _notificador(_eventos);

	exibidor _exibidor;

	_notificador.start(&_exibidor);

	return true;
}

int main(int argc, char **argv) {

	std::cout << "test1 " << (test1() ? "OK" : "FALHOU") << std::endl;
}