#include "esp32-hal-log.h"

// Delete function Log
#undef log_e
#undef log_w
#undef log_d
#undef log_i
#undef log_v

void log_to_esp(esp_log_level_t level, const char *format, ...);

// Create New Log
#define log_e(format, ...) do {log_to_esp(ESP_LOG_ERROR, ARDUHAL_LOG_FORMAT(E, format), ##__VA_ARGS__);}while(0)
#define log_w(format, ...) do {log_to_esp(ESP_LOG_WARN, ARDUHAL_LOG_FORMAT(W, format), ##__VA_ARGS__);}while(0)
#define log_d(format, ...) do {log_to_esp(ESP_LOG_DEBUG, ARDUHAL_LOG_FORMAT(D, format), ##__VA_ARGS__);}while(0)
#define log_i(format, ...) do {log_to_esp(ESP_LOG_INFO, ARDUHAL_LOG_FORMAT(I, format), ##__VA_ARGS__);}while(0)
#define log_v(format, ...) do {log_to_esp(ESP_LOG_VERBOSE, ARDUHAL_LOG_FORMAT(V, format), ##__VA_ARGS__);}while(0)
