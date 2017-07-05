#pragma once

#include "stdint.h"
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

uint8_t get_types(char **result);
uint8_t get_resource(char **result, char* type_name,  char* resource_name);
uint8_t get_resources(char **result, char* type_name);

#ifdef __cplusplus
}
#endif
