// ExUnion.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include "request.h"
#include "logout.h"
#include  <string>

#define MAX_SIZE (10)

using namespace std;
using namespace hukusuke;

int main(void)
{
	LOG_OUTPUT("Start.");

	// データ定義.
	int value_int = 0;

	char* value_char_p = new char[MAX_SIZE+1];
	memset(value_char_p, 0, MAX_SIZE+1);
	strncpy(value_char_p, "CHAR_P", MAX_SIZE);

	string  value_string = "STRING";

	// リクエスト.
	request request_instance;
	request_instance.request_if(value_int);
	request_instance.request_if(value_char_p);
	request_instance.request_if(value_string);
	request_instance.output();

	// 後処理.
	if (NULL != value_char_p) { delete value_char_p; value_char_p = NULL; }

	LOG_OUTPUT("Terminate.");
    return 0;
}

