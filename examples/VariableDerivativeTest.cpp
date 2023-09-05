#include <iostream>

#include <tvm/LinearizedControlProblem.h>
#include <tvm/Variable.h>

using namespace Eigen;
using namespace tvm;

int main()
{
    Space s(2);
    
    // Non disturbed variables
    VariablePtr x = s.createVariable("x");
    VariablePtr dx = dot(x);
    VariablePtr ddx = dot(x,2);

    x->setZero();
    dx->setZero();
    ddx->setZero();

    // Disturbed variables
    VariablePtr x_d = jointSpace.createVariable("x_d");
    VariablePtr dx_d = dot(x_d);
    VariablePtr ddx_d = dot(x_d,2);

    x_d->setZero();
    dx_d->setZero();
    ddx_d->setZero();

    VectorXd disturbance = VectorXd::Zero(2);
    double mass = 1.0;

    // 

    return 0;
}