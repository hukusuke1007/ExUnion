// ExUnion.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include "define_common.h"
#include "request.h"
#include "string.h"
#include "logout.h"

using namespace std;
using namespace hukusuke;

int main(void)
{
	LOG_OUTPUT("Start.");

	EX_STRUCT_INT data_int;
	data_int.data = 0;

	EX_STRUCT_CHAR data_char;
	memset(data_char.data, '\0', sizeof(data_char.data));
	strncpy(data_char.data, "CHAR", sizeof(data_char.data)-1);
	
	EX_STRUCT_ENUM data_enum;
	data_enum.data = ENUM_DATA_1;

	EX_STRUCT_INFO data_info;
	data_info.info.data = ENUM_DATA_2;

	// Request.
	request request_instance;
	request_instance.request_if(data_int );
	request_instance.request_if(data_char);
	request_instance.request_if(data_enum);
	request_instance.request_if(data_info);

	LOG_OUTPUT("Terminate.");
    return 0;
}

