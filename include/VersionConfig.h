#ifndef VERSION_CONFIG_H
#define VERSION_CONFIG__H

class VersionConfig
{
    public:
        ~VersionConfig() {if (m_ptrInstance != NULL) delete m_ptrInstance;}

        ///> product type: protable or trolley. portable run in powerpc platform, while trolley run in x86 platform
        enum Product{PORTABLE, TROLLEY};
        ///> realse version, use for different customer
        enum Realse{CT_EN, CT_CHI, ABOARD_EN, ABOARD_CHI, OEM_EN, OEM_CHI};

        ///> static member
        static class VersionConfig* Instance();

        inline void Init(enum Product p = TROLLEY, enum Realse r = CT_CHI);

        ///> get config info in high level
        enum Product GetProduct() const {return m_p;}
        enum Realse GetRealse() const {return m_r;}

        ///> get config info in low level
        inline int GetProbeSum() const;

    private:
        VersionConfig()
        {
            m_p = TROLLEY;
            m_r = CT_CHI;
        }

        enum Product m_p;
        enum Realse m_r;

        static class VersionConfig* m_ptrInstance;
};

///> defination of member of class

class VersionConfig* VersionConfig::m_ptrInstance = NULL;

/*
 * @brief return the only instance of class VersionConfig, if the instance is not existed, create it.
 *
 * @retval the pointer pointed to the only instance of this class
 */
class VersionConfig* VersionConfig::Instance()
{
    if (m_ptrInstance == NULL)
    {
        m_ptrInstance = new (class VersionConfig);
    }

    return (m_ptrInstance);
}

/*
 * @brief init the type of product and type of software realse
 *
 * @para p type of product
 * @para r type of realse
 */
void VersionConfig::Init(enum Product p, enum Realse r)
{
    m_p = p;
    m_r = r;
}

int VersionConfig::GetProbeSum() const
{
    return 4;
}

#endif ///< VERSION_CONFIG_H