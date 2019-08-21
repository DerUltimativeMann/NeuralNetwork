#ifndef _AXION_H
#define _AXION_H

#include "neuron.h"

class Axion : public Neuron
{
    private:
        Neuron *origin;
        Neuron *target;

    public:
        Axion();
        Axion(double, Neuron*, Neuron*);
        ~Axion();

        Neuron *getOrigin() const;
        Neuron *getTarget() const;

        void setOrigin(Neuron *);
        void setTarget(Neuron *);

        void think();
};

#endif
