#include<iostream>
#include<string>
using namespace std;
//类模板没有自动类型推导
//类模板在模板参数列表中可以有默认参数
template<class NameType,class Agetype=int>
class Person
{
public:
       Person(NameType name,Agetype age)
        {
            this->m_age=age;
            this->m_name=name;
        }
        void showperson()
        {
            cout<<"姓名： "<<this->m_name<<endl;
            cout<<"年龄： "<<this->m_age<<endl;
        }
private:
        NameType m_name;
        Agetype m_age;
};
int main()
{
    Person<string> p1("孙悟空",99999999);
    p1.showperson();
    return 0;
}