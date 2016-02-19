#include "CMsg.h"

#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>
#include <sstream>

CMsg::CMsg()
{
    //ctor
}

CMsg::~CMsg()
{
    //dtor
}

CMsg::CMsg(const CMsg& other)
{
    //copy ctor
}

CMsg& CMsg::operator=(const CMsg& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}




void CMsg::set_msg_type(int type_)
{
    m_type = type_;
}

int CMsg::get_msg_type()
{
    return m_type;
}

int CMsg::get_data_len()
{
    return m_send_data.size();
}

void CMsg::set_serialize_string (std::string data)
{
    m_send_data = data;
}

std::string& CMsg::get_send_data()
{
    return m_send_data;
}
