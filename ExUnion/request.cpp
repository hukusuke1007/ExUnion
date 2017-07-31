#include "request.h"
#include "string.h"
#include "logout.h"

using namespace std;
namespace hukusuke {
	/* request_if method. */
	void request::request_if(const EX_STRUCT_INT  data) {
		data_union_.data_int = data;
		LOG_OUTPUT("EX_STRUCT_INT:  %d", data_union_.data_int.data);
		return;
	}
	void request::request_if(const EX_STRUCT_CHAR data) {
		data_union_.data_char = data;
		LOG_OUTPUT("EX_STRUCT_CHAR: %s", data_union_.data_char.data);
		return;
	}
	void request::request_if(const EX_STRUCT_ENUM data) {
		data_union_.data_enum = data;
		LOG_OUTPUT("EX_STRUCT_ENUM: %d", data_union_.data_enum.data);
		return;
	}
	void request::request_if(const EX_STRUCT_INFO data) {
		data_union_.data_info = data;
		LOG_OUTPUT("EX_STRUCT_INFO: %d", data_union_.data_info.info.data);
		return;
	}
}