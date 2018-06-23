#include <per/db.h>
#include <stdexcept>
#include <algorithm>

notificador::per::db::db(const std::string & p_path)
{
	std::stringstream _stream;
	if (p_path == "") {
		throw std::runtime_error("Path do DB não pode ser vazio");
	}

	_stream << p_path << "\\" << NOME_ARQ;

//C:/Users/serra/Desktop/alarmes.db

	m_file_name = _stream.str();
}

bool notificador::per::db::insere(const ent::evento & p_evento)
{
	std::ofstream _file(m_file_name, std::ios::app);
	if (!_file.good()) {
		throw std::runtime_error("Não abriu arquivo");
	}

	_file << p_evento.get_desc() << ";"
		<< p_evento.get_alarme().get_hr() << ";"
		<< p_evento.get_alarme().get_mm() << ";" << std::endl;




	return true;
}

bool notificador::per::db::carrega(ent::eventos & p_eventos)
{

	using namespace std;
	using namespace notificador::ent;

	ifstream _file(m_file_name);
	if (!_file.good()) {
		throw std::runtime_error("N�o abriu arquivo");
	}

	string _buffer;
	getline(_file, _buffer, '\n');

	while (!_file.eof()) {

		if (!_file.good()) {
			throw std::runtime_error("Erro lendo arquivo");
		}
		

		

		string::const_iterator _begin = _buffer.begin();
		string::const_iterator _end = _buffer.end();
		
		string::const_iterator _pv1 = std::find(_begin, _end, ';');
		if (_pv1 == _end) {
			return false;
		}

		const string _desc(_begin, _pv1);
		
		++_pv1;

		string::const_iterator _pv2 = std::find(_pv1, _end, ';');
		if (_pv2 == _end) {
			return false;
		}

		const string _hh_str(_pv1, _pv2);
		

		++_pv2;

		string::const_iterator _pv3 = std::find(_pv2, _end, ';');
		if (_pv3 == _end) {
			return false;
		}

		const string _mm_str(_pv2, _pv3);
		
		stringstream _stream;
		int hr = 0;
		_stream << _hh_str;
		_stream >> hr;

		_stream.clear();
		int mm = 0;
		_stream << _hh_str;
		_stream >> mm;
		

		evento evento(_desc, momento(hr, mm));
		p_eventos.insert(evento);
		
		getline(_file, _buffer, '\n');

	}
	return true;
}
