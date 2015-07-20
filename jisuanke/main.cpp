#include <iostream>
#include <map>
#include <time.h>

using namespace std;

#define PI 3.1415926

double getArea(double r)
{
    return PI * r * r;
}

int main()
{
    clock_t time1,time2;
    int t, k;
    map<int, double> data;
    int m,n;
    double p;
    double s, e;
    cin>>t;
    double result = 0.0;
    for(int i = 0; i < 360; i++)
    {
        data[i] = 0;
    }
    for(int i = 0; i < t; i++)
    {
        cin>>k;
        for(int j = 0; j < k; j++)
        {
            cin>>p>>m>>n;
            time1 = clock();
            for(int start = m; start < n; start++)
            {
                if(p > data[(start+360)%360])
                    data[(start+360)%360] = p;
            }

        }
        map<double, int> total;
        for(int start = 0; start < 360; start++)
        {
            if(data[start] != 0)
            {
                if(total.find(data[start]) != total.end())
                    total[data[start]]++;
                else
                    total[data[start]] = 1;
            }
        }
        for(map<double, int>::iterator it = total.begin(); it != total.end(); it++)
        {
            result += it->second * getArea(it->first);
        }

        cout<<result/360.0<<endl;
        time2 = clock();
        cout<<(double)(time2-time1) * 1000/CLOCKS_PER_SEC<<endl;
    }

    return 0;
}
