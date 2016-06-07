#include "GradeException.h"



GradeException::GradeException(string _msg)
{
	msg = _msg;
}


GradeException::~GradeException()
{
}

const char * GradeException::what() const {
	return msg.c_str();
}
