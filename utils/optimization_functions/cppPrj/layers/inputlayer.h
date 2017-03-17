#ifndef INPUTLAYER_H
#define INPUTLAYER_H
#include "baselayer.h"
using namespace std;

class InputLayer : public BaseLayer
{
public:
    InputLayer(const string &name){
        m_inputLayer = nullptr;
        m_name = name;
    }

    Tensor<float> ForwardPropagation(const Tensor<float> &input) override{
        Tensor<float> activation;
        activation.SetDims(input.GetDims());
        return activation;
    }
    Tensor<float> BackwardPropagation() override{
        Tensor<float> gradient;
        return gradient;
    }
};
#endif // INPUTLAYER_H