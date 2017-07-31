#include "request.h"
#include "string.h"
#include "logout.h"

using namespace std;
namespace hukusuke {
	/* request_if method. */
	void request::request_if(const EX_STRUCT_INT  data) {
		memset(&data_union_, 0, sizeof(data_union_));						// ���p�̂�������.
		data_union_.data_int = data;										// ���p�̂փZ�b�g.
		LOG_OUTPUT("EX_STRUCT_INT:  %d", data_union_.data_int.data);		// �o��
		return;
	}

	void request::request_if(const EX_STRUCT_CHAR data) {
		memset(&data_union_, 0, sizeof(data_union_));						// ���p�̂�������.
		data_union_.data_char = data;										// ���p�̂փZ�b�g.
		LOG_OUTPUT("EX_STRUCT_CHAR: %s", data_union_.data_char.data);		// �o��
		return;
	}

	void request::request_if(const EX_STRUCT_ENUM data) {
		memset(&data_union_, 0, sizeof(data_union_));						// ���p�̂�������.
		data_union_.data_enum = data;										// ���p�̂փZ�b�g.
		LOG_OUTPUT("EX_STRUCT_ENUM: %d", data_union_.data_enum.data);		// �o��
		return;
	}

	void request::request_if(const EX_STRUCT_INFO data) {
		memset(&data_union_, 0, sizeof(data_union_));						// ���p�̂�������.
		data_union_.data_info = data;										// ���p�̂փZ�b�g.
		LOG_OUTPUT("EX_STRUCT_INFO: %d", data_union_.data_info.info.data);	// �o��
		return;
	}

	void request::request_if(const EX_STRUCT_PTR  data_ptr) {
		memset(&data_union_, 0, sizeof(data_union_));						// ���p�̂�������.
		data_union_.data_ptr = data_ptr;									// ���p�̂փZ�b�g.
		LOG_OUTPUT("EX_STRUCT_PTR:  %s", data_union_.data_ptr.data);		// �o��
		return;
	}
}