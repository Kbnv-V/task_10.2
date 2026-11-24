#include "ShapeException.h"

ShapeException::ShapeException(std::string_view err) : errorStr{ err }, domain_error(errorStr)
{
};

const char* ShapeException::what() const noexcept
{
	return errorStr.c_str();
}