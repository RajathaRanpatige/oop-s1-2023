#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

class AirVehicle {

    int weight;
    float fuel;
    int numberOfFlights;

    public:
        AirVehicle();

        AirVehicle(int w);

        void refuel();

        virtual void fly(int headwind, int minutes);

        int get_weight();
        float get_fuel();
        int get_numberOfFlights();

        void set_weight(int weight);
        void set_fuel(float fuel);
        void set_numberOfFlights(int numberOfFlights);
};

#endif