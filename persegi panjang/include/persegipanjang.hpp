#ifndef _PERSEGI_PANJANG_HPP_
#define _PERSEGI_PANJANG_HPP_

class PersegiPanjang
{
private:
    float xmin, xmax, ymin, ymax;

public:
    PersegiPanjang(int xpusat, int ypusat, int panjang, int lebar);
    PersegiPanjang(float x_min, float x_max, float y_min, float y_max)
    {
        xmin = x_min;
        xmax = x_max;
        ymin = y_min;
        ymax = y_max;
    }

    void SetXmin(float value) { xmin = value; }
    void SetXmax(float value) { xmax = value; }
    void SetYmin(float value) { ymin = value; }
    void SetYmax(float value) { ymax = value; }

    float GetXmin() { return xmin; }
    float GetXmax() { return xmax; }
    float GetYmin() { return ymin; }
    float GetYmax() { return ymax; }

    int Getpanjang() { return xmax - xmin; }
    int Getlebar() { return ymax - ymin; }
    int Getpusatx() { return xmin + (Getpanjang() / 2.f); }
    int Getpusaty() { return ymin + (Getlebar() / 2.f); }

    bool operator==(PersegiPanjang &pp);
    PersegiPanjang operator+(PersegiPanjang &pp);
    PersegiPanjang operator-(PersegiPanjang &pp);
    PersegiPanjang operator++();
    PersegiPanjang operator++(int);
    PersegiPanjang operator--();
    PersegiPanjang operator--(int);
    float operator[](int index);
};

#endif