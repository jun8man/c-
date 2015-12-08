/**
 * Test for Factory Method.
 * author:  Junya Yamashita
 * mail:    junya0220yamashita@gmail.com
 * date:    2015/12/08
 */

#include <stdio.h>
#include <string>

class Panel
{
public:
    Panel(){}
    virtual ~Panel(){}

    virtual void display(){}
};

class DummyPanel : public Panel
{
public:
    DummyPanel() : m_panel("DummyPanel"){}
    virtual ~DummyPanel(){}

    void display()
    {
        printf("Panel Type is %s\n", m_panel.c_str());
    }
private:
    std::string m_panel;
};

class TwoInchPanel : public Panel
{
public:
    TwoInchPanel() : m_panel("TwoInchPanel"){}
    virtual ~TwoInchPanel(){}

    void display()
    {
        printf("Panel Type is %s\n", m_panel.c_str());
    }
private:
    std::string m_panel;
};

class ThreeInchPanel : public Panel
{
public:
    ThreeInchPanel() : m_panel("ThreeInchPanel"){}
    virtual ~ThreeInchPanel(){}

    void display()
    {
        printf("Panel Type is %s¥n", m_panel.c_str());
    }
private:
    std::string m_panel;
};

class DscFactory
{
public:
    DscFactory(){}
    virtual ~DscFactory(){}

    virtual Panel* CreatePanel(const bool is_dummy) = 0;
    void Operation(const bool is_dummy)
    {
        DscPanel = CreatePanel(is_dummy);
        DscPanel->display();
    }
private:
    Panel* DscPanel;
};

class VzxFactory : public DscFactory
{
public:
    VzxFactory(){}
    virtual ~VzxFactory(){}

    Panel* CreatePanel(const bool is_dummy)
    {
        if (is_dummy)
        {
            return new DummyPanel;
        }
        else
        {
            return new TwoInchPanel;
        }
    }
};

class CaFactory : public DscFactory
{
public:
    CaFactory(){}
    ~CaFactory(){}

    Panel* CreatePanel(const bool is_dummy)
    {
        if (is_dummy)
        {
            return new DummyPanel;
        }
        else
        {
            return new TwoInchPanel;
        }
    }
};

int main()
{
    VzxFactory vzx;
    CaFactory ca;

    bool is_dummy = true;
    vzx.Operation(is_dummy);
    ca.Operation(!is_dummy);

    return 0;
}