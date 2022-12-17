#include<iostream>
using namespace std;

int main()
{
    float result;
    int temp;
    int x;
    cout<<"\n\nEnter Your Youtube's Subscribsers = ";
    cin>>x;

    if(x>=0 && x<1000)  
    {
        cout<<x;
    }
        else if(x>=1000 && x<10000) 
        {
            result = float(x/10)/100;
            cout<<result<<"k";  
        }
            else if(x>=10000 && x<100000) 
            {
                result = float(x/100)/10;
                cout<<result<<"k";  
            }
                else if(x>=100000 && x<1000000) 
                {
                    result = float(x/1000);
                    cout<<result<<"k";  
                }
                    else if(x>=1000000 && x<10000000) 
                    {
                        result = float(x/10000)/100;
                        cout<<result<<"M";  
                    }
                        else if(x>=10000000 && x<100000000) 
                        {
                            result = float(x/100000)/10;
                            cout<<result<<"M";  
                        }
                            else
                            {
                                result = float(x/1000000);
                                cout<<result<<"M";  
                            }
    return 0;
}
