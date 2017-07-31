#pragma once

#define MAX_SIZE (10)

// Enum info.
enum ENUM_DATA {
	ENUM_DATA_0,
	ENUM_DATA_1,
	ENUM_DATA_2,
};

// Struct info.
struct EX_STRUCT_INT{
	int				data;
};

struct EX_STRUCT_CHAR {
	char			data[MAX_SIZE];
};

struct EX_STRUCT_ENUM {
	ENUM_DATA		data;
};

struct EX_STRUCT_INFO {
	EX_STRUCT_ENUM	info;
};

struct EX_STRUCT_PTR {
	char*			data;
};

