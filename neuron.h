#ifndef _NEURON_H
#define _NEURON_H

class Neuron
{
    private:
        double value;

    public:
        Neuron();
        Neuron(double);
        virtual ~Neuron();

        double getValue() const;

        void setValue(double);
};


#endif
