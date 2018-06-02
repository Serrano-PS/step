#ifndef _EVENTOS_H_
#define _EVENTOS_H_

#include <bus/evento.h>
#include <set>

using namespace std;

namespace notificador {
	namespace bus {
		typedef std::set<evento> eventos;
	}
}

#endif