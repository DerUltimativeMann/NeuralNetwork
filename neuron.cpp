#include "neuron.h"

Neuron::Neuron()
{
    Neuron::value = 0;
}

Neuron::Neuron(double value)
{
    Neuron::value = value;
}

Neuron::~Neuron()
{

}

double Neuron::getValue() const
{
    return Neuron::value;
}

void Neuron::setValue(double value)
{
    Neuron::value = value;
}
