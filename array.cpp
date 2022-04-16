#include "array.h"
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

double maximum_value(double *vals, size_t n)
{
	double reference = 0;
	double result;

	for (size_t i = 0; i < n; i++)
	{
		if (vals[i] > reference)
		{
			reference = vals[i];
			result = reference;
		}
	}
	return result;
}

double maximum_three_values(double *vals, size_t n, double *value1, double *value2, double *value3)
{
	double reference1=-9000, reference2=-9000;
	if (n < 3)
	{
		cout << "Invalid Array with less than 3 vlaues." << endl;
	}
	*value1 = maximum_value(vals, n);

	for (size_t i=0; i<n; i++){
		if (vals[i]<*value1 && vals[i]>reference1){
			reference1 = vals[i];
			*value2 = reference1;
		}
	}

	for (size_t i=0; i<n; i++){
		if (vals[i]<*value2 && vals[i]>reference2){
			reference2 = vals[i];
			*value3 = reference2;
		}
	}
	return 0;
}


double biggest_k_values(double* vals, size_t n, size_t k){


	return 0;
}

double maximum(double* vals, size_t n, size_t k){

	sort(vals, vals+n);
	double result;
	double reference = 0;
		for (size_t i=0; i<k; i++){
			if (vals[i]> reference){
				reference = vals[i];
				result = reference;
				cout<<result<<endl;
			}
		}
	
	return result;
}
