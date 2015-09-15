#pragma once

class Address
{
public:
	Address();
	Address(const unsigned char a, const unsigned char b, const unsigned char c, const unsigned char d, const unsigned short port);
	Address(const unsigned int address, const unsigned short port);
	~Address();

	const unsigned int getAddress() const;
	const unsigned short getPort() const;
private:
	unsigned int m_address;
	unsigned short m_port;
};