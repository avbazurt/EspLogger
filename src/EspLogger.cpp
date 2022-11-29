#include "EspLogger.h"

void log_to_esp(esp_log_level_t level, const char *format, ...)
{
    va_list va_args;
    va_start(va_args, format);

    char log_buffer[512];
    int len = vsnprintf(log_buffer, sizeof(log_buffer), format, va_args);
    if (len > 0)
    {
        esp_log_write(level, "%s", log_buffer);
    }
    va_end(va_args);
}
