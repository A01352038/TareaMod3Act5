// =================================================================
//
// File: exercise02.cpp
// Author(s): Sergio Augusto Macias Corona
// ID: A01352038
// Description: This file contains the code to brute-force all
//				prime numbers less than MAXIMUM. The time this
//				implementation takes will be used as the basis to
//				calculate the improvement obtained with parallel
//				technologies.
//
// Copyright (c) 2023 by Tecnologico de Monterrey.
// All Rights Reserved. May be reproduced for any non-commercial
// purpose.
//
// =================================================================

#include <iostream>
#include <iomanip>
#include <chrono>
#include "utils.h"

using namespace std;
using namespace std::chrono;

#define MAXIMUM 5000000 //5e6

// implement your code

int main(int argc, char* argv[]) {
	double result;
	// These variables are used to keep track of the execution time.
	high_resolution_clock::time_point start, end;
	double timeElapsed;

	cout << "Starting...\n";
	timeElapsed = 0;
	for (int j = 2; j <= MAXIMUM; j++) {
        int primo=0;
		start = high_resolution_clock::now();

		// call the implemented function
		for(int div=1; div<=j; div++){
			if(j%div==0){
				nprimo++;
			}
            if(nprimo>=3)
                break;
		}
        if(nprimo==2){
            result = result + j;
        }
        nprimo = 0;

		end = high_resolution_clock::now();
		timeElapsed += 
			duration<double, std::milli>(end - start).count();
	}
	cout << "result = " << result << "\n";
	cout << "avg time = " << fixed << setprecision(3) 
		 << (timeElapsed / N) <<  " ms\n";

	return 0;
}
