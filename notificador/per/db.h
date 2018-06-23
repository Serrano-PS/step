#ifndef _DB_H_
#define _DB_H_

#include <fstream>
#include <string>
#include <cstdint>
#include <sstream>

#include <ent/evento.h>
#include <ent/eventos.h>
#include <ent/momento.h>

#define NOME_ARQ "alarmes.txt"


namespace notificador {
	namespace per {
		class db {
		public:
			db() = delete;
			db(const db &) = delete;
			db & operator=(const db &) = delete;
			void * operator new   (size_t) = delete;
			void * operator new[](size_t) = delete;
			void   operator delete   (void *) = delete;
			void   operator delete[](void*) = delete;

			db(const std::string & p_path);

			bool insere(const ent::evento & p_evento);

			bool carrega(ent::eventos & p_eventos);
		private:
			std::string m_file_name;
		};
	}
}

#endif // !_DB_H_

