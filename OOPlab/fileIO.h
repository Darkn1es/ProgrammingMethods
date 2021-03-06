#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

enum
{
    STRICT_TYPE = 0,
    DYNAMIC_TYPE
};

enum
{
    OOP = 0,
    PROCEDURE,
    FUNCTIONAL
};

enum
{
    SINGLE = 0,
    MULTIPLE,
    INTERFACE
};

class progLanguage
{
    int _linksCount;

   public:
    static progLanguage* In( std::ifstream& ifst );

    virtual void InData( std::ifstream& ifst );
    virtual void Out( std::ofstream& ofst );
    virtual int languageAge() = 0;
    virtual void OutProc( std::ofstream& ofst );
    virtual void OutOOP( std::ofstream& ofst );

    virtual void MultiMethod( std::ofstream& ofst, progLanguage* other ) = 0;
    virtual void MMoop( std::ofstream& ofst ) = 0;
    virtual void MMprocedure( std::ofstream& ofst ) = 0;
    virtual void MMfunctional( std::ofstream& ofst ) = 0;

    void setLinksCount( int s );
    int getLinksCount();

    bool Compare( progLanguage& compareTo );

   protected:
    progLanguage()
    {
    }
};

class procLang : public progLanguage
{
    bool isAbstract;
    int year;

   public:
    bool getAbstract();
    void setAbstract( bool s );

    int getYear();
    void setYear( int s );

    void InData( std::ifstream& ifst );
    void Out( std::ofstream& ofst );
    int languageAge();
    void OutProc( std::ofstream& ofst );

    virtual void MultiMethod( std::ofstream& ofst, progLanguage* other );
    virtual void MMoop( std::ofstream& ofst );
    virtual void MMprocedure( std::ofstream& ofst );
    virtual void MMfunctional( std::ofstream& ofst );
    procLang()
    {
    }
};

class oopLang : public progLanguage
{
    int year;
    int inherence;

   public:
    int getInherence();
    void setInherence( int s );

    int getYear();
    void setYear( int s );

    void InData( std::ifstream& ifst );
    void Out( std::ofstream& ofst );
    int languageAge();
    void OutOOP( std::ofstream& ofst );

    virtual void MultiMethod( std::ofstream& ofst, progLanguage* other );
    virtual void MMoop( std::ofstream& ofst );
    virtual void MMprocedure( std::ofstream& ofst );
    virtual void MMfunctional( std::ofstream& ofst );
    oopLang()
    {
    }
};

class funcLang : public progLanguage
{
    int year;
    int typization;
    bool lazyEval;

   public:
    int getTypization();
    void setTypization( int s );

    int getYear();
    void setYear( int s );

    bool getLazyEval();
    void setLazyEval( bool s );

    void InData( std::ifstream& ifst );
    void Out( std::ofstream& ofst );
    int languageAge();

    virtual void MultiMethod( std::ofstream& ofst, progLanguage* other );
    virtual void MMoop( std::ofstream& ofst );
    virtual void MMprocedure( std::ofstream& ofst );
    virtual void MMfunctional( std::ofstream& ofst );
    funcLang()
    {
    }
};

class container
{
    std::vector<progLanguage*> cont;
    int len;

   public:
    void In( std::ifstream& ifst );
    void Out( std::ofstream& ofst );
    void OutWithAge( std::ofstream& ofst );
    void OutProc( std::ofstream& ofst );
    void OutOOP( std::ofstream& ofst );
    void Clear();
    void Sort();

    void setContainerItemAt( int i, progLanguage* item );
    progLanguage* getContainerItemAt( int i );
    void pushBackContainer( progLanguage* item );

    void setLength( int s );
    int getLength();

    void MultiMethod( std::ofstream& ofst );

    container();
    ~container()
    {
        Clear();
    }
};