#ifndef INCLUDE_INCLUDE_RVNLOG_H_
#define INCLUDE_INCLUDE_RVNLOG_H_

typedef enum { LOG_INFO, LOG_DEBUG, LOG_WARN, LOG_ERROR, LOG_FATAL } logtype_t;

char *_log_type_to_string(logtype_t type);

#define rvnlogf(msg, type, fmt...)                                             \
  printf("[%s]: " msg, _log_type_to_string(type), fmt)

#endif // INCLUDE_INCLUDE_RVNLOG_H_
