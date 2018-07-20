#include <iostream>
#include "Neuron.h"
#include "point.h"
using namespace std;
class CumulativeNeuron : public Neuron
{
  protected:
	int total_incoming_connections;
	int counter;

  public:
	CumulativeNeuron();
	CumulativeNeuron(int a, int b, int x, int y, double atten);
	~CumulativeNeuron();
};
