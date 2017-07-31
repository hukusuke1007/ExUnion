// ExUnion.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"
#include "define_common.h"
#include "request.h"
#include "logout.h"
#include  <string>

using namespace std;
using namespace hukusuke;

int main(void)
{
	LOG_OUTPUT("Start.");

	// Define.
	EX_STRUCT_INT data_int;
	data_int.data = 0;

	EX_STRUCT_CHAR data_char;
	memset(data_char.data, 0, sizeof(data_char.data));
	strncpy(data_char.data, "CHAR", sizeof(data_char.data)-1);
	
	EX_STRUCT_ENUM data_enum;
	data_enum.data = ENUM_DATA_1;

	EX_STRUCT_INFO data_info;
	data_info.info.data = ENUM_DATA_2;

	EX_STRUCT_PTR  data_ptr;
	string str = "STRING";
	data_ptr.data = new char[str.size()+1];		// �̈�m��(NULL�I�[�l��).
	memset(data_ptr.data, 0, str.size()+1);		// ������.
	strcpy(data_ptr.data, str.c_str());			// ������ݒ�.

	// Request.
	request request_instance;
	request_instance.request_if(data_int );
	request_instance.request_if(data_char);
	request_instance.request_if(data_enum);
	request_instance.request_if(data_info);
	request_instance.request_if(data_ptr );

	if (NULL != data_ptr.data) { delete data_ptr.data; data_ptr.data = NULL; }

	LOG_OUTPUT("Terminate.");
    return 0;
}

