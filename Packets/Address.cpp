#include "Address.h"

Address::Address()
{
}

Address::Address(const unsigned char a, const unsigned char b, const unsigned char c, const unsigned char d, const unsigned short port) :
	m_address((a << 24) | (b << 16) | (c << 8) | d),
	m_port(port)
{
}

Address::Address(const unsigned int address, const unsigned short port) :
	m_address(address),
	m_port(port)
{
}

Address::~Address()
{
}

const unsigned int Address::getAddress() const
{
	return m_address;
}

const unsigned short Address::getPort() const
{
	return m_port;
}