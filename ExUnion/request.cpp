#include "request.h"
#include "string.h"
#include "logout.h"

using namespace std;
namespace hukusuke {
	/* request_if method. */
	void request::request_if(const EX_STRUCT_INT  data) {
		memset(&data_union_, 0, sizeof(data_union_));						// 共用体を初期化.
		data_union_.data_int = data;										// 共用体へセット.
		LOG_OUTPUT("EX_STRUCT_INT:  %d", data_union_.data_int.data);		// 出力
		return;
	}

	void request::request_if(const EX_STRUCT_CHAR data) {
		memset(&data_union_, 0, sizeof(data_union_));						// 共用体を初期化.
		data_union_.data_char = data;										// 共用体へセット.
		LOG_OUTPUT("EX_STRUCT_CHAR: %s", data_union_.data_char.data);		// 出力
		return;
	}

	void request::request_if(const EX_STRUCT_ENUM data) {
		memset(&data_union_, 0, sizeof(data_union_));						// 共用体を初期化.
		data_union_.data_enum = data;										// 共用体へセット.
		LOG_OUTPUT("EX_STRUCT_ENUM: %d", data_union_.data_enum.data);		// 出力
		return;
	}

	void request::request_if(const EX_STRUCT_INFO data) {
		memset(&data_union_, 0, sizeof(data_union_));						// 共用体を初期化.
		data_union_.data_info = data;										// 共用体へセット.
		LOG_OUTPUT("EX_STRUCT_INFO: %d", data_union_.data_info.info.data);	// 出力
		return;
	}

	void request::request_if(const EX_STRUCT_PTR  data_ptr) {
		memset(&data_union_, 0, sizeof(data_union_));						// 共用体を初期化.
		data_union_.data_ptr = data_ptr;									// 共用体へセット.
		LOG_OUTPUT("EX_STRUCT_PTR:  %s", data_union_.data_ptr.data);		// 出力
		return;
	}
}