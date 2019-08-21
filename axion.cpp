#include "axion.h"

Axion::Axion() : Neuron()
{
    Axion::origin = 0;
    Axion::target = 0;
}

Axion::Axion(double value, Neuron *origin, Neuron *target) : Neuron(value)
{
    Axion::origin = origin;
    Axion::target = target;
}

Axion::~Axion()
{
    Axion::origin = 0;
    Axion::target = 0;
}

Neuron *Axion::getOrigin() const
{
    return Axion::origin;
}

Neuron *Axion::getTarget() const
{
    return Axion::target;
}

void Axion::setOrigin(Neuron *origin)
{
    Axion::origin = origin;
}

void Axion::setTarget(Neuron *target)
{
    Axion::target = target;
}

void Axion::think()
{
    Axion::target->setValue(getValue() * Axion::origin->getValue());
}
