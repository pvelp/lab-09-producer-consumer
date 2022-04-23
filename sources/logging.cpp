//
// Created by pvelp on 4/16/22.

#include "logging.hpp"

void set_logs(){
  auto console_log = logs::add_console_log(
      std::clog,
      keywords::format = "[%TimeStamp%][%Severity%][%ThreadID%]: %Message%");
  console_log->set_filter(logs::trivial::severity >= logs::trivial::trace);
}