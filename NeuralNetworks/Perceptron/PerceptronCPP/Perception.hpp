#ifndef PERCEPTION_
#define PERCEPTION_
#include <vector>
class net
{
public:
    net(float time,int period);
    float netinput(vector<float> x);
    int prediction (vector<float> x);
    voit fit(vector<vector<float>> x , vector<float> y);
private:
    
    float eta;
    int periods;
    vector <float> m_w;
    
    
    
};




#endif
