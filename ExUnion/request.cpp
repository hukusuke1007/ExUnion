#include "request.h"
#include "string.h"
#include "logout.h"

using namespace std;
namespace hukusuke {

	void request::request_if(const int data) 
	{
		// 共用体へセット.
		EX_STRUCT info;
		info.type = EX_STRUCT_TYPE_INT;
		info.union_pram.data_int.data = data;
		LOG_OUTPUT("EX_STRUCT_TYPE_INT:    %d", info.union_pram.data_int.data);
		vec_data_.push_back(info);
		return;
	}

	void request::request_if(char* data) 
	{
		if (NULL != data) 
		{
			// 共用体へセット.
			EX_STRUCT info;
			info.type = EX_STRUCT_TYPE_CHAR_P;
			info.union_pram.data_char_p.data = data;
			LOG_OUTPUT("EX_STRUCT_TYPE_CHAR_P: %s", info.union_pram.data_char_p.data);
			vec_data_.push_back(info);
		}
		return;
	}

	void request::request_if(const string data) 
	{
		// 共用体へセット.
		EX_STRUCT info;
		info.type = EX_STRUCT_TYPE_STRING;
		info.union_pram.data_string = new EX_STRUCT_STRING;
		if (NULL != info.union_pram.data_string) {
			info.union_pram.data_string->data = data;
			LOG_OUTPUT("EX_STRUCT_TYPE_STRING: %s", info.union_pram.data_string->data.c_str());
			vec_data_.push_back(info);
		}
		return;
	}

	void request::output() 
	{
		LOG_OUTPUT("ALL_OUTPUT_UNION");

		// セットされた共用体のメンバを全て出力.
		for ( vector<EX_STRUCT>::iterator iter = vec_data_.begin(); iter != vec_data_.end(); ++iter)
		{
			switch (iter->type)
			{
				case EX_STRUCT_TYPE_INT:
					LOG_OUTPUT(" + EX_STRUCT_TYPE_INT:     %d", iter->union_pram.data_int.data);
					break;
				case EX_STRUCT_TYPE_CHAR_P:
					LOG_OUTPUT(" + EX_STRUCT_TYPE_CHAR_P:  %s", iter->union_pram.data_char_p.data);
					break;
				case EX_STRUCT_TYPE_STRING:
					LOG_OUTPUT(" + EX_STRUCT_TYPE_STRING:  %s", iter->union_pram.data_string->data.c_str());
					break;
				default:
					break;
			}
			
		}
		return;
	}
}