class Solution {
public:
    int mySqrt(int x) {
    if (x < 0) {
        return -1; 
    }
    if (x == 0) {
        return 0;
    }
    double temp = x / 2.0; 
    while (temp * temp - x > 0.001 || temp * temp - x < -0.001) 
    {
        temp = (temp + x / temp) / 2.0;
    }

    return temp;
}

       

};