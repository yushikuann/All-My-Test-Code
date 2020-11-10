void Endianness()
{
	int a = 0x12345678;
	if( *((char*)&a) == 0x12)
		cout << "Big Endian" << endl;
	else
		cout << "Little Endian" << endl;
}
