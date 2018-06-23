#ifndef _NOTIFICADOR_
#define _NOTIFICADOR_

#include <iostream>
#include <string>
#include <cstdint>
#include <thread>
#include <chrono>
#include <sstream>

#include <ent/momento.h>
#include <ent/evento.h>
#include <ent/eventos.h>


class i_exibidor {
public:
	virtual void exibe(const notificador::ent::evento &) = 0;
};

namespace notificador {
	namespace bus {
		class notificador {
		public:
			inline notificador(const ent::eventos & p_eventos)
			: m_eventos(p_eventos) {}

			void start(i_exibidor * p_exibidor);

		private:
			const ent::eventos & m_eventos;
		};
	}
}


#endif // !_NOTIFICADOR_

