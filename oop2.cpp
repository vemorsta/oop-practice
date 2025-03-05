#include <iostream>

class Benz {
    public:
        Bool startEngine(){
            if (startElectronicServices() && startLightSystem()){
                std::cout <<"Engine started successfully."<<std::endl;
                return true;

            }else {
                std::cout <<"Engine failed."<<std::endl;
                return false;

            }
        }
    private:
        bool startElectronicServices(){
            std::cout <<"Electronic Service started."<<std::endl;
                return true;
    }
        bool startLightSystem(){
            std::cout <<"LightSystem started."<<std::endl;
                return true;
        }
};

int main(){
    Benz b;
    bool r = b.startEngine();
    return 0;
}