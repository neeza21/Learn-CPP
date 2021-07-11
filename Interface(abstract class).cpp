#include <iostream>  
using namespace std;  
 class figure   
{    
    public:   
    virtual void art()=0;    
};    
 class map : figure   
{    
    public:  
     void art()    
    {    
        cout <<"Nepal Map" <<endl;    
    }    
};    
class house : figure    
{    
    public:  
     void art()    
    {    
        cout <<"Ottoke house" <<endl;    
    }    
};    
int main( ) {  
    map m;  
    house h;  
    m.art();    
    h.art();   
   return 0;  
}  
