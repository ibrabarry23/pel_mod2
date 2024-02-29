#include "root.hpp"

double radice(int base, int indice, double min, double max){
        
        double punto_medio;

        while (max-min > 0.0000000001)
        {
            punto_medio = (min+max)/2;

            // std::cout<<punto_medio<<std::endl; 
           

            if(potenza(punto_medio,indice)> base){
                max = punto_medio;
            } else{
                min=punto_medio;
            }
            //  std::cout<<max<<std::endl; 
            // std::cout<<min<<std::endl; 
        }
           
        return punto_medio;
}