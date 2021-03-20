#include "converter.h"
float Temperature::FtoC(void)
{
    return 5*(value_t-32)/9;
}
float Temperature::CtoF(void)
{
    return (value_t*1.8)+32;
}
float Temperature::CtoK(void)
{
    return value_t+273;
}
float Temperature::KtoC(void)
{
    return value_t-273;
}
float Temperature::KtoF(void)
{
    return (9*(value_t-273)/5)+32;
}
float Temperature::FtoK(void)
{
    return (5*(value_t-32)/9)+273;
}

float Currency::USDtoEUR(void)
{
    return value_c*0.82;
}
float Currency::EURtoUSD(void)
{
    return value_c*1.22;
}
float Currency::USDtoPLN(void)
{
    return value_c*3.72;
}
float Currency::PLNtoUSD(void)
{
    return value_c*0.27;
}
float Currency::EURtoPLN(void)
{
    return value_c*4.52;
}
float Currency::PLNtoEUR(void)
{
    return value_c*0.22;
}

float Volume::Liter_to_galon(void)
{
    return value_v*0.22;
}
float Volume::galon_to_Liter(void)
{
    return value_v*4.55;
}
float Volume::cup_to_Liter(void)
{
    return value_v*0.28;
}
float Volume::Liter_to_cup(void)
{
    return value_v*4.23;
}
float Volume::galon_to_cup(void)
{
    return value_v*19.21;
}
float Volume::cup_to_galon(void)
{
    return value_v*0.066;
}


float Mass::kg_to_g(void)
{
    return value_m*1000;
}
float Mass::g_to_kg(void)
{
    return value_m*0.001;
}
float Mass::kg_to_lbs(void)
{
    return value_m*2.2;
}
float Mass::lbs_to_kg(void)
{
    return value_m*0.45;
}
float Mass::lbs_to_g(void)
{
    return value_m*453.6;
}
float Mass::g_to_lbs(void)
{
    return value_m*0.002;
}

float Length::Km_to_Mile(void)
{
    return value_l*0.62;
}
float Length::Mile_to_Km(void)
{
    return value_l*1.6;
}
float Length::Km_to_m(void)
{
    return value_l*1000;
}
float Length::m_to_Km(void)
{
    return value_l*0.001;
}
float Length::m_to_Mile(void)
{
    return value_l*0.0006;
}
float Length::Mile_to_m(void)
{
    return value_l*1609.34;
}
