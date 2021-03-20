#ifndef CONVERTER_H_INCLUDED
#define CONVERTER_H_INCLUDED

class Temperature
{
private:
    float value_t;

public:
    Temperature(float value=1):value_t{value}
    {}

    float FtoC(void);
    float CtoF(void);
    float CtoK(void);
    float KtoC(void);
    float KtoF(void);
    float FtoK(void);
};

class Currency
{
private:
    float value_c;

public:
    Currency(float value=1):value_c{value}
    {}

    float USDtoEUR(void);
    float EURtoUSD(void);
    float USDtoPLN(void);
    float PLNtoUSD(void);
    float EURtoPLN(void);
    float PLNtoEUR(void);

};

class Volume
{
private:
    float value_v;

public:
    Volume(float value=1):value_v{value}
    {}

    float Liter_to_galon(void);
    float galon_to_Liter(void);
    float cup_to_Liter(void);
    float Liter_to_cup(void);
    float galon_to_cup(void);
    float cup_to_galon(void);
};

class Mass
{
private:
    float value_m;

public:
    Mass(float value=1):value_m{value}
    {}

    float kg_to_g(void);
    float g_to_kg(void);
    float kg_to_lbs(void);
    float lbs_to_kg(void);
    float lbs_to_g(void);
    float g_to_lbs(void);
};

class Length
{
private:
    float value_l;

public:
    Length(float value=1):value_l{value}
    {}

    float Km_to_Mile(void);
    float Mile_to_Km(void);
    float Km_to_m(void);
    float m_to_Km(void);
    float m_to_Mile(void);
    float Mile_to_m(void);
};

#endif // CONVERTER_H_INCLUDED
