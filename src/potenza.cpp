#include "root.hpp"

double potenza(double a, double b)
{
    if(b==0){
        return 1;
	}
        else{
            return a *potenza(a,b-1);
		}
    
}