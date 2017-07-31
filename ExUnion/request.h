#pragma once
#include "define_common.h"
#include <vector>
#include <string>

using namespace std;
namespace hukusuke {
	class request
	{
	public:
		request() {};
		~request() {};

		void request_if(const int    data    );
		void request_if(	  char*  data    );
		void request_if(const string data    );
		void output();

	private:

		enum EX_STRUCT_TYPE {
			EX_STRUCT_TYPE_INT,
			EX_STRUCT_TYPE_CHAR_P,
			EX_STRUCT_TYPE_STRING,
		};

		struct EX_STRUCT_INT {
			int				data;
		};

		struct EX_STRUCT_CHAR_P {
			char*			data;
		};

		struct EX_STRUCT_STRING {
			string			data;
		};

		/*	
			共用体を持った構造体を定義. 
			共用体を使用すればEX_STRUCT_XXX毎に構造体を定義する必要がなくなる。
		*/
		struct EX_STRUCT {
			EX_STRUCT_TYPE	type;
			union {
				EX_STRUCT_INT     data_int;
				EX_STRUCT_CHAR_P  data_char_p;
				EX_STRUCT_STRING* data_string;
			} union_pram;
		};

		vector<EX_STRUCT>	vec_data_;		// 共有体を持つ構造体をvectorで定義.
	};
}

