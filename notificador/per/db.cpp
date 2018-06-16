#include "per/db.h"
#include <stdexcept>

notificador::per::db::db(const std::string & p_path)
{
	std::stringstream _stream;
	if (p_path == "")
	{
		throw std::runtime_error("Path do DB NÃO PODE SER VAZIO");
	}
	_stream << p_path << "/" << NOME_ARQ;
	
	m_file = _stream.str();
}

bool notificador::per::db::insere(const ent::evento & p_evento)
{
	return false;
}
