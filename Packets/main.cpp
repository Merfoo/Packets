#include <iostream>

#include "Address.h"
#include "Socket.h"

int main()
{
	Socket::initializeSockets();
	Address dest(127, 0, 0, 1, 3000);
	const char data[] = "Hello World!!!";

	Socket socket;
	socket.open(dest.getPort());
	socket.send(dest, data, sizeof(data));

	while (true)
	{
		Address from;
		const int bufferLength = 256;
		unsigned char buffer[bufferLength];
		int bytes_read = socket.recieve(from, buffer, bufferLength);

		for (int i = 0; i < bufferLength; i++)
			std::cout << buffer[i] << " : ";

		std::cout << std::endl;
		break;
 	}

	socket.close();

	std::cout << "Hello World!\n";
	system("pause");
	Socket::shutdownSockets();

	return 0;
}