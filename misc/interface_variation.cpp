/**
 * Interfaceの表現のバリエーション
 */

class yama
{
public:
  int
  get() const
  {
    int i = 10;   ///OK
    m_val = 10;   ///NG
    return m_val;
  }
  int
  get2()
  {
    m_val = 10;   ///NG
    return m_val;
  }

private:
   m_val;
};

void
api_xxx(const Delegate_base*const obj)
{
  if (obj) obj->call();
}

void
api_xxx(Delegate_base& obj)
{
    obj.call();
}

bool
set_xxx(Delegate_base& obj)
{

}

Delegate_base
convert_xxx(Delegate_base& obj)
{
    return
}


get_xx(x);
get_yy(y);
if (x || y)
{

}

Delegate_base*
create_obj(const int type)
{
  Delegate_base* ret = 0;
  switch(type)
  {
    case "A":
    {
        ret =  new XX;
    }
    break;
    case "B":
    {

    }
    break;
    default:
    {

    }
    break;
  }
  return ret;
}