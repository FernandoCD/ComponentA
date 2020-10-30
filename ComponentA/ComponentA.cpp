#include "TestComponent.h"

vector<Servicio> Serv;
vector<Repuesto> Rep;

class OrdenTrabajo {
public:
    string placa_veh, observ;
    vector<int> Servicios;
    vector<int> Repuestos;

    OrdenTrabajo(string placa_veh) : placa_veh(placa_veh) {}

    void addServicio(int serv) {
        Servicios.push_back(serv);
    }

    void addRepuesto(int rep) {
        Repuestos.push_back(rep);
    }

    void addObserv(string obs) {
        observ = obs;
    }

    string getObserv() {
        return observ;
    }
};

void CrearOrdenTrabajo() {
    string placa;
    cin >> placa;
    OrdenTrabajo OT(placa);


    Servicio temp1 = Serv[0];
    OT.addServicio(temp1.getId());

    Repuesto temp2 = Rep[0];
    OT.addServicio(temp2.getId());
}

int main() {

}
