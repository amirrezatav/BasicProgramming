#include <iostream>
using namespace std;


	int main()
	{

		long double a1, b1, c1,  a2, b2, c2, pow = 1;
		int k = 0 ;
		cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> k;

		for (int i = 0; i < k; i++)
			pow *= 10;

		if ((b2 * a1) - (b1 * a2) == 0)
		{
            if(a1 ==0 || b1 ==0 || a2==0 || b2==0)
            {
			if(!a1)
            {
                if(!b1)
                {
                    if(!c1)
                    {

                        if(!a2)
                        {
                            if(!b2)
                            {
                                if(!c2)
                                {
                                    cout<<"True for all values";
                                }
                                else
                                {
                                     cout<<"Syntax Error";
                                }
                                
                            }
                            else
                            {
                                cout<<"True for all x\n" << "y = " << c2/b2;
                            }
                            
                        }
                        else
                        {
                            if(!b2)
                            {
                                cout<< "x = " << c2/a2 << "\nTrue for all y";                 
                            }
                            else
                            {
                                cout<<"True for Many values";
                            }
                        }                         
                    }
                    else
                    {
                        cout<<"Syntax Error";
                    }
                    
                }
                else
                {
                    if(!c1)
                    {
                        if(!a2)
                        {
                            if(!b2)
                            {
                                if(!c2)
                                {
                                    cout<<"True for all x\ny = " << 0;
                                }
                                else
                                {
                                    cout<<"Syntax Error";
                                }  
                            }
                            else
                            {
                                if(!c2)
                                {
                                    cout<<"True for all x\ny = " << 0;
                                }
                                else
                                {
                                    cout<<"Syntax Error";
                                }
                            }
                            
                        }
                    }
                    else
                    {                        
                        if(!a2)
                        {
                            if(!b2)
                            {
                                if(!c2)
                                {
                                    cout<<"True for all x\ny = " << c1/b1;
                                }
                                else
                                {
                                    cout<<"Syntax Error";
                                }  
                                
                            }
                            else
                            {
                                if(!c2)
                                {
                                     cout<<"Syntax Error";
                                }
                                else
                                {
                                    if(b1/b2 == c1/c2)
                                         cout<<"True for all x\ny = " << c1/b1;
                                    else
                                        cout<<"Syntax Error";

                                }
                            }                           
                        }
                    }
                }
                
            }
            else
            {
               if(!b1)
                {
                    if(!c1)
                    {

                        if(!a2)
                        {
                            if(!b2)
                            {
                                if(!c2)
                                {
                                    cout<<"x = 0\nTrue for all y";
                                }
                                else
                                {
                                    cout<<"Syntax Error";
                                }                                
                            }      
                        }
                        else
                        {
                            if(!b2)
                            {
                                if(!c2)
                                {
                                    cout<<"x = 0\nTrue for all y";
                                }
                                else
                                {
                                    cout<<"Syntax Error";
                                }
                                
                            }
                        }      
                    
                    }
                    else
                    {                        
                        if(!a2)
                        {
                            if(!b2)
                            {
                                if(!c2)
                                {
                                      cout<<"x = "<< c1/a1 <<"\nTrue for all y";
                                }
                                else
                                {
                                    cout<<"Syntax Error";
                                }
                                
                            }
                        }
                        else
                        {
                            if(!b2)
                            {
                                if(!c2)
                                {
                                      cout<<"Syntax Error";
                                }
                                else
                                {
                                    if(a1/a2 == c1/c2)
                                        cout<<"x = "<< c1/a1 <<"\nTrue for all y";
                                    else
                                    cout<<"Syntax Error";
                                }
                                
                            }
                        }      
                    
                    }
                }
                else
                {
                    if(!c1)
                    {   
                        if(!a2)
                        {
                            if(!b2)
                            {
                                if(!c2)
                                {
                                    cout<<"True for Many values";
                                }
                                else
                                {
                                    cout<<"Syntax Error";
                                }
                                
                            }
                        }                        
                    }
                    else
                    {                     
                        if(!a2)
                        {
                            if(!b2)
                            {
                                if(!c2)
                                {
                                    cout<<"True for Many values";
                                }
                                else
                                {
                                    cout<<"Syntax Error";
                                }
                                
                            }
                        }                         
                    }
                } 
            }
		    }
            else 
            {
                if(!c1)
                {
                    if(!c2)
                    {
                        cout<<"True for Many values";
                    }
                    else
                    {
                        cout<<"False for all values";
                    }
                    
                }
                else
                {
                    if(!c2)
                    {
                        cout<<"False for all values";
                    }
                    else
                    {
                        if(a1/a2 == c1/c2)
                            cout<<"True for Many values";
                        else 
                        cout<<"False for all values";
                    }
                }
                
            }       
        }
        else
        {
            double x = ((b2 * c1) - (b1 * c2)) / ((b2 * a1) - (b1 * a2));
		    double y = ( (a1 * c2)- (a2 * c1)) / ((b2 * a1) - (b1 * a2));
					
		    cout << "x = " << (double)(int)(x * pow) / pow << endl;
		    cout << "y = " << (double)(int)(y * pow) / pow;
        }
        
		

		return 0;
	}
