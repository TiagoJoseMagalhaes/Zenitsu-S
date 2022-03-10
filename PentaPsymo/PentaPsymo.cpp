// PentaPsymo.cpp : Defines the entry point for the application.
//

#include "PentaPsymo.h"

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef unsigned long long uint64;

struct RAX
{
	union
	{
		uint64 reg;
		struct EAX
		{
			union {
				uint32 reg;
				struct AX
				{
					union
					{
						uint16 reg;
						struct base
						{
							uint8 al;
							uint8 ah;
						} base;
					} AX;
					uint16 pad;
				} AX;
			} EAX;
			uint32 pad;
		} EAX;
	} RAX;
};

struct RBX
{
	union
	{
		uint64 reg;
		struct EBX
		{
			union {
				uint32 reg;
				struct BX
				{
					union
					{
						uint16 reg;
						struct base
						{
							uint8 bl;
							uint8 bh;
						} base;
					} BX;
					uint16 pad;
				} BX;
			} EBX;
			uint32 pad;
		} EBX;
	} RBX;
};

struct RAX
{
	union
	{
		uint64 reg;
		struct EAX
		{
			union {
				uint32 reg;
				struct AX
				{
					union
					{
						uint16 reg;
						struct base
						{
							uint8 al;
							uint8 ah;
						} base;
					} AX;
					uint16 pad;
				} AX;
			} EAX;
			uint32 pad;
		} EAX;
	} RAX;
};

struct RAX
{
	union
	{
		uint64 reg;
		struct EAX
		{
			union {
				uint32 reg;
				struct AX
				{
					union
					{
						uint16 reg;
						struct base
						{
							uint8 al;
							uint8 ah;
						} base;
					} AX;
					uint16 pad;
				} AX;
			} EAX;
			uint32 pad;
		} EAX;
	} RAX;
};

int main()
{
	RAX reg;
	return 0;
}
