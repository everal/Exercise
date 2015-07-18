#include <iostream>
#include <vector>

class LRUCache{
public:
    LRUCache(int capacity) {
        map<int, int> m_value;
        map<int, int> m_index;
        vector<int> c;
        int size = capacity;
    }

    int get(int key) {
        if(m_value.find(key) != m.end())
            return m_value[key];
        else
            return -1;
    }

    void set(int key, int value) {
        if(m_index.find(key) != m.end())
        {
            c.erase(m_index[key]);
            c.push_back(key);
            m_index[key] = c.size() - 1;
            m_value[key] = value;
        }
        else
        {
            if(c.size() < size)
            {
                c.push_back(key);
                m_index[key] = c.size() - 1;
                m_value[key] = value;
            }
            else
            {
                int k = c[0];
                c.erase(0);
                c.push_back(key);
                m_index.erase(k);
                m_value.erase(k);
                m_index[key] = c.size() - 1;
                m_value[key] = value;

            }
        }

    }

    void move(int k)
    {
        for(int i = k; i < c.size(); i++)
            c[i+1] = c[i];
    }
};
