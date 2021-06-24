

class Empleado{
    protected:
    std::string name;
    short int salario = 6000;

    public:
    float getComisiones(float comisiones);
    short int getSalario();
};

int main(){

}

float Empleado::getComisiones(float comisiones){

    float salarioMasComisiones = 0;

    while(comisiones){

        salarioMasComisiones = comisiones * 0.02;
    }

    salarioMasComisiones = salarioMasComisiones + this->salario;

    return salarioMasComisiones;
}


