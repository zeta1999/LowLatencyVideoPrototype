#ifndef DATA_SOURCE_STDIO_H
#define DATA_SOURCE_STDIO_H

#include <stddef.h>
#include <stdint.h>
#include "data_source.h"

class data_source_stdio: public data_source
	{
	public:
	void write( const uint8_t * data, size_t bytes );
	};

#endif
