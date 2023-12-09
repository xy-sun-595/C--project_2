/*
 * pi_approx.h
 *
 *  Created on: Dec 8, 2023
 *      Author: Xiaoyong
 */

#ifndef PI_APPROX_H_
#define PI_APPROX_H_

struct PiResults {
    double approx;
    double error;
};

PiResults pi_approx(int N);

#endif // PI_APPROX_H
