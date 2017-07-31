#pragma once
#include "define_common.h"

using namespace std;
namespace hukusuke {
	class request
	{
	public:
		request() {};
		~request() {};

		// Overload IF.
		void request_if(const EX_STRUCT_INT  data    );
		void request_if(const EX_STRUCT_CHAR data    );
		void request_if(const EX_STRUCT_ENUM data    );
		void request_if(const EX_STRUCT_INFO data    );
		void request_if(const EX_STRUCT_PTR  data_ptr);

	private:
		// Union info.
		union EX_UNION {
			EX_STRUCT_INT  data_int;
			EX_STRUCT_CHAR data_char;
			EX_STRUCT_ENUM data_enum;
			EX_STRUCT_INFO data_info;
			EX_STRUCT_PTR  data_ptr;
		};

		EX_UNION data_union_;				// Union member.
	};
}

