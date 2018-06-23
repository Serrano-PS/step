#include<iostream>
#include <ent/evento.h>
#include <ent/momento.h>

using namespace std;

using namespace notificador::ent;

evento test1() {

  evento e1("remédio fígado ", momento(12,45));
  return e1;


}
int main() {
	evento evento = test1();
	std::cout <<evento.get_desc() << evento.get_alarme().get_hr() << ":" << evento.get_alarme().get_mm() << std::endl;
}
